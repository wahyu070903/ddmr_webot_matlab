%% Inisialisasi Variabel untuk ep_DDMR_5Methods

% Status flag
I_status    = 0;
IL_status   = 1;       % bisa 0 atau 1
PDIL_status = [1 2];   % sesuai blok PDIL

% Gain Controller
Gc = [2 2 3 4];        % atau [2 2 3 4] sesuai mode

% Selector index
Qtype = [1 2];         % jumlah input di blok "Selector"
Qstatus = [1 0];       % jika output butuh vektor

% Dummy variabel untuk input blok lain
DIN     = 1;
pureIN  = 1;
IN      = 1;
M       = 1;
M1      = 1;
Acc     = 1;