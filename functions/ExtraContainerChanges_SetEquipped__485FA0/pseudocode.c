ExtraDataList *__thiscall ExtraContainerChanges_SetEquipped(int ***this, int a2, char a3)
{
  int **v3; // eax
  char v4; // dl
  int *v6; // eax
  int v7; // edi
  ExtraDataList *v8; // esi

  v3 = *this; /*0x485fa0*/
  v4 = 1; /*0x485fa7*/
  if ( *this ) /*0x485fa0*/
  {
    while ( v4 ) /*0x485fb2*/
    {
      if ( *v3 && (*v3)[2] == a2 ) /*0x485fbd*/
        v4 = 0; /*0x485fbf*/
      else
        v3 = (int **)v3[1]; /*0x485fc3*/
      if ( !v3 ) /*0x485fc8*/
        return 0; /*0x485fc8*/
    }
    if ( v3 ) /*0x485fd4*/
    {
      v6 = *v3; /*0x485fd6*/
      if ( v6 ) /*0x485fda*/
      {
        v7 = *v6; /*0x485fdc*/
        if ( *v6 ) /*0x485fdc*/
        {
          while ( 1 ) /*0x485fe6*/
          {
            v8 = *(ExtraDataList **)v7; /*0x485fe6*/
            if ( !*(_DWORD *)v7 ) /*0x485fe6*/
              break; /*0x485fe6*/
            if ( ExtraDataList_HasWorn(v8, 0) ) /*0x485ff0*/
              return v8; /*0x485ff7*/
            if ( sub_41DF40(v8) && a3 ) /*0x486006*/
            {
              SetWorn(v8, 1, 0); /*0x48601d*/
              return v8; /*0x486023*/
            }
            v7 = *(_DWORD *)(v7 + 4); /*0x486008*/
            if ( !v7 ) /*0x48600d*/
              return 0; /*0x486014*/
          }
        }
      }
    }
  }
  return 0; /*0x485fca*/
}
