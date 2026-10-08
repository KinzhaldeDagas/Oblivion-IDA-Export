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
  float v17; // [esp+4Ch] [ebp+14h]

  LODWORD(v13[9]) = LOWORD(a1); /*0x716fca*/
  result = a4; /*0x716fcd*/
  v5 = a4[9]; /*0x716fd4*/
  v14 = v13; /*0x716fd7*/
  v15 = v5; /*0x716fda*/
  v16 = a4[0xA]; /*0x716fe0*/
  v17 = a4[0xB]; /*0x716fe6*/
  v6 = result[0xC]; /*0x716ff4*/
  v13[0] = *result * v6; /*0x716ffa*/
  v13[1] = result[1] * v6; /*0x717002*/
  v13[2] = result[2] * v6; /*0x71700a*/
  v13[3] = result[3] * v6; /*0x717012*/
  v13[4] = result[4] * v6; /*0x71701a*/
  v13[5] = result[5] * v6; /*0x717022*/
  v13[6] = result[6] * v6; /*0x71702a*/
  v13[7] = result[7] * v6; /*0x717032*/
  v13[8] = v6 * result[8]; /*0x717038*/
  v7 = LOWORD(a1); /*0x71703b*/
  if ( LOWORD(a1) ) /*0x717041*/
  {
    result = a2; /*0x717045*/
    v9 = v14; /*0x71704b*/
    do /*0x7170bc*/
    {
      v10 = v9[8] * result[2]; /*0x7170a2*/
      v11 = v9[6] * *result + v9[7] * result[1]; /*0x7170a4*/
      v12 = result[2] * v9[5] + *result * v9[3] + result[1] * v9[4] + v16; /*0x7170a6*/
      *a3 = result[2] * v9[2] + *result * *v9 + result[1] * v9[1] + v15; /*0x7170a8*/
      a3[1] = v12; /*0x7170ac*/
      result += 3; /*0x7170b2*/
      a3 += 3; /*0x7170b5*/
      a3[0xFFFFFFFF] = v10 + v11 + v17; /*0x7170b8*/
      --v7; /*0x7170bb*/
    }
    while ( v7 ); /*0x7170bc*/
  }
  return result; /*0x7170be*/
}
