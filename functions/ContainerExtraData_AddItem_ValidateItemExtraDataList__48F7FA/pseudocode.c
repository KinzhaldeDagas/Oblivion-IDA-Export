void __usercall ContainerExtraData_AddItem_::ValidateItemExtraDataList(
        char a1@<zf>,
        ExtraDataList *a2@<ebx>,
        _DWORD *a3@<edi>,
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
        int a14,
        int a15)
{
  if ( a1 || BaseExtraList_Count(a2) )
  {
    ContainerExtraData_AddItem_::ValidateAddedCount(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  }
  else
  {
    (*(void (__thiscall **)(ExtraDataList *, int))a2->vtbl)(a2, 1);
    ContainerExtraData_AddItem_::ValidateAddedCount(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, 0, a14, a15);
  }
}
