int __userpurge ContainerExtraData_GetEntryForForm_::ExtraDataLoop@<eax>(
        ExtraDataList **a1@<esi>,
        bool (__thiscall *ebp0)(BSExtraData *this, BSExtraData *other)@<ebp>,
        int a3,
        int a4,
        int a5)
{
  ExtraDataList *v5; // edi

  v5 = *a1;
  if ( *a1 && ExtraDataList_GetReferencePointer(*a1) && ExtraDataList_GetReferencePointer(v5)[1].CompareTo == ebp0 )
    return ContainerExtraData_GetEntryForForm_::Return(a3, a4, a5);
  else
    return ContainerExtraData_GetEntryForForm_::ExtraDataLoop_Next((int)a1, a3, a4, a5);
}
