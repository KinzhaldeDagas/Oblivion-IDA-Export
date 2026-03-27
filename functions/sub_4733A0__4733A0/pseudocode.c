int __thiscall sub_4733A0(int this, int a2)
{
  int v3; // edx
  int v4; // edx
  char v5; // al
  int v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  v3 = a2;
  if ( a2 == 5 )
  {
    v3 = 0;
  }
  else if ( a2 == 6 )
  {
    v3 = 3;
  }
  v4 = *(_DWORD *)(this + 4 * v3 + 0xA0);
  *(float *)&v7 = 0.0;
  if ( v4 )
  {
    if ( !*(_BYTE *)(this + 0xC4) )
    {
      v5 = *(_BYTE *)(*(_DWORD *)(v4 + 0x68) + 0x21);
      v8 = flt_B06538;
      if ( v5 )
        v8 = (double)v5 / dbl_A3AA50;
      *(float *)&v7 = v8 / flt_B06530;
    }
  }
  return sub_470FC0((_DWORD *)this, a2, *(float *)&v7);
}
