float *__cdecl sub_716FC0(float a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  double v5; // st7
  double v6; // st5
  int v7; // edx
  float *v9; // ecx
  double v10; // st7
  double v11; // st5
  double v12; // st6
  float v13[10]; // [esp+4h] [ebp-34h] BYREF
  float *v14; // [esp+2Ch] [ebp-Ch]
  float v15; // [esp+30h] [ebp-8h]
  float v16; // [esp+34h] [ebp-4h]
  int v17; // [esp+4Ch] [ebp+14h]

  LODWORD(v13[9]) = LOWORD(a1);
  result = a4;
  v5 = a4[9];
  v14 = v13;
  v15 = v5;
  v16 = a4[0xA];
  v17 = *((int *)a4 + 0xB);
  v6 = result[0xC];
  v13[0] = *result * v6;
  v13[1] = result[1] * v6;
  v13[2] = result[2] * v6;
  v13[3] = result[3] * v6;
  v13[4] = result[4] * v6;
  v13[5] = result[5] * v6;
  v13[6] = result[6] * v6;
  v13[7] = result[7] * v6;
  v13[8] = v6 * result[8];
  v7 = LOWORD(a1);
  if ( LOWORD(a1) )
  {
    result = a2;
    v9 = v14;
    do
    {
      v10 = v9[8] * result[2];
      v11 = v9[6] * *result + v9[7] * result[1];
      v12 = result[2] * v9[5] + *result * v9[3] + result[1] * v9[4] + v16;
      *a3 = result[2] * v9[2] + *result * *v9 + result[1] * v9[1] + v15;
      a3[1] = v12;
      result += 3;
      a3 += 3;
      a3[0xFFFFFFFF] = v10 + v11 + *(float *)&v17;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
