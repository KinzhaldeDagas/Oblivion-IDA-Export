char __thiscall sub_4DDC40(TESObjectREFR *this, TESObjectREFR *a2, signed int a3, int a4, char a5)
{
  TESContainer *Container; // eax
  int ****ContainerExtraDataForRef; // eax

  Container = TESObjectREFR_GetContainer(this);
  if ( Container )
  {
    Script_AddEventToExtraScript(this, &a2->member.baseExtraList, 1);
    ContainerExtraDataForRef = (int ****)ContainerExtraData_GetContainerExtraDataForRef(this);
    sub_48AA10(ContainerExtraDataForRef, a2, a3, a4, a5);
    LOBYTE(Container) = TESObjectREFR_IsPersistent_(a2);
    if ( (_BYTE)Container )
    {
      ExtraDataList_SetReferencePointer(&a2->member.baseExtraList, this);
      LOBYTE(Container) = ((int (__thiscall *)(TESObjectREFR *, int))a2->vtbl->super.MarkAsModified)(a2, 0x20);
    }
  }
  return (char)Container;
}
