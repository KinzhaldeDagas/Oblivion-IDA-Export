int __cdecl sub_796940(char *a1, char *a2, int a3)
{
  char *i; // esi

  for ( i = a2; i != a1; sub_795630(&i[a3 - (_DWORD)a2], a3 - 0x10 * ((a2 - a1) >> 4), i) )
    i += 0xFFFFFFF0;
  return a3 - 0x10 * ((a2 - a1) >> 4);
}
