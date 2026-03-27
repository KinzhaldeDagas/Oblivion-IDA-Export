int __cdecl sub_730840(int a1, int a2, float a3, float a4, int a5, unsigned int a6)
{
  double v6; // st7
  int result; // eax
  double v8; // st6
  double v9; // st5
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // [esp+18h] [ebp+18h]
  int v16; // [esp+18h] [ebp+18h]

  v6 = a4;
  result = a1;
  v8 = a3;
  v9 = dbl_A3D5A8;
  v11 = 0;
  if ( (int)a6 >= 4 )
  {
    v12 = a1 + 4;
    v13 = ((a6 - 4) >> 2) + 1;
    v14 = a5 + 8;
    v11 = 4 * v13;
    do
    {
      v15 = *(__int16 *)(v12 - 4);
      v12 += 8;
      v14 += 0x10;
      --v13;
      *(float *)(v14 - 0x18) = (double)v15 / v9 * v6 + v8;
      *(float *)(v14 - 0x14) = (double)*(__int16 *)(v12 - 0xA) / v9 * v6 + v8;
      *(float *)(v14 - 0x10) = (double)*(__int16 *)(v12 - 8) / v9 * v6 + v8;
      *(float *)(v14 - 0xC) = (double)*(__int16 *)(v12 - 6) / v9 * v6 + v8;
    }
    while ( v13 );
    result = a1;
  }
  for ( ; v11 < a6; *(float *)(a5 + 4 * v11 - 4) = (double)v16 / v9 * v6 + v8 )
    v16 = *(__int16 *)(result + 2 * v11++);
  return result;
}
