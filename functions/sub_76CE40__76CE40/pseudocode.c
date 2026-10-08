// Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
// DX11 pass-queue audit 2026-10-01: embedded array layout vtable+0/data+4/capacity(u16)+8/end(u16)+A/live(u16)+C/grow(u16)+E. SetAt changes end/live but does not allocate or check capacity. It releases old pass+60 before installing/retaining new. Cold B42578 bit0 initialization zeros B42574 and registers A26DC0 via atexit; setting only the bit loses required lifecycle behavior.
NiD3DPass *__thiscall NiTArray_NiD3DPass_SetAt(NiTArray_NiD3DPass *this, unsigned int index, NiD3DPass **value)
{
  NiD3DPass *result; // eax
  int v5; // ecx
  NiD3DPass *data; // edx
  NiD3DPass **v7; // esi
  NiD3DPass *v8; // ecx
  bool v9; // zf

  if ( (NiD3DPassArray_EmptySentinelInitFlags[0] & 1) == 0 ) /*0x76ce50*/
  {
    NiD3DPassArray_EmptySentinelInitFlags[0] |= 1u; /*0x76ce52*/
    NiD3DPassArray_EmptySentinel = 0; /*0x76ce5d*/
    atexit(NiD3DPassArray_DestroyEmptySentinel); /*0x76ce67*/
  }
  result = (NiD3DPass *)index; /*0x76ce73*/
  if ( index < this->end ) /*0x76ce7d*/
  {
    v5 = NiD3DPassArray_EmptySentinel; /*0x76ce96*/
    data = this->data; /*0x76ce9e*/
    if ( *value == (NiD3DPass *)NiD3DPassArray_EmptySentinel ) /*0x76cea1*/
    {
      if ( *((_DWORD *)&data->__vftable + index) != v5 ) /*0x76ceb1*/
        --this->numObjs; /*0x76ceb3*/
    }
    else if ( *((_DWORD *)&data->__vftable + index) == v5 ) /*0x76cea6*/
    {
      ++this->numObjs; /*0x76cea8*/
    }
  }
  else
  {
    this->end = index + 1; /*0x76ce82*/
    if ( *value != (NiD3DPass *)NiD3DPassArray_EmptySentinel ) /*0x76ce8e*/
      ++this->numObjs; /*0x76ce90*/
  }
  v7 = (NiD3DPass **)(&this->data->__vftable + index); /*0x76cebc*/
  v8 = *v7; /*0x76cebf*/
  if ( *v7 != *value ) /*0x76cec3*/
  {
    if ( v8 ) /*0x76cec7*/
    {
      v9 = v8->RefCount-- == 1; /*0x76cec9*/
      if ( v9 ) /*0x76cecd*/
        NiD3DPass_ReleaseToPool(v8); /*0x76cecf*/
    }
    result = *value; /*0x76ced4*/
    v9 = *value == 0; /*0x76ced6*/
    *v7 = *value; /*0x76ced8*/
    if ( !v9 ) /*0x76ceda*/
      ++result->RefCount; /*0x76cedc*/
  }
  return result; /*0x76cedf*/
}
