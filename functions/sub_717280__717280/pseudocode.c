float *__cdecl sub_717280(unsigned __int16 a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  unsigned int v5; // [esp+0h] [ebp-8h]

  result = a4;
  v5 = 0;
  while ( v5 < a1 )
  {
    *a3 = (*a4 * *a2 + a2[1] * a4[1] + a2[2] * a4[2]) * a4[0xC] + a4[9];
    a3[1] = (a4[3] * *a2 + a2[1] * a4[4] + a2[2] * a4[5]) * a4[0xC] + a4[0xA];
    a3[2] = (a4[6] * *a2 + a2[1] * a4[7] + a2[2] * a4[8]) * a4[0xC] + a4[0xB];
    ++v5;
    a2 += 3;
    result = a3 + 3;
    a3 += 3;
  }
  return result;
}
