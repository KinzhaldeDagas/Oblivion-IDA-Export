int __cdecl sub_6F1300(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi

  v3 = a2; /*0x6f1300*/
  result = a3 - 0x10 * ((a2 - a1) >> 4); /*0x6f131c*/
  if ( a1 != a2 ) /*0x6f1320*/
  {
    v5 = a3 - (_DWORD)a2; /*0x6f1322*/
    do /*0x6f1344*/
    {
      v6 = *((_DWORD *)v3 + 0xFFFFFFFC); /*0x6f1324*/
      v3 += 0xFFFFFFF0; /*0x6f1327*/
      *(_DWORD *)&v3[v5] = v6; /*0x6f132c*/
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1); /*0x6f1332*/
      *(_DWORD *)&v3[v5 + 8] = *((_DWORD *)v3 + 2); /*0x6f1339*/
      *(_DWORD *)&v3[v5 + 0xC] = *((_DWORD *)v3 + 3); /*0x6f1340*/
    }
    while ( v3 != a1 ); /*0x6f1344*/
  }
  return result; /*0x6f1346*/
}
