int __thiscall sub_5E4420(Actor *this)
{
  ExtraContainerChanges_Data *ContainerChanges; // eax

  ContainerChanges = ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList);
  if ( ContainerChanges )
    return sub_4875C0(ContainerChanges);
  else
    return 0;
}
