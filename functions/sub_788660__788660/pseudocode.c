int __cdecl sub_788660(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 0x1C * ((a2 - a1) / 0x1C);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x1Cu) )
    i += 0xFFFFFFE4;
  return result;
}
