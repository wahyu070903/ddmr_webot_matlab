function [sys,x0]=epanim1(t,x,u,flag,ts);

%   Drifferentially-Driven Mobile Robot S-function for animating the motion of a mass-spring system.
%   (c)Endra Pitowarno, 2003 
%   pgep@graduan.fkm.utm.my at 06-xx-2003

global DDMR

if flag==2,
    if any(get(0,'Children')==DDMR),
        
      if strcmp(get(DDMR,'Name'),'DDMR Animation'),
        set(0,'currentfigure',DDMR);
        hndl=get(gca,'UserData');
   
  %..........................
  
        x=[u(1)-.05657*cos(1.25*pi+u(3)+pi)*10;
           u(1)-.04472*cos(1.5*pi+u(3)+pi+atan(.5))*10;
           u(1)-.04472*cos(1.5*pi+u(3)+pi+atan(2))*10;
           u(1)-.04472*cos(u(3)+pi+atan(.5))*10;
           u(1)-.04472*cos(u(3)+pi+atan(2))*10;        
           u(1)-.05657*cos(.75*pi+u(3)+pi)*10;
           u(1)-.05657*cos(1.25*pi+u(3)+pi)*10];
            
        y=[u(2)-.05657*sin(1.25*pi+u(3)+pi)*10;
           u(2)-.04472*sin(1.5*pi+u(3)+pi+atan(.5))*10;
           u(2)-.04472*sin(1.5*pi+u(3)+pi+atan(2))*10;
           u(2)-.04472*sin(u(3)+pi+atan(.5))*10;
           u(2)-.04472*sin(u(3)+pi+atan(2))*10;        
           u(2)-.05657*sin(.75*pi+u(3)+pi)*10;
           u(2)-.05657*sin(1.25*pi+u(3)+pi)*10];

        set(hndl,'XData',x);
        set(hndl,'YData',y);

        drawnow
        X1=u(1);
        Y1=u(2);
        plot(X1,Y1,'.r','LineWidth',2);
        plot(x,y,'b','EraseMode','background','LineWidth',.1);
        %plot(xm,ym,'b','EraseMode','background','LineWidth',1);
   
    
      end
   
    end
    sys=[];
       
elseif flag == 4 % Return next sample hit
  
  % ns stores the number of samples
  ns = t/ts;
 

  % This is the time of the next sample hit.
  sys = (1 + floor(ns + 1e-5*(1+ns)))*ts;

elseif flag==0,

    % Initialize the figure for use with this simulation
    animinit('DDMR Animation');
    DDMR = findobj('Type','figure','Name','DDMR Animation');
    axis([-2 15 -2 15]);
    hold on;

    xx = 0:0.001:pi/2; 
    plot(10*cos(xx),10*sin(xx),'-g'), grid on

    x1=[-2 28];
    y1=[0 0];
    plot(x1,y1,'k','LineWidth',.2);
    
    x2=[0 0];
    y2=[-2 26];
    plot(x2,y2,'k','LineWidth',.2);
    
    x3=[0 10];
    y3=[0 10];
    plot(x3,y3,':k','LineWidth',.1);
  
    x4=[0 10];
    y4=[2 12];
    plot(x4,y4,':k','LineWidth',.1);

    x5=[2 12];
    y5=[0 10];
    plot(x5,y5,':k','LineWidth',.1);

    
    % Draw the DDMR

    %hndl=plot(x,y,'b','EraseMode','background','LineWidth',.3);

    %set(gca,'UserData',hndl);

    sys=[0 0 0 3 0 0];
    x0=[];

end;