float *__cdecl sub_717280(unsigned __int16 a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  unsigned int v5; // [esp+0h] [ebp-8h]

  result = a4; /*0x717286*/
  v5 = 0; /*0x71728c*/
  while ( v5 < a1 ) /*0x7172b7*/
  {
    *a3 = (*a4 * *a2 + a2[1] * a4[1] + a2[2] * a4[2]) * a4[0xC] + a4[9]; /*0x7172f2*/
    a3[1] = (a4[3] * *a2 + a2[1] * a4[4] + a2[2] * a4[5]) * a4[0xC] + a4[0xA]; /*0x71732a*/
    a3[2] = (a4[6] * *a2 + a2[1] * a4[7] + a2[2] * a4[8]) * a4[0xC] + a4[0xB]; /*0x717363*/
    ++v5; /*0x71729b*/
    a2 += 3; /*0x7172a4*/
    result = a3 + 3; /*0x7172aa*/
    a3 += 3; /*0x7172ad*/
  }
  return result; /*0x71736b*/
}
