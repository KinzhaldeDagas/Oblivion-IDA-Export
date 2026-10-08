struct _D3DPRESENT_PARAMETERS_
{
UINT BackBufferWidth;
UINT BackBufferHeight;
D3DFORMAT BackBufferFormat;
UINT BackBufferCount;
D3DMULTISAMPLE_TYPE MultiSampleType;
DWORD MultiSampleQuality;
D3DSWAPEFFECT SwapEffect;
HWND hDeviceWindow;
BOOL Windowed;
BOOL EnableAutoDepthStencil;
D3DFORMAT AutoDepthStencilFormat;
DWORD Flags;
UINT FullScreen_RefreshRateInHz;
UINT PresentationInterval;
};
