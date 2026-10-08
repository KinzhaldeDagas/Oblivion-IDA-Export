bool *__cdecl sub_8B1EE0(bool *a1, float a2, float a3, float a4)
{
  bool *result; // eax

  result = a1; /*0x8b1ef3*/
  *a1 = fabs(a2 - a3) < a4; /*0x8b1f00*/
  return result; /*0x8b1efd*/
}
