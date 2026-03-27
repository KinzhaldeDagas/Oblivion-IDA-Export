void __stdcall sub_74DEB0(float a1, int a2)
{
  int v3; // edx
  unsigned __int16 v4; // di
  double v5; // st6
  int v6; // ebx
  int v7; // ecx
  double v8; // st4
  bool v9; // c0
  double v10; // st4
  int v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+10h] [ebp+8h]
  float v13; // [esp+10h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 0x54);
  if ( v3 )
  {
    v4 = 0;
    v11 = *(_DWORD *)(a2 + 0x60);
    if ( *(_WORD *)(a2 + 0x48) )
    {
      v5 = dbl_A3F3E8;
      v6 = dword_B40A78;
      do
      {
        v7 = 4 * v4;
        v12 = a1 - *(float *)(*(_DWORD *)(a2 + 0x5C) + 0x1C * v4 + 0x14);
        v13 = v12 * *(float *)(v7 + v11) + *(float *)(v7 + v3);
        v8 = v13;
        *(float *)(v7 + v3) = v13;
        if ( (v6 & 1) == 0 )
        {
          v6 |= 1u;
          flt_B40A74 = flt_B3F9A4 * v5;
        }
        if ( flt_B40A74 >= v8 )
        {
          v9 = flt_B3F9A0 < v8;
          v10 = flt_B3F9A0;
          if ( v9 )
          {
            do
            {
              *(float *)(v7 + v3) = *(float *)(v7 + v3) - v10;
              v10 = flt_B3F9A0;
            }
            while ( v10 < *(float *)(v7 + v3) );
          }
        }
        else
        {
          *(float *)(v7 + v3) = 0.0;
        }
        ++v4;
      }
      while ( v4 < *(_WORD *)(a2 + 0x48) );
      dword_B40A78 = v6;
    }
  }
}
