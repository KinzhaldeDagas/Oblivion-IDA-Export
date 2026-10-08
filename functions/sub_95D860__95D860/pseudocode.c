float *__cdecl sub_95D860(float a1, float *a2)
{
  float *v2; // eax
  float *result; // eax

  v2 = (float *)FormHeapAlloc(0x14u); /*0x95d862*/
  if ( v2 ) /*0x95d86c*/
    result = sub_96C420(v2, 1.0, (int)&g_zeroNiPoint3); /*0x95d87b*/
  else
    result = 0; /*0x95d882*/
  result[4] = a1; /*0x95d88c*/
  result[1] = *a2; /*0x95d891*/
  result[2] = a2[1]; /*0x95d897*/
  result[3] = a2[2]; /*0x95d89d*/
  return result; /*0x95d8a0*/
}
