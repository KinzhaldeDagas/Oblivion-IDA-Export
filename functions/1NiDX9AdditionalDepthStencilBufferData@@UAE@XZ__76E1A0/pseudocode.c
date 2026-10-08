void __thiscall NiDX9AdditionalDepthStencilBufferData::~NiDX9AdditionalDepthStencilBufferData(
        NiDX9AdditionalDepthStencilBufferData *this)
{
  IDirect3DSurface9 *Surface; // eax
  void *data; // [esp+8h] [ebp-4h] BYREF

  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9AdditionalDepthStencilBufferData::`vftable'; /*0x76e1aa*/
  EnterCriticalSection(&unk_B42680); /*0x76e1b0*/
  unk_B426F8 = GetCurrentThreadId(); /*0x76e1bc*/
  ++unk_B426FC; /*0x76e1ca*/
  data = this; /*0x76e1d6*/
  NiTPointerList_RemoveByData(&list, &data); /*0x76e1da*/
  if ( unk_B426FC-- == 1 ) /*0x76e1df*/
    unk_B426F8 = 0; /*0x76e1ec*/
  LeaveCriticalSection(&unk_B42680); /*0x76e1f7*/
  Surface = this->super.Surface; /*0x76e1fd*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable'; /*0x76e202*/
  if ( Surface ) /*0x76e208*/
  {
    Surface->lpVtbl->Release(Surface); /*0x76e210*/
    this->super.Surface = 0; /*0x76e212*/
  }
  FormHeapFree((unsigned int)this->super.SurfaceData); /*0x76e219*/
  this->super.SurfaceData = 0; /*0x76e226*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76e229*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x76e22f*/
}
