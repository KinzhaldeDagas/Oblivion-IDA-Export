bool __thiscall sub_7687D0(IDirect3DDevice9 **this, Ni2DBuffer *parentBuffer, void *pixelFormat)
{
  Ni2DBuffer *v3; // esi
  const void *v5; // edi
  NiRTTI *v6; // eax
  IDirect3DDevice9 *v8; // [esp-Ch] [ebp-18h]

  v3 = parentBuffer; /*0x7687d2*/
  if ( !parentBuffer ) /*0x7687db*/
    return 0; /*0x7687db*/
  v5 = pixelFormat; /*0x7687dd*/
  if ( !pixelFormat ) /*0x7687e3*/
    return 0; /*0x7687e3*/
  v6 = (NiRTTI *)(*((int (__thiscall **)(Ni2DBuffer *))parentBuffer->__vftable + 1))(parentBuffer); /*0x7687ec*/
  if ( !v6 ) /*0x7687f0*/
    return 0; /*0x768800*/
  while ( v6 != &stru_B3FAC0 ) /*0x7687f7*/
  {
    v6 = v6->parent; /*0x7687f9*/
    if ( !v6 ) /*0x7687fe*/
      return 0; /*0x7687fe*/
  }
  v8 = *(this + 0xA0); /*0x768814*/
  parentBuffer = v3; /*0x768815*/
  return NiDX9AdditionalDepthStencilBufferData::Create(v8, &parentBuffer, v5) != 0; /*0x768800*/
}
