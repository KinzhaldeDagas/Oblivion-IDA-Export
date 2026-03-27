void __thiscall sub_850610(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  bool v7; // zf
  NiD3DPass *v8; // edi

  sub_848E50(*(_DWORD *)(a4 + 0xC));
  v6 = dword_B45BE0;
  v7 = dword_B45BE0 == 0;
  v8 = (NiD3DPass *)dword_B45BE0;
  a4 = dword_B45BE0;
  if ( !v7 )
    ++*(_DWORD *)(v6 + 0x60);
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a4);
  if ( v8 )
  {
    v7 = v8->RefCount-- == 1;
    if ( v7 )
      sub_7604D0(v8);
  }
  ++*((_DWORD *)this + 0xE);
}
