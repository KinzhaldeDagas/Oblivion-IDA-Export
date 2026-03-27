BOOL __cdecl __TypeMatch(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  BOOL result; // eax

  v3 = *(_DWORD *)(a1 + 4);
  result = 1;
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 8) )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( v3 != v4 )
      {
        if ( strcmp((const char *)(v3 + 8), (const char *)(v4 + 8)) )
          return 0;
      }
      if ( (*(_BYTE *)a2 & 2) != 0 && (*(_BYTE *)a1 & 8) == 0
        || (*a3 & 1) != 0 && (*(_BYTE *)a1 & 1) == 0
        || (*a3 & 2) != 0 && (*(_BYTE *)a1 & 2) == 0 )
      {
        return 0;
      }
    }
  }
  return result;
}
