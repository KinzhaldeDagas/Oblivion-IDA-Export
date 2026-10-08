double __thiscall sub_4D8FB0(TESObjectREFR *this)
{
  int *ContainerChanges; // eax
  double Encoumberance; // st7
  TESContainer *Container; // eax
  double BaseEncumberance; // st7
  float v7; // [esp+4h] [ebp-Ch]

  v7 = 0.0; /*0x4d8fb6*/
  if ( TESObjectREFR_GetContainer(this) ) /*0x4d8fbc*/
  {
    ContainerChanges = (int *)ExtraDataList_GetContainerChanges(&this->member.baseExtraList); /*0x4d8fc8*/
    if ( ContainerChanges ) /*0x4d8fcf*/
    {
      Encoumberance = ContainerExtraData_GetEncoumberance(ContainerChanges); /*0x4d8fd3*/
    }
    else
    {
      Container = TESObjectREFR_GetContainer(this); /*0x4d8fdc*/
      Encoumberance = TESContainer_GetEncumberance((int)Container); /*0x4d8fe3*/
    }
    v7 = Encoumberance; /*0x4d8fe8*/
  }
  if ( this->vtbl->IsActor(this) && this != (TESObjectREFR *)reference ) /*0x4d9002*/
  {
    BaseEncumberance = Actor_GetBaseEncumberance((int)this, v7); /*0x4d900e*/
    if ( BaseEncumberance < v7 ) /*0x4d901c*/
      return (float)Actor_GetBaseEncumberance((int)this, BaseEncumberance); /*0x4d9025*/
  }
  return v7; /*0x4d902d*/
}
