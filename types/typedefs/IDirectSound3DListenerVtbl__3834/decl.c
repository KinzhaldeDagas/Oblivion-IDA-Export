struct IDirectSound3DListenerVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSound3DListener_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSound3DListener_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSound3DListener_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetAllParameters)(IDirectSound3DListener_0 *, LPDS3DLISTENER) __offset(OFF64|AUTO);
HRESULT_0 (*GetDistanceFactor)(IDirectSound3DListener_0 *, LPD3DVALUE) __offset(OFF64|AUTO);
HRESULT_0 (*GetDopplerFactor)(IDirectSound3DListener_0 *, LPD3DVALUE) __offset(OFF64|AUTO);
HRESULT_0 (*GetOrientation)(IDirectSound3DListener_0 *, LPD3DVECTOR, LPD3DVECTOR) __offset(OFF64|AUTO);
HRESULT_0 (*GetPosition)(IDirectSound3DListener_0 *, LPD3DVECTOR) __offset(OFF64|AUTO);
HRESULT_0 (*GetRolloffFactor)(IDirectSound3DListener_0 *, LPD3DVALUE) __offset(OFF64|AUTO);
HRESULT_0 (*GetVelocity)(IDirectSound3DListener_0 *, LPD3DVECTOR) __offset(OFF64|AUTO);
HRESULT_0 (*SetAllParameters)(IDirectSound3DListener_0 *, LPCDS3DLISTENER, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetDistanceFactor)(IDirectSound3DListener_0 *, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetDopplerFactor)(IDirectSound3DListener_0 *, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetOrientation)(IDirectSound3DListener_0 *, D3DVALUE, D3DVALUE, D3DVALUE, D3DVALUE, D3DVALUE, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetPosition)(IDirectSound3DListener_0 *, D3DVALUE, D3DVALUE, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetRolloffFactor)(IDirectSound3DListener_0 *, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetVelocity)(IDirectSound3DListener_0 *, D3DVALUE, D3DVALUE, D3DVALUE, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*CommitDeferredSettings)(IDirectSound3DListener_0 *) __offset(OFF64|AUTO);
};
