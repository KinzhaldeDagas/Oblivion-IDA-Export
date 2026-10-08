bool __thiscall sub_4D9040(TESObjectREFR *this)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( !TESObjectREFR_GetContainer(this) ) /*0x4d9046*/
    return 0; /*0x4d9063*/
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d9051*/
  return sub_487B60(ContainerExtraDataForRef); /*0x4d9059*/
}
