void __thiscall sub_67BF00(int **this, int a2)
{
  int *v3; // esi
  int v4; // eax
  int *v5; // ecx
  int *v6; // eax
  int *v7; // eax
  _DWORD *v8; // esi

  v3 = *this; /*0x67bf04*/
  while ( v3 ) /*0x67bf04*/
  {
    v4 = *v3; /*0x67bf10*/
    if ( !*v3 ) /*0x67bf10*/
      break; /*0x67bf14*/
    if ( *(_DWORD *)(v4 + 4) == a2 ) /*0x67bf19*/
      *(_DWORD *)(v4 + 4) = 0; /*0x67bf1b*/
    v5 = *(int **)v4; /*0x67bf22*/
    v6 = *(int **)v4; /*0x67bf24*/
    if ( v6 ) /*0x67bf28*/
    {
      while ( *v6 ) /*0x67bf34*/
      {
        if ( *(_DWORD *)*v6 == a2 ) /*0x67bf38*/
        {
          v7 = v5; /*0x67bf4e*/
          if ( v5 ) /*0x67bf52*/
          {
            while ( 1 ) /*0x67bf54*/
            {
              v8 = (_DWORD *)*v7; /*0x67bf54*/
              if ( !*v7 ) /*0x67bf54*/
                break; /*0x67bf54*/
              if ( *v8 == a2 ) /*0x67bf5c*/
              {
                BSSimpleList_Remove(v5, *v7); /*0x67bf6b*/
                FormHeapFree((unsigned int)v8); /*0x67bf71*/
                break; /*0x67bf71*/
              }
              v7 = (int *)v7[1]; /*0x67bf5e*/
              if ( !v7 ) /*0x67bf63*/
              {
                v3 = *this; /*0x67bf65*/
                goto LABEL_10; /*0x67bf68*/
              }
            }
          }
          v3 = *this; /*0x67bf79*/
          goto LABEL_10; /*0x67bf7c*/
        }
        v6 = (int *)v6[1]; /*0x67bf3a*/
        if ( !v6 ) /*0x67bf3f*/
          break; /*0x67bf3f*/
      }
    }
    v3 = (int *)v3[1]; /*0x67bf41*/
LABEL_10:
    ;
  }
}
