unsigned int *__thiscall sub_60E8A0(Actor *this)
{
  ExtraDataList *****ContainerChanges; // edi
  TESActorBase *ActorBaseForm; // eax

  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList); /*0x60e8af*/
  if ( !ContainerChanges ) /*0x60e8b3*/
    return 0; /*0x60e8cc*/
  ActorBaseForm = (TESActorBase *)Actor_GetActorBaseForm(this, 0); /*0x60e8b9*/
  return sub_48B9C0(ContainerChanges, ActorBaseForm, 0); /*0x60e8c6*/
}
