struct _ACMDRVSTREAMINSTANCE
{
DWORD cbStruct;
PWAVEFORMATEX pwfxSrc;
PWAVEFORMATEX pwfxDst;
PWAVEFILTER pwfltr;
DWORD_PTR dwCallback;
DWORD_PTR dwInstance;
DWORD fdwOpen;
DWORD fdwDriver;
DWORD_PTR dwDriver;
HACMSTREAM has;
};
