float *__thiscall sub_9517D0(int this)
{
  double v1; // st7
  float *v2; // edx
  int v3; // ecx
  unsigned int v4; // eax
  float *v5; // esi
  unsigned int v6; // edi
  int v7; // ecx
  double v8; // st6
  float v10; // [esp+0h] [ebp-4h]

  v1 = *(float *)(this + 0xF80);
  v2 = (float *)(this + 0xF70);
  v3 = *(_DWORD *)(this + 0x10) - 2;
  v4 = v3 + 1;
  v5 = v2;
  if ( v3 + 1 >= 4 )
  {
    v6 = v4 >> 2;
    v3 -= 4 * (v4 >> 2);
    do
    {
      if ( v2[0x18] < v1 )
      {
        v5 = v2 + 0x14;
        v1 = v2[0x18];
      }
      if ( v2[0x2C] < v1 )
      {
        v5 = v2 + 0x28;
        v1 = v2[0x2C];
      }
      if ( v2[0x40] < v1 )
      {
        v5 = v2 + 0x3C;
        v1 = v2[0x40];
      }
      if ( v2[0x54] < v1 )
      {
        v5 = v2 + 0x50;
        v1 = v2[0x54];
      }
      v2 += 0x50;
      --v6;
    }
    while ( v6 );
  }
  if ( v3 >= 0 )
  {
    v7 = v3 + 1;
    do
    {
      v8 = v2[0x18];
      v2 += 0x14;
      if ( v8 < v1 )
      {
        v5 = v2;
        v10 = v8;
        v1 = v10;
      }
      --v7;
    }
    while ( v7 );
  }
  return v5;
}
