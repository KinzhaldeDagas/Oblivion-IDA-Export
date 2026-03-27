int __cdecl sub_79A950(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  char *v6; // esi

  result = a3 + 0x38 * ((a2 - a1) / 0x38);
  for ( i = a1; i != a2; i += 0x38 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0x38u);
  }
  return result;
}
