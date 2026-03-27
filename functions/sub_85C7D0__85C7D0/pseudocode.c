void __thiscall sub_85C7D0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // esi

  v7 = (NiD3DPass *)dword_B477B4;
  sub_848E50(*(_DWORD *)(a4 + 0xC));
  if ( !(_BYTE)a6 )
  {
    a6 = v7;
    if ( v7 )
      ++v7->RefCount;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v7 )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
    }
    ++*((_DWORD *)this + 0xE);
  }
}
