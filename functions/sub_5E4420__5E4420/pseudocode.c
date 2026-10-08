int __thiscall sub_5E4420(Actor *this)
{
  ExtraContainerChanges_Data *ContainerChanges; // eax

  ContainerChanges = ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList); /*0x5e4426*/
  if ( ContainerChanges ) /*0x5e442d*/
    return sub_4875C0(ContainerChanges); /*0x5e4432*/
  else
    return 0; /*0x5e4437*/
}
