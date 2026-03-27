int *__cdecl sub_7ECAE0(unsigned __int16 a1, int a2, int a3, int a4, int a5)
{
  int *result; // eax

  result = &dword_B46498 + 4 * a1;
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}
