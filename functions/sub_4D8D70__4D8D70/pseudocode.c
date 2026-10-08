unsigned int *__thiscall sub_4D8D70(_BYTE *this, TESForm *a2, unsigned int a3)
{
  ExtraContainerChanges_Data *ContainerChanges; // ecx
  unsigned int *result; // eax

  ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x4d8d78*/
  result = 0; /*0x4d8d7a*/
  if ( ContainerChanges ) /*0x4d8d7e*/
    return sub_487D20(ContainerChanges, a2, a3); /*0x4d8d80*/
  return result; /*0x4d8d85*/
}
