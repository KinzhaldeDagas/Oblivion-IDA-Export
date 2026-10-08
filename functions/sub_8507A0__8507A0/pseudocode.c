void __thiscall sub_8507A0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  bool v7; // zf
  NiD3DPass *v8; // edi

  sub_848E50(*(_DWORD *)(a4 + 0xC)); /*0x8507cd*/
  v6 = unk_B45BE8; /*0x8507d2*/
  v7 = unk_B45BE8 == 0; /*0x8507d7*/
  v8 = (NiD3DPass *)unk_B45BE8; /*0x8507d9*/
  a4 = unk_B45BE8; /*0x8507db*/
  if ( !v7 ) /*0x8507e4*/
    ++*(_DWORD *)(v6 + 0x60); /*0x8507e6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a4); /*0x8507fd*/
  if ( v8 ) /*0x85080b*/
  {
    v7 = v8->RefCount-- == 1; /*0x85080d*/
    if ( v7 ) /*0x850810*/
      NiD3DPass_ReleaseToPool(v8); /*0x850814*/
  }
  ++*((_DWORD *)this + 0xE); /*0x850819*/
}
