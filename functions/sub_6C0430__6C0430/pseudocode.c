double __cdecl sub_6C0430(float *a1, int a2)
{
  int v3; // eax
  int v4; // edi
  double v5; // st7
  bool v6; // zf
  float v8; // [esp+1Ch] [ebp-4Ch]
  int v9; // [esp+20h] [ebp-48h]
  float v10; // [esp+20h] [ebp-48h]
  float v11; // [esp+20h] [ebp-48h]
  float v12; // [esp+20h] [ebp-48h]
  float v13; // [esp+20h] [ebp-48h]
  float v14; // [esp+20h] [ebp-48h]
  int v15; // [esp+24h] [ebp-44h]
  float v16; // [esp+44h] [ebp-24h]
  float v17; // [esp+48h] [ebp-20h]
  float v18; // [esp+4Ch] [ebp-1Ch]
  int v19; // [esp+50h] [ebp-18h] BYREF
  float v20; // [esp+54h] [ebp-14h]
  float v21; // [esp+58h] [ebp-10h]
  int v22; // [esp+5Ch] [ebp-Ch] BYREF
  float v23; // [esp+60h] [ebp-8h]
  float v24; // [esp+64h] [ebp-4h]

  v8 = 0.0;
  if ( a2 != 1 )
  {
    v15 = a2 - 1;
    v3 = dword_B23D84;
    do
    {
      v4 = 0;
      v9 = 0;
      if ( v3 >= 0 )
      {
        do
        {
          v10 = (double)v9 * flt_B3C2F4;
          sub_6BFDB0(v10, a1, (int)(a1 + 0x13), (float *)&v22);
          sub_6BFE90(v10, a1, (int)(a1 + 0x13), (float *)&v19);
          v16 = v23 * v21 - v24 * v20;
          v17 = v24 * *(float *)&v19 - v21 * *(float *)&v22;
          v18 = v20 * *(float *)&v22 - *(float *)&v19 * v23;
          v11 = v18 * v18 + v16 * v16 + v17 * v17;
          v12 = sqrt(v11);
          v5 = v12;
          v13 = *(float *)&v22 * *(float *)&v22 + v23 * v23 + v24 * v24;
          v14 = v5 / v13;
          if ( v8 < (double)v14 )
            v8 = v14;
          v3 = dword_B23D84;
          v9 = ++v4;
        }
        while ( v4 <= dword_B23D84 );
      }
      v6 = v15-- == 1;
      a1 += 0x13;
    }
    while ( !v6 );
  }
  return v8;
}
