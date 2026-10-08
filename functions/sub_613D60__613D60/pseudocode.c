void __fastcall sub_613D60(_DWORD *a1, int a2, unsigned int a3)
{
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  unsigned int v7; // ebx

  if ( a3 ) /*0x613d6d*/
  {
    v4 = (int *)a1[0x17]; /*0x613d73*/
    if ( v4 ) /*0x613d78*/
      BSSimpleList_Remove(v4, a3); /*0x613d7b*/
    v5 = (int *)a1[0x18]; /*0x613d80*/
    if ( v5 ) /*0x613d85*/
      BSSimpleList_Remove(v5, a3); /*0x613d88*/
    v6 = (int *)a1[0x19]; /*0x613d8d*/
    if ( v6 ) /*0x613d92*/
      BSSimpleList_Remove(v6, a3); /*0x613d95*/
    v7 = *(_DWORD *)(a3 + 4); /*0x613d9b*/
    if ( v7 ) /*0x613da0*/
    {
      ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(a3 + 4), a2); /*0x613da4*/
      FormHeapFree(v7); /*0x613daa*/
    }
    if ( a3 == a1[0x25] ) /*0x613db9*/
    {
      a1[0x25] = 0; /*0x613dbb*/
    }
    else if ( a3 == a1[0x26] ) /*0x613dc9*/
    {
      a1[0x26] = 0; /*0x613dcb*/
    }
    else if ( a3 == a1[0x24] ) /*0x613dd9*/
    {
      a1[0x24] = 0; /*0x613ddb*/
    }
    else if ( a3 == a1[0x27] ) /*0x613de9*/
    {
      a1[0x27] = 0; /*0x613deb*/
    }
    MagicItem_UnloadVFXModels(*(char **)a3, 1); /*0x613df5*/
    FormHeapFree(a3); /*0x613dfb*/
  }
}
