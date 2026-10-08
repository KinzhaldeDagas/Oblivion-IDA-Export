unsigned int *__thiscall sub_5E4360(Actor *this)
{
  TESActorBase *v2; // edi
  ExtraDataList *****ContainerChanges; // ebp
  TESForm *v4; // ebx

  v2 = 0; /*0x5e4368*/
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList); /*0x5e436f*/
  if ( !ContainerChanges ) /*0x5e4373*/
    return 0; /*0x5e43a9*/
  v4 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4382*/
  if ( v4 ) /*0x5e4386*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4392*/
      v2 = (TESActorBase *)v4; /*0x5e4398*/
  }
  return sub_48B9C0(ContainerChanges, v2, 0); /*0x5e43a5*/
}
