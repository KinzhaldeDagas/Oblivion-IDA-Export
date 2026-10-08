BOOL __cdecl TranslateName(int a1, int a2, const char **a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // edi

  v3 = 0; /*0x99aacd*/
  v4 = 1; /*0x99aacf*/
  while ( v3 <= a2 ) /*0x99aad3*/
  {
    if ( !v4 ) /*0x99aad9*/
      break; /*0x99aad9*/
    v5 = (v3 + a2) / 2; /*0x99aae8*/
    v6 = a1 + 8 * v5; /*0x99aaea*/
    v4 = CRT_StricmpLocaleDispatch(*a3, *(const char **)v6); /*0x99aaf4*/
    if ( v4 ) /*0x99aafd*/
    {
      if ( v4 >= 0 ) /*0x99ab09*/
        v3 = v5 + 1; /*0x99ab11*/
      else
        a2 = v5 - 1; /*0x99ab0c*/
    }
    else
    {
      *a3 = (const char *)(v6 + 4); /*0x99ab05*/
    }
  }
  return v4 == 0; /*0x99ab22*/
}
