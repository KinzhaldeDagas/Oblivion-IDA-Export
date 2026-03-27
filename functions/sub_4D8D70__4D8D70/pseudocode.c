unsigned int *__thiscall sub_4D8D70(_BYTE *this, TESForm *a2, int a3)
{
  ExtraContainerChanges_Data *ContainerChanges; // ecx
  unsigned int *result; // eax

  ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  result = 0;
  if ( ContainerChanges )
    return sub_487D20(ContainerChanges, a2, a3);
  return result;
}
