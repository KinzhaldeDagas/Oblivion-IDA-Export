void __thiscall sub_5359A0(int this, int a2, int a3)
{
  int v3; // edx
  int i; // eax
  int v5; // eax

  v3 = *(_DWORD *)(a2 + 0xC);
  for ( i = a2; v3; v3 = *(_DWORD *)(v3 + 0xC) )
    i = v3;
  v5 = *(_DWORD *)(i + 0x1C);
  if ( (((unsigned __int8)v5 ^ *(_BYTE *)(this + 0x40)) & 0x3F) != 0 || HIWORD(v5) == *(_WORD *)(this + 0x42) )
    sub_8B1AB0(this, a2, a3);
}
