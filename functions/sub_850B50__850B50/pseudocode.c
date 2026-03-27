void __thiscall sub_850B50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // edi
  NiD3DPass *v8; // [esp-8h] [ebp-28h]
  NiD3DPass *v9; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)dword_B455C8;
  v9 = (NiD3DPass *)dword_B455C8;
  if ( v9 )
    ++v6->RefCount;
  v8 = *((NiD3DPass **)this + 0xE);
  v10 = 0;
  sub_76CE40(this + 4, v8, &v9);
  v10 = 0xFFFFFFFF;
  if ( v6 )
  {
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
  }
  ++*((_DWORD *)this + 0xE);
}
