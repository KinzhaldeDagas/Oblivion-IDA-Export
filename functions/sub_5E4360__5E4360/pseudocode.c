unsigned int *__thiscall sub_5E4360(Actor *this)
{
  int *v2; // edi
  ExtraDataList *****ContainerChanges; // ebp
  TESForm *v4; // ebx

  v2 = 0;
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList);
  if ( !ContainerChanges )
    return 0;
  v4 = this->vtbl->super.super.GetBaseForm(this);
  if ( v4 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v2 = (int *)v4;
  }
  return sub_48B9C0(ContainerChanges, v2, 0);
}
