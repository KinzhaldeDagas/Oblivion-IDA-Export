BOOL __cdecl __TypeMatch(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  BOOL result; // eax

  v3 = *(_DWORD *)(a1 + 4); /*0x98ae99*/
  result = 1; /*0x98aec3*/
  if ( v3 ) /*0x98ae9e*/
  {
    if ( *(_BYTE *)(v3 + 8) ) /*0x98aea3*/
    {
      v4 = *(_DWORD *)(a2 + 4); /*0x98aeac*/
      if ( v3 != v4 ) /*0x98aeb1*/
      {
        if ( strcmp((const char *)(v3 + 8), (const char *)(v4 + 8)) ) /*0x98aeb8*/
          return 0; /*0x98aeb8*/
      }
      if ( (*(_BYTE *)a2 & 2) != 0 && (*(_BYTE *)a1 & 8) == 0 /*0x98aee7*/
        || (*a3 & 1) != 0 && (*(_BYTE *)a1 & 1) == 0
        || (*a3 & 2) != 0 && (*(_BYTE *)a1 & 2) == 0 )
      {
        return 0; /*0x98ae9e*/
      }
    }
  }
  return result; /*0x98aeec*/
}
