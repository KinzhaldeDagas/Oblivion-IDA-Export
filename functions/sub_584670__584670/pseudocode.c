char __cdecl sub_584670(char *Str, int a2)
{
  char *v2; // esi
  char *i; // eax
  char *v4; // edi
  unsigned int **v5; // edi
  int v6; // eax

  v2 = Str;
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) )
    v2 = i + 1;
  Str = 0;
  NiTMap_GetAt(&off_B13948, (int)v2, &Str);
  v4 = Str;
  if ( Str )
  {
    if ( *((_DWORD *)Str + 1) )
      FormHeapFree(*((_DWORD *)Str + 1));
    *((_DWORD *)v4 + 1) = 0;
    FormHeapFree((unsigned int)v4);
  }
  NiTMap_RemoveAt(&off_B13948, (int)v2);
  Str = 0;
  NiTMap_GetAt(&off_B1395C, (int)v2, &Str);
  v5 = (unsigned int **)Str;
  if ( Str )
  {
    v6 = a2;
    if ( a2 )
    {
      if ( Str[0x10] )
      {
        Str[0x10] = 0;
        *(_BYTE *)(v6 + 0x1C) = 1;
      }
    }
    sub_58CDB0(v5);
    FormHeapFree((unsigned int)v5);
  }
  return NiTMap_RemoveAt(&off_B1395C, (int)v2);
}
