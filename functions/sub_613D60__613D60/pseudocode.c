void __fastcall sub_613D60(_DWORD *a1, int a2, unsigned int a3)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx
  unsigned int v7; // ebx

  if ( a3 )
  {
    v4 = (_DWORD *)a1[0x17];
    if ( v4 )
      BSSimpleList_Remove(v4, a3);
    v5 = (_DWORD *)a1[0x18];
    if ( v5 )
      BSSimpleList_Remove(v5, a3);
    v6 = (_DWORD *)a1[0x19];
    if ( v6 )
      BSSimpleList_Remove(v6, a3);
    v7 = *(_DWORD *)(a3 + 4);
    if ( v7 )
    {
      ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(a3 + 4), a2);
      FormHeapFree(v7);
    }
    if ( a3 == a1[0x25] )
    {
      a1[0x25] = 0;
    }
    else if ( a3 == a1[0x26] )
    {
      a1[0x26] = 0;
    }
    else if ( a3 == a1[0x24] )
    {
      a1[0x24] = 0;
    }
    else if ( a3 == a1[0x27] )
    {
      a1[0x27] = 0;
    }
    sub_419F10(*(char **)a3, 1);
    FormHeapFree(a3);
  }
}
