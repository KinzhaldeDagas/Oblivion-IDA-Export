void __thiscall sub_67BF00(int **this, int a2)
{
  int *v3; // esi
  int v4; // eax
  int *v5; // ecx
  int *v6; // eax
  int *v7; // eax
  _DWORD *v8; // esi

  v3 = *this;
  while ( v3 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    if ( *(_DWORD *)(v4 + 4) == a2 )
      *(_DWORD *)(v4 + 4) = 0;
    v5 = *(int **)v4;
    v6 = *(int **)v4;
    if ( v6 )
    {
      while ( *v6 )
      {
        if ( *(_DWORD *)*v6 == a2 )
        {
          v7 = v5;
          if ( v5 )
          {
            while ( 1 )
            {
              v8 = (_DWORD *)*v7;
              if ( !*v7 )
                break;
              if ( *v8 == a2 )
              {
                BSSimpleList_Remove(v5, *v7);
                FormHeapFree((unsigned int)v8);
                break;
              }
              v7 = (int *)v7[1];
              if ( !v7 )
              {
                v3 = *this;
                goto LABEL_10;
              }
            }
          }
          v3 = *this;
          goto LABEL_10;
        }
        v6 = (int *)v6[1];
        if ( !v6 )
          break;
      }
    }
    v3 = (int *)v3[1];
LABEL_10:
    ;
  }
}
