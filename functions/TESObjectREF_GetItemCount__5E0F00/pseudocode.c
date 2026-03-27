void __userpurge TESObjectREF_GetItemCount(TESObjectREFR *this@<ecx>, TESForm *a2, int a3, int a4, int a5)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( TESObjectREFR_GetContainer(this) )
  {
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
    if ( ContainerExtraDataForRef )
      ContainerExtraData_GetItemCount(ContainerExtraDataForRef, a2);
  }
}
