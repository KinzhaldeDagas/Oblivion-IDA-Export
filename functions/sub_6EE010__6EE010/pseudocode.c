void __stdcall sub_6EE010(float a1, unsigned int *a2, int a3)
{
  unsigned int *v3; // esi
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // edx
  _DWORD *v7; // ecx
  unsigned int j; // edi
  double v9; // st7
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int i; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]
  float *v16; // [esp+1Ch] [ebp-10h]
  float v17; // [esp+1Ch] [ebp-10h]
  double v18; // [esp+24h] [ebp-8h]

  v3 = a2;
  v4 = a3 - (_DWORD)a2;
  v15 = 2;
  do
  {
    v14 = 2;
    do
    {
      v5 = *v3;
      v6 = v3[1];
      *(unsigned int *)((char *)v3 + v4) = *v3;
      v7 = (unsigned int *)((char *)v3 + v4 + 8);
      v7[0xFFFFFFFF] = v6;
      sub_527160(v7, v6 * v5, COERCE_INT(0.0));
      for ( i = 0; i < *v3; ++i )
      {
        for ( j = 0; j < v3[1]; *(float *)(*(unsigned int *)((char *)v3 + v4 + 0xC) + 4 * v12) = v17 )
        {
          v9 = sub_6F6A80();
          v10 = v3[3];
          v18 = v9 * a1 * dbl_A563D0;
          if ( !v10 || !((int)(v3[4] - v10) >> 2) )
            _invalid_parameter_noinfo();
          v11 = *(unsigned int *)((char *)v3 + v4 + 0xC);
          v16 = (float *)(v3[3] + 4 * (j + i * v3[1]));
          if ( !v11 || !((int)(*(unsigned int *)((char *)v3 + v4 + 0x10) - v11) >> 2) )
            _invalid_parameter_noinfo();
          v12 = j + i * *(unsigned int *)((char *)v3 + v4 + 4);
          ++j;
          v17 = *v16 + v18;
        }
      }
      v3 += 6;
      --v14;
    }
    while ( v14 );
    --v15;
  }
  while ( v15 );
}
