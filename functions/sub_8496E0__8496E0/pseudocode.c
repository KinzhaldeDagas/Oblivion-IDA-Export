void __thiscall sub_8496E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *value, int a5)
{
  NiD3DPass *v6; // edi

  v6 = (NiD3DPass *)unk_B455F0; /*0x84970c*/
  sub_848C40(*(float **)&value->Name[0xC]); /*0x849713*/
  value = v6; /*0x84971a*/
  if ( v6 ) /*0x849723*/
    ++v6->RefCount; /*0x849725*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84973c*/
  if ( v6 ) /*0x84974a*/
  {
    if ( v6->RefCount-- == 1 ) /*0x84974c*/
      NiD3DPass_ReleaseToPool(v6); /*0x849753*/
  }
  ++*((_DWORD *)this + 0xE); /*0x849758*/
}
