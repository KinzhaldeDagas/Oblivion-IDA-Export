float *__cdecl sub_6F11E0(float *a1, float *a2, float *a3)
{
  float *v3; // ecx
  float *result; // eax

  v3 = a1; /*0x6f11e0*/
  for ( result = a3; v3 != a2; result += 2 ) /*0x6f11ee*/
  {
    if ( result ) /*0x6f11f2*/
    {
      *result = *v3; /*0x6f11f6*/
      result[1] = v3[1]; /*0x6f11fb*/
    }
    v3 += 2; /*0x6f11fe*/
  }
  return result; /*0x6f1208*/
}
