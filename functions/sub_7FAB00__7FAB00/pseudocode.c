int *__cdecl sub_7FAB00(int *a1, int a2, int a3, int a4, int a5)
{
  int *result; // eax

  result = a1;
  if ( (unsigned int)a1 <= 0x13 )
  {
    result = &dword_B47008[8 * (_DWORD)a1];
    *result = a2;
    result[1] = a3;
    result[2] = a4;
    result[3] = a5;
  }
  return result;
}
