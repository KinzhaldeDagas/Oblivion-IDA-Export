int __userpurge ContainerExtraData_AddItem_::NewEntryExtraData@<eax>(
        _DWORD *a1@<ebp>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  _DWORD *v14; // eax
  _DWORD *v15; // eax

  if ( a1 != a2 )
    JUMPOUT(0x48F9A5);
  v14 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v14 != a2 )
    a2 = ContainerEntryExtraData_constr(v14, a12, a14);
  if ( *a2 )
    return ContainerExtraData_AddItem_::AddNewEntry(a3, a4, a5);
  v15 = (_DWORD *)FormHeapAlloc(8u);
  if ( !v15 )
    return ContainerExtraData_AddItem_::AddNewEntry__(a3, a4, a5);
  *v15 = 0;
  v15[1] = 0;
  return ContainerExtraData_AddItem_::AddNewEntry_(a3, a4, a5);
}
