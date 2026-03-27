int __cdecl sub_79A890(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 0x38 * ((a2 - a1) / 0x38);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x38u) )
    i += 0xFFFFFFC8;
  return result;
}
