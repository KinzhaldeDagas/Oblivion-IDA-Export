float *__cdecl sub_717370(unsigned __int16 a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  unsigned int v5; // [esp+0h] [ebp-8h]

  result = a4; /*0x717376*/
  v5 = 0; /*0x71737c*/
  while ( v5 < a1 ) /*0x7173a7*/
  {
    *a3 = *a4 * *a2 + a2[1] * a4[1] + a2[2] * a4[2]; /*0x7173d6*/
    a3[1] = a4[3] * *a2 + a2[1] * a4[4] + a2[2] * a4[5]; /*0x717402*/
    a3[2] = a4[6] * *a2 + a2[1] * a4[7] + a2[2] * a4[8]; /*0x71742f*/
    ++v5; /*0x71738b*/
    a2 += 3; /*0x717394*/
    result = a3 + 3; /*0x71739a*/
    a3 += 3; /*0x71739d*/
  }
  return result; /*0x717437*/
}
