void __thiscall sub_85BF40(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  bool v8; // zf
  NiD3DPass *v9; // esi

  if ( !(_BYTE)a6 )
  {
    v7 = dword_B47790[0];
    v8 = dword_B47790[0] == 0;
    v9 = (NiD3DPass *)dword_B47790[0];
    a6 = dword_B47790[0];
    if ( !v8 )
      ++*(_DWORD *)(v7 + 0x60);
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a6);
    if ( v9 )
    {
      v8 = v9->RefCount-- == 1;
      if ( v8 )
        sub_7604D0(v9);
    }
    ++*((_DWORD *)this + 0xE);
  }
}
