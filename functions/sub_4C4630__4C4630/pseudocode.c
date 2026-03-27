float *__thiscall sub_4C4630(_DWORD *this, float *a2, int a3)
{
  int i; // edi
  double v5; // st7
  float v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  float v8; // [esp+14h] [ebp-4h]

  *a2 = flt_A32048;
  a2[1] = flt_A3B888;
  if ( a3 < 0x10 )
  {
    for ( i = 0; i < 0x121; ++i )
    {
      sub_4C1DD0(this, a3, i, v7);
      v5 = v8;
      if ( *a2 > (double)v8 )
        *a2 = v8;
      if ( a2[1] < v5 )
        a2[1] = v5;
    }
  }
  return a2;
}
