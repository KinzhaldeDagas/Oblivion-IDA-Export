unsigned int *__thiscall sub_487D20(_DWORD *this, TESForm *a2, int a3)
{
  unsigned int *v3; // edi
  int **v4; // eax
  int **v5; // ebx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int *i; // esi

  v3 = 0;
  sub_487C30(this, a2, a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v6 )
      v3 = ContainerEntryExtraData_constr(v6, (int)a2, (int)v5[1]);
    else
      v3 = 0;
    v7 = *v5;
    if ( !*v5 )
      goto LABEL_27;
    v8 = 0;
    do
    {
      if ( *v7 )
        ++v8;
      v7 = (int *)v7[1];
    }
    while ( v7 );
    if ( v8 )
    {
      if ( !*v3 )
      {
        v9 = (_DWORD *)FormHeapAlloc(8u);
        if ( v9 )
        {
          *v9 = 0;
          v9[1] = 0;
        }
        else
        {
          v9 = 0;
        }
        *v3 = (unsigned int)v9;
      }
      v10 = (_DWORD *)**v5;
      if ( ExtraDataList_IsExtraDefaultForContainer(v10, 0) )
      {
        for ( i = *v5; i; i = (int *)i[1] )
        {
          if ( !*i )
            break;
          BSSimpleList_PushBack((_DWORD *)*v3, *i);
        }
      }
      else
      {
        BSSimpleList_PushFront((_DWORD *)*v3, (int)v10);
      }
    }
    else
    {
LABEL_27:
      if ( *v3 )
      {
        FormHeapFree(*v3);
        *v3 = 0;
      }
    }
  }
  return v3;
}
