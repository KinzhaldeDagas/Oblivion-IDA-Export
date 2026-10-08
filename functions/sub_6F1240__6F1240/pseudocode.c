int __cdecl sub_6F1240(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1; /*0x6f1240*/
  result = a3 + 0xC * ((a2 - a1) / 0xC); /*0x6f1266*/
  if ( a1 != a2 ) /*0x6f1269*/
  {
    v5 = a3 - (_DWORD)a1; /*0x6f126b*/
    do /*0x6f1288*/
    {
      *(_DWORD *)&v3[v5] = *(_DWORD *)v3; /*0x6f1272*/
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1); /*0x6f1278*/
      *(_DWORD *)&v3[v5 + 8] = *((_DWORD *)v3 + 2); /*0x6f127f*/
      v3 += 0xC; /*0x6f1283*/
    }
    while ( v3 != a2 ); /*0x6f1288*/
  }
  return result; /*0x6f128b*/
}
