// positive sp value has been detected, the output may be wrong!
void __userpurge ContainerExtraData_AddEntry_::DestroyArgEntry(
        unsigned int *a1@<ebx>,
        int a2@<ebp>,
        _DWORD **a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  _DWORD *v11; // eax
  _DWORD **v12; // [esp-Ch] [ebp-Ch]

  if ( a9 )
  {
    if ( *a1 != a2 )
      BSSimpleList_Clear((_DWORD *)*a1);
    FormHeapFree(*a1);
    *a1 = a2;
    FormHeapFree((unsigned int)a1);
    a1 = (unsigned int *)a2;
  }
  ContainerExtraData_GetEntryForForm(a3, a6, 1, a2);
  v10 = v9;
  if ( v9 == (unsigned int *)a2 )
    goto LABEL_16;
  v11 = (_DWORD *)*v9;
  if ( *v10 != a2 && (v11[1] != a2 || *v11 != a2) )
    goto LABEL_16;
  if ( v10[1] != a2 )
    goto LABEL_16;
  BSSimpleList_Remove(*v12, (int)v10);
  if ( *v10 != a2 )
    BSSimpleList_Clear((_DWORD *)*v10);
  FormHeapFree(*v10);
  *v10 = a2;
  FormHeapFree((unsigned int)v10);
  if ( a1 != (unsigned int *)a2 )
  {
    if ( *a1 != a2 )
      BSSimpleList_Clear((_DWORD *)*a1);
    FormHeapFree(*a1);
    *a1 = a2;
    FormHeapFree((unsigned int)a1);
  }
  else
  {
LABEL_16:
    ContainerExtraData_AddEntry_::Done_(a4, a5);
  }
}
