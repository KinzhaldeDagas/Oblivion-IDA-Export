char __cdecl sub_584670(char *Str, int a2)
{
  char *v2; // esi
  char *i; // eax
  char *v4; // edi
  unsigned int **v5; // edi
  int v6; // eax

  v2 = Str; /*0x584672*/
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) ) /*0x584689*/
    v2 = i + 1; /*0x584699*/
  Str = 0; /*0x5846b2*/
  NiTMap_GetAt(&off_B13948, (int)v2, &Str); /*0x5846b6*/
  v4 = Str; /*0x5846bb*/
  if ( Str ) /*0x5846c1*/
  {
    if ( *((_DWORD *)Str + 1) ) /*0x5846c3*/
      FormHeapFree(*((_DWORD *)Str + 1)); /*0x5846cb*/
    *((_DWORD *)v4 + 1) = 0; /*0x5846d4*/
    FormHeapFree((unsigned int)v4); /*0x5846d7*/
  }
  NiTMap_RemoveAt(&off_B13948, (int)v2); /*0x5846e5*/
  Str = 0; /*0x5846f5*/
  NiTMap_GetAt(&off_B1395C, (int)v2, &Str); /*0x5846f9*/
  v5 = (unsigned int **)Str; /*0x5846fe*/
  if ( Str ) /*0x584704*/
  {
    v6 = a2; /*0x584706*/
    if ( a2 ) /*0x58470c*/
    {
      if ( Str[0x10] ) /*0x58470e*/
      {
        Str[0x10] = 0; /*0x584713*/
        *(_BYTE *)(v6 + 0x1C) = 1; /*0x584716*/
      }
    }
    Tile::BuildStorage::Destroy(v5); /*0x58471c*/
    FormHeapFree((unsigned int)v5); /*0x584722*/
  }
  return NiTMap_RemoveAt(&off_B1395C, (int)v2); /*0x584735*/
}
