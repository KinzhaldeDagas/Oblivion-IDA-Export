void __thiscall sub_48DF80(int **this)
{
  int **v1; // esi
  int *v2; // ebp
  unsigned int *v3; // edi
  int *v4; // ebx
  ExtraDataList *v5; // esi
  _DWORD *v6; // eax

  v1 = this; /*0x48df83*/
  (*(void (__thiscall **)(_DWORD, int))(**(this + 1) + 0x40))(*(this + 1), 0x8000000); /*0x48df96*/
  v2 = *v1; /*0x48df98*/
  while ( v2 ) /*0x48df98*/
  {
    v3 = (unsigned int *)*v2; /*0x48dfa4*/
    if ( !*v2 ) /*0x48dfa4*/
      break; /*0x48dfa9*/
    v4 = (int *)*v3; /*0x48dfaf*/
    if ( *v3 ) /*0x48dfaf*/
    {
      do /*0x48dff5*/
      {
        v5 = (ExtraDataList *)*v4; /*0x48dfb5*/
        if ( !*v4 ) /*0x48dfb5*/
          break; /*0x48dfb9*/
        if ( ExtraDataList_GetLeveledItem((ExtraDataList *)*v4) ) /*0x48dfbd*/
        {
          sub_424790(v5); /*0x48dfc8*/
          ExtraDataList_SetExtraCount(v5, 0); /*0x48dfd1*/
          --v3[1]; /*0x48dfd6*/
          BSSimpleList_Remove(v4, (int)v5); /*0x48dfdd*/
          (*(void (__thiscall **)(ExtraDataList *, int))v5->vtbl)(v5, 1); /*0x48dfea*/
          v4 = (int *)*v3; /*0x48dfec*/
        }
        else
        {
          v4 = (int *)v4[1]; /*0x48dff0*/
        }
      }
      while ( v4 ); /*0x48dff5*/
      v1 = this; /*0x48dff7*/
    }
    v6 = (_DWORD *)*v3; /*0x48dffb*/
    if ( !*v3 || v6[1] || *v6 || v3[1] ) /*0x48e00c*/
    {
      v2 = (int *)v2[1]; /*0x48e040*/
    }
    else
    {
      BSSimpleList_Remove(*v1, (int)v3); /*0x48e015*/
      if ( *v3 ) /*0x48e01a*/
        BSSimpleList_Clear((_DWORD *)*v3); /*0x48e020*/
      FormHeapFree(*v3); /*0x48e028*/
      *v3 = 0; /*0x48e02e*/
      FormHeapFree((unsigned int)v3); /*0x48e034*/
      v2 = *v1; /*0x48e039*/
    }
  }
}
