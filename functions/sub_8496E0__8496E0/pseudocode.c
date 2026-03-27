void __thiscall sub_8496E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *a4, int a5)
{
  NiD3DPass *v6; // edi

  v6 = (NiD3DPass *)dword_B455F0;
  sub_848C40(*(float **)&a4->Name[0xC]);
  a4 = v6;
  if ( v6 )
    ++v6->RefCount;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a4);
  if ( v6 )
  {
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
  }
  ++*((_DWORD *)this + 0xE);
}
