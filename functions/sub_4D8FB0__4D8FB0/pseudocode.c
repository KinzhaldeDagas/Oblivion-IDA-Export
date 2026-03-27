double __thiscall sub_4D8FB0(TESObjectREFR *this)
{
  int *ContainerChanges; // eax
  double Encoumberance; // st7
  TESContainer *Container; // eax
  float v6; // [esp+4h] [ebp-Ch]

  v6 = 0.0;
  if ( TESObjectREFR_GetContainer(this) )
  {
    ContainerChanges = (int *)ExtraDataList_GetContainerChanges(&this->member.baseExtraList);
    if ( ContainerChanges )
    {
      Encoumberance = ContainerExtraData_GetEncoumberance(ContainerChanges);
    }
    else
    {
      Container = TESObjectREFR_GetContainer(this);
      Encoumberance = TESContainer_GetEncumberance((int)Container);
    }
    v6 = Encoumberance;
  }
  if ( this->vtbl->IsActor(this) && this != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    Actor_GetBaseEncumberance((int)this, v6);
  return v6;
}
