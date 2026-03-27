void __thiscall sub_5E4330(_BYTE *this, int a2)
{
  ExtraDataList *****ContainerChanges; // eax

  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  if ( ContainerChanges )
    ContainerExtraData_GetEquippedInstance(ContainerChanges, a2, 1);
}
