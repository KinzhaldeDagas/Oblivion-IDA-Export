void __thiscall sub_85C7D0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi

  v7 = (NiD3DPass *)unk_B477B4; /*0x85c7fb*/
  sub_848E50(*(float **)(a4 + 0xC)); /*0x85c802*/
  if ( !(_BYTE)value ) /*0x85c80c*/
  {
    value = v7; /*0x85c810*/
    if ( v7 ) /*0x85c814*/
      ++v7->RefCount; /*0x85c816*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c82e*/
    if ( v7 ) /*0x85c83c*/
    {
      if ( v7->RefCount-- == 1 ) /*0x85c83e*/
        NiD3DPass_ReleaseToPool(v7); /*0x85c845*/
    }
    ++*((_DWORD *)this + 0xE); /*0x85c84a*/
  }
}
