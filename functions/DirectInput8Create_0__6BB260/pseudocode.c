// attributes: thunk
HRESULT __stdcall DirectInput8Create_0(
        HINSTANCE hinst,
        DWORD dwVersion,
        REFIID riidltf,
        IDirectInput8 **ppvOut,
        void *punkOuter)
{
  return (*(HRESULT (__stdcall **)(HINSTANCE, DWORD, REFIID, IDirectInput8 **, void *))&DirectInput8Create)(
           hinst,
           dwVersion,
           riidltf,
           ppvOut,
           punkOuter);
}
