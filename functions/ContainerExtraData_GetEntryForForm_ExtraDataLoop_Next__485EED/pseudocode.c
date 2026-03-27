int __userpurge ContainerExtraData_GetEntryForForm_::ExtraDataLoop_Next@<eax>(
        int a1@<esi>,
        bool (__thiscall *a2)(BSExtraData *this, BSExtraData *other)@<ebp>,
        int a3,
        int a4,
        int a5)
{
  ExtraDataList **v5; // esi

  v5 = *(ExtraDataList ***)(a1 + 4);
  if ( v5 )
    return ContainerExtraData_GetEntryForForm_::ExtraDataLoop(v5, a2, a3, a4, a5);
  else
    return ContainerExtraData_GetEntryForForm_::Return_0_(a3, a4, a5);
}
