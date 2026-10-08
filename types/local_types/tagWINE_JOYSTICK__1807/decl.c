struct tagWINE_JOYSTICK
{
JOYINFO ji;
HWND hCapture;
UINT wTimer;
DWORD threshold;
BOOL bChanged;
HDRVR hDriver;
};
