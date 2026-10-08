float *__thiscall sub_70FFC0(const void *this, float *a2, float *a3)
{
  qmemcpy(a2, this, 0x24u); /*0x70ffcf*/
  *a2 = *a2 + *a3; /*0x70ffdb*/
  a2[1] = a3[1] + a2[1]; /*0x70ffe3*/
  a2[2] = a3[2] + a2[2]; /*0x70ffec*/
  a2[3] = a3[3] + a2[3]; /*0x70fff5*/
  a2[4] = a3[4] + a2[4]; /*0x70fffe*/
  a2[5] = a3[5] + a2[5]; /*0x710007*/
  a2[6] = a3[6] + a2[6]; /*0x710010*/
  a2[7] = a3[7] + a2[7]; /*0x710019*/
  a2[8] = a3[8] + a2[8]; /*0x710022*/
  return a2; /*0x710025*/
}
