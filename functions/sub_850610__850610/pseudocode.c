void __thiscall sub_850610(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  bool v7; // zf
  NiD3DPass *v8; // edi

  sub_848E50(*(_DWORD *)(a4 + 0xC)); /*0x85063d*/
  v6 = unk_B45BE0; /*0x850642*/
  v7 = unk_B45BE0 == 0; /*0x850647*/
  v8 = (NiD3DPass *)unk_B45BE0; /*0x850649*/
  a4 = unk_B45BE0; /*0x85064b*/
  if ( !v7 ) /*0x850654*/
    ++*(_DWORD *)(v6 + 0x60); /*0x850656*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a4); /*0x85066d*/
  if ( v8 ) /*0x85067b*/
  {
    v7 = v8->RefCount-- == 1; /*0x85067d*/
    if ( v7 ) /*0x850680*/
      NiD3DPass_ReleaseToPool(v8); /*0x850684*/
  }
  ++*((_DWORD *)this + 0xE); /*0x850689*/
}
