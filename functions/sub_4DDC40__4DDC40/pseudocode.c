// Add a live world reference to this reference's container by forwarding it to ContainerExtraData_AddItemFromWorldReference. That path derives sourceRef->GetBaseForm() and copies reference instance data; the returned byte is not a verified insertion-success contract and native callers ignore it.
char __thiscall TESObjectREFR_AddItemFromWorldReference(
        TESObjectREFR *this,
        TESObjectREFR *sourceRef,
        int count,
        int unusedArg,
        bool forceWorn)
{
  TESContainer *Container; // eax
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  Container = TESObjectREFR_GetContainer(this); /*0x4ddc44*/
  if ( Container ) /*0x4ddc4d*/
  {
    Script_AddEventToExtraScript(this, &sourceRef->member.baseExtraList, 1); /*0x4ddc5c*/
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4ddc63*/
    ContainerExtraData_AddItemFromWorldReference(ContainerExtraDataForRef, sourceRef, count, unusedArg, forceWorn);// Reference-based inventory insertion. This path does not call the form-based ContainerExtraData_AddItem at 0x48F7C0. /*0x4ddc7d*/
    LOBYTE(Container) = TESObjectREFR_IsPersistent(sourceRef); /*0x4ddc84*/
    if ( (_BYTE)Container ) /*0x4ddc8b*/
    {
      ExtraDataList_SetReferencePointer(&sourceRef->member.baseExtraList, this); /*0x4ddc90*/
      LOBYTE(Container) = ((int (__thiscall *)(TESObjectREFR *, int))sourceRef->vtbl->super.MarkAsModified)( /*0x4ddc9e*/
                            sourceRef,
                            0x20);
    }
  }
  return (char)Container; /*0x4ddca2*/
}
