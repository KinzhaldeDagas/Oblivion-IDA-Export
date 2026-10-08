void __thiscall sub_5E4330(_BYTE *this, int a2)
{
  ExtraDataList *****ContainerChanges; // eax

  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e4336*/
  if ( ContainerChanges ) /*0x5e433d*/
    ContainerExtraData_GetEquippedInstance(ContainerChanges, a2, 1); /*0x5e4348*/
}
