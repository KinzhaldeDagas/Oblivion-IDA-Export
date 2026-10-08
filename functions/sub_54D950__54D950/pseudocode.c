int __cdecl sub_54D950(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1; /*0x54d950*/
  result = a3 + 0x10 * ((a2 - a1) >> 4); /*0x54d967*/
  if ( a1 != a2 ) /*0x54d96b*/
  {
    v5 = a3 - (_DWORD)a1; /*0x54d96d*/
    do /*0x54d98f*/
    {
      *(_DWORD *)&v3[v5] = *(_DWORD *)v3; /*0x54d972*/
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1); /*0x54d978*/
      *(_DWORD *)&v3[v5 + 8] = *((_DWORD *)v3 + 2); /*0x54d97f*/
      *(_DWORD *)&v3[v5 + 0xC] = *((_DWORD *)v3 + 3); /*0x54d986*/
      v3 += 0x10; /*0x54d98a*/
    }
    while ( v3 != a2 ); /*0x54d98f*/
  }
  return result; /*0x54d992*/
}
