bool *__cdecl sub_8B1EE0(bool *a1, float a2, float a3, float a4)
{
  bool *result; // eax

  result = a1;
  *a1 = fabs(a2 - a3) < a4;
  return result;
}
