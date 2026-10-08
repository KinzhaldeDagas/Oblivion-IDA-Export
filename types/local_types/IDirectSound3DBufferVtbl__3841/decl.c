struct IDirectSound3DBufferVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSound3DBuffer_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSound3DBuffer_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSound3DBuffer_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetAllParameters)(IDirectSound3DBuffer_0 *, LPDS3DBUFFER) __offset(OFF64|AUTO);
HRESULT_0 (*GetConeAngles)(IDirectSound3DBuffer_0 *, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetConeOrientation)(IDirectSound3DBuffer_0 *, LPD3DVECTOR) __offset(OFF64|AUTO);
HRESULT_0 (*GetConeOutsideVolume)(IDirectSound3DBuffer_0 *, LPLONG) __offset(OFF64|AUTO);
HRESULT_0 (*GetMaxDistance)(IDirectSound3DBuffer_0 *, LPD3DVALUE) __offset(OFF64|AUTO);
HRESULT_0 (*GetMinDistance)(IDirectSound3DBuffer_0 *, LPD3DVALUE) __offset(OFF64|AUTO);
HRESULT_0 (*GetMode)(IDirectSound3DBuffer_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetPosition)(IDirectSound3DBuffer_0 *, LPD3DVECTOR) __offset(OFF64|AUTO);
HRESULT_0 (*GetVelocity)(IDirectSound3DBuffer_0 *, LPD3DVECTOR) __offset(OFF64|AUTO);
HRESULT_0 (*SetAllParameters)(IDirectSound3DBuffer_0 *, LPCDS3DBUFFER, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetConeAngles)(IDirectSound3DBuffer_0 *, DWORD, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetConeOrientation)(IDirectSound3DBuffer_0 *, D3DVALUE, D3DVALUE, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetConeOutsideVolume)(IDirectSound3DBuffer_0 *, LONG, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetMaxDistance)(IDirectSound3DBuffer_0 *, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetMinDistance)(IDirectSound3DBuffer_0 *, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetMode)(IDirectSound3DBuffer_0 *, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetPosition)(IDirectSound3DBuffer_0 *, D3DVALUE, D3DVALUE, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetVelocity)(IDirectSound3DBuffer_0 *, D3DVALUE, D3DVALUE, D3DVALUE, DWORD) __offset(OFF64|AUTO);
};
