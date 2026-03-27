char *__cdecl sub_79A9B0(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 0x38 )
  {
    if ( result )
      qmemcpy(result, v3, 0x38u);
    v3 += 0x38;
  }
  return result;
}
