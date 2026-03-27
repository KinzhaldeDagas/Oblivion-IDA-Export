BSExtraDataVtbl *__thiscall TESObjectREFR_GetOwner(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // edi
  BSExtraDataVtbl *Owner; // ebx
  BSExtraData *Teleport; // eax
  BSExtraData *v5; // edi
  BSExtraDataVtbl *v6; // eax
  TESObjectCELL *parentCell; // ecx
  int v8; // eax

  p_baseExtraList = &this->member.baseExtraList;
  Owner = ExtraDataList_GetOwner(&this->member.baseExtraList);
  if ( !this->vtbl->IsActor(this) && !Owner )
  {
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(p_baseExtraList);
    v5 = Teleport;
    if ( !Teleport
      || !sub_42B410(Teleport)
      || (v6 = sub_42B410(v5), (Owner = ExtraDataList_GetOwner((ExtraDataList *)&v6[8].CompareTo)) == 0) )
    {
      if ( (!this->member.baseForm || this->vtbl->GetBaseForm(this)->member.type != kFormType_Furniture)
        && this->vtbl->GetBaseForm(this)->member.type != kFormType_Door
        && this->vtbl->GetBaseForm(this)->member.type != kFormType_Activator )
      {
        parentCell = this->member.parentCell;
        if ( parentCell )
        {
          TESObjectCELL_GetOwner((ExtraDataList *)parentCell);
          return (BSExtraDataVtbl *)v8;
        }
      }
    }
  }
  return Owner;
}
