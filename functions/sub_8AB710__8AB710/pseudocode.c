unsigned int __thiscall sub_8AB710(float *this, int a2, int *a3)
{
  unsigned int result; // eax
  unsigned int v6; // eax
  int v7; // ebx
  unsigned int v8; // [esp+Ch] [ebp-4h]
  unsigned int v9; // [esp+14h] [ebp+4h]
  int v10; // [esp+18h] [ebp+8h]

  sub_715D80(this, a2, a3);
  *(float *)(a2 + 0x3C) = *(this + 0xF);
  sub_8AA480((unsigned int *)(a2 + 0x40), *((_DWORD *)this + 0x14));
  result = 0;
  v9 = 0;
  if ( *((_DWORD *)this + 0x14) )
  {
    v10 = 0;
    do
    {
      v6 = *(_DWORD *)(a2 + 0x4C);
      v7 = v10 + *((_DWORD *)this + 0x11);
      v8 = v6;
      if ( v6 >= *(_DWORD *)(a2 + 0x48) )
      {
        sub_8AA480((unsigned int *)(a2 + 0x40), v6 + *(_DWORD *)(a2 + 0x54));
        v6 = v8;
      }
      sub_8AA710((_DWORD *)(a2 + 0x40), v6, v7);
      *(_DWORD *)(a2 + 0x3C) = 0;
      sub_8AABE0(a2);
      v10 += 0xC;
      result = ++v9;
    }
    while ( v9 < *((_DWORD *)this + 0x14) );
  }
  return result;
}
