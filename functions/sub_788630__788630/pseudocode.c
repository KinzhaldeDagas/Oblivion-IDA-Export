char *__cdecl sub_788630(char *a1, char *a2, char *a3)
{
  char *v3; // edx
  char *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 0x1C )
  {
    if ( result )
      qmemcpy(result, v3, 0x1Cu);
    v3 += 0x1C;
  }
  return result;
}
