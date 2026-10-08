unsigned int *__thiscall sub_487D20(ExtraContainerChanges_Data *this, TESForm *a2, unsigned int a3)
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

  v3 = 0; /*0x487d4d*/
  sub_487C30(this, a2, a3); /*0x487d4f*/
  v5 = v4; /*0x487d54*/
  if ( v4 ) /*0x487d58*/
  {
    v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x487d60*/
    if ( v6 ) /*0x487d72*/
      v3 = ContainerEntryExtraData_constr(v6, (int)a2, (int)v5[1]); /*0x487d80*/
    else
      v3 = 0; /*0x487d84*/
    v7 = *v5; /*0x487d86*/
    if ( !*v5 ) /*0x487d86*/
      goto LABEL_27; /*0x487d86*/
    v8 = 0; /*0x487d94*/
    do /*0x487da3*/
    {
      if ( *v7 ) /*0x487d96*/
        ++v8; /*0x487d9b*/
      v7 = (int *)v7[1]; /*0x487d9e*/
    }
    while ( v7 ); /*0x487da3*/
    if ( v8 ) /*0x487da7*/
    {
      if ( !*v3 ) /*0x487da9*/
      {
        v9 = (_DWORD *)FormHeapAlloc(8u); /*0x487daf*/
        if ( v9 ) /*0x487db9*/
        {
          *v9 = 0; /*0x487dbb*/
          v9[1] = 0; /*0x487dc1*/
        }
        else
        {
          v9 = 0; /*0x487dca*/
        }
        *v3 = (unsigned int)v9; /*0x487dcc*/
      }
      v10 = (_DWORD *)**v5; /*0x487dd0*/
      if ( ExtraDataList_IsExtraDefaultForContainer(v10, 0) ) /*0x487dd6*/
      {
        for ( i = *v5; i; i = (int *)i[1] ) /*0x487ddf*/
        {
          if ( !*i ) /*0x487de5*/
            break; /*0x487de9*/
          BSSimpleList_PushBack((_DWORD *)*v3, *i); /*0x487dee*/
        }
      }
      else
      {
        BSSimpleList_PushFront((_DWORD *)*v3, (int)v10); /*0x487dff*/
      }
    }
    else
    {
LABEL_27:
      if ( *v3 ) /*0x487e06*/
      {
        FormHeapFree(*v3); /*0x487e0d*/
        *v3 = 0; /*0x487e15*/
      }
    }
  }
  return v3; /*0x487e1d*/
}
