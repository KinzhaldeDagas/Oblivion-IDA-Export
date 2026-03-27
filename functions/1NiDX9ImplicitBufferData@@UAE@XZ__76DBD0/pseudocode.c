void __thiscall NiDX9ImplicitBufferData::~NiDX9ImplicitBufferData(NiDX9ImplicitBufferData *this)
{
  UINT PresentationInterval; // eax
  IDirect3DSurface9 *Surface; // eax

  PresentationInterval = this->PresentParams.PresentationInterval;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9ImplicitBufferData::`vftable';
  if ( PresentationInterval )
  {
    (*(void (__stdcall **)(UINT))(*(_DWORD *)PresentationInterval + 8))(PresentationInterval);
    this->PresentParams.PresentationInterval = 0;
  }
  Surface = this->super.Surface;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable';
  if ( Surface )
  {
    Surface->lpVtbl->Release(Surface);
    this->super.Surface = 0;
  }
  FormHeapFree((unsigned int)this->super.SurfaceData);
  this->super.SurfaceData = 0;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
