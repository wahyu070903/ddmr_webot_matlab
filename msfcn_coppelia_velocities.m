function msfcn_coppelia_velocities(block)
% Level-2 MATLAB S-Function for sending velocities to CoppeliaSim
  setup(block);
end

function setup(block)
  % Register number of input ports (2 inputs: vRight, vLeft)
  block.NumInputPorts  = 2;
  block.NumOutputPorts = 0;

  % Input 1 = Right wheel velocity
  block.InputPort(1).Dimensions  = 1;
  block.InputPort(1).DirectFeedthrough = true;

  % Input 2 = Left wheel velocity
  block.InputPort(2).Dimensions  = 1;
  block.InputPort(2).DirectFeedthrough = true;

  % Register methods
  block.RegBlockMethod('Start', @Start);
  block.RegBlockMethod('Outputs', @Outputs);
  block.RegBlockMethod('Terminate', @Terminate);
end

function Start(block)
  % Connect to CoppeliaSim when Simulink starts
  global sim clientID RightMotor LeftMotor
  
  sim = remApi('remoteApi');
  sim.simxFinish(-1);
  clientID = sim.simxStart('127.0.0.1',19000,true,true,5000,5);

  if clientID > -1
      disp(['Connected to CoppeliaSim ID = ' num2str(clientID)]);
      [~, RightMotor] = sim.simxGetObjectHandle(clientID,'/rightMotor',sim.simx_opmode_blocking);
      [~, LeftMotor]  = sim.simxGetObjectHandle(clientID,'/leftMotor', sim.simx_opmode_blocking);
  else
      error('Could not connect to CoppeliaSim');
  end
end

function Outputs(block)
  global sim clientID RightMotor LeftMotor

  vRight = block.InputPort(1).Data;
  vLeft  = block.InputPort(2).Data;

  sim.simxSetJointTargetVelocity(clientID, RightMotor, vRight, sim.simx_opmode_oneshot);
  sim.simxSetJointTargetVelocity(clientID, LeftMotor,  vLeft,  sim.simx_opmode_oneshot);
end

function Terminate(block)
  global sim clientID
  sim.simxStopSimulation(clientID,sim.simx_opmode_blocking);
  sim.simxFinish(clientID);
  sim.delete();
end
