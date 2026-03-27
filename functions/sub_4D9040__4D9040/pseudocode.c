bool __thiscall sub_4D9040(TESObjectREFR *this)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( !TESObjectREFR_GetContainer(this) )
    return 0;
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
  return sub_487B60(ContainerExtraDataForRef);
}
