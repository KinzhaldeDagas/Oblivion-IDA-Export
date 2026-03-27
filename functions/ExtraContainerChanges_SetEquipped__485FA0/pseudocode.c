ExtraDataList *__thiscall ExtraContainerChanges_SetEquipped(int ***this, int a2, char a3)
{
  int **v3; // eax
  char v4; // dl
  int *v6; // eax
  int v7; // edi
  ExtraDataList *v8; // esi

  v3 = *this;
  v4 = 1;
  if ( *this )
  {
    while ( v4 )
    {
      if ( *v3 && (*v3)[2] == a2 )
        v4 = 0;
      else
        v3 = (int **)v3[1];
      if ( !v3 )
        return 0;
    }
    if ( v3 )
    {
      v6 = *v3;
      if ( v6 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          while ( 1 )
          {
            v8 = *(ExtraDataList **)v7;
            if ( !*(_DWORD *)v7 )
              break;
            if ( ExtraDataList_HasWorn(v8, 0) )
              return v8;
            if ( sub_41DF40(v8) && a3 )
            {
              SetWorn(v8, 1, 0);
              return v8;
            }
            v7 = *(_DWORD *)(v7 + 4);
            if ( !v7 )
              return 0;
          }
        }
      }
    }
  }
  return 0;
}
