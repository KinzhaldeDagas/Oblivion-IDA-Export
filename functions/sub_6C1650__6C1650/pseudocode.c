void __cdecl sub_6C1650(float *a1, unsigned int a2)
{
  float *v3; // edx
  int v4; // esi
  float *v5; // eax
  int v6; // edi
  float *v7; // ecx
  double v8; // st7
  float *v9; // eax
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+24h] [ebp+8h]
  float v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]

  if ( a2 >= 2 )
  {
    v11 = a1[1] + a1[1] - a1[8];
    sub_6C1550(a1, v11, a1[8], 1.0, 1.0);
    v4 = a2 - 1;
    if ( a2 - 1 > 1 )
    {
      v5 = v3;
      v6 = a2 - 2;
      do
      {
        v12 = v5[0xE] - v5[7];
        v10 = v12;
        v13 = v5[7] - *v5;
        sub_6C1550(v5 + 7, v5[1], v5[0xF], v13, v10);
        --v6;
        v5 = v7;
      }
      while ( v6 );
    }
    v8 = v3[7 * v4 + 1];
    v9 = &v3[7 * a2 - 0xD];
    v14 = v8 + v8 - *v9;
    sub_6C1550(&v3[7 * v4], *v9, v14, 1.0, 1.0);
  }
}
