unsigned int *__thiscall sub_60E8A0(Actor *this)
{
  ExtraDataList *****ContainerChanges; // edi
  int *ActorBaseForm; // eax

  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList);
  if ( !ContainerChanges )
    return 0;
  ActorBaseForm = (int *)Actor_GetActorBaseForm(this, 0);
  return sub_48B9C0(ContainerChanges, ActorBaseForm, 0);
}
