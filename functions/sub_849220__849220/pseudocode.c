void __thiscall sub_849220(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *value, int a5)
{
  NiD3DPass *v6; // edi

  v6 = (NiD3DPass *)unk_B455E0; /*0x84924c*/
  sub_848C40(*(float **)&value->Name[0xC]); /*0x849253*/
  value = v6; /*0x84925a*/
  if ( v6 ) /*0x849263*/
    ++v6->RefCount; /*0x849265*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84927c*/
  if ( v6 ) /*0x84928a*/
  {
    if ( v6->RefCount-- == 1 ) /*0x84928c*/
      NiD3DPass_ReleaseToPool(v6); /*0x849293*/
  }
  ++*((_DWORD *)this + 0xE); /*0x849298*/
}
