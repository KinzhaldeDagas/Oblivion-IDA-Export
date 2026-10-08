void __thiscall sub_85BF40(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *value)
{
  int v7; // eax
  bool v8; // zf
  NiD3DPass *v9; // esi

  if ( !(_BYTE)value ) /*0x85bf69*/
  {
    v7 = unk_B47790[0]; /*0x85bf6b*/
    v8 = unk_B47790[0] == 0; /*0x85bf70*/
    v9 = (NiD3DPass *)unk_B47790[0]; /*0x85bf72*/
    value = (NiD3DPass *)unk_B47790[0]; /*0x85bf74*/
    if ( !v8 ) /*0x85bf78*/
      ++*(_DWORD *)(v7 + 0x60); /*0x85bf7a*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85bf92*/
    if ( v9 ) /*0x85bfa0*/
    {
      v8 = v9->RefCount-- == 1; /*0x85bfa2*/
      if ( v8 ) /*0x85bfa5*/
        NiD3DPass_ReleaseToPool(v9); /*0x85bfa9*/
    }
    ++*((_DWORD *)this + 0xE); /*0x85bfae*/
  }
}
