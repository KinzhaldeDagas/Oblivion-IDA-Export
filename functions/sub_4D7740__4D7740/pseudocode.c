BSExtraData *__thiscall sub_4D7740(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // esi
  BSExtraData *result; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *v5; // eax

  p_baseExtraList = &this->member.baseExtraList;
  result = (BSExtraData *)sub_41E690(&this->member.baseExtraList);
  if ( !result )
  {
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(p_baseExtraList);
    v4 = Teleport;
    if ( Teleport && sub_42B410(Teleport) )
    {
      v5 = sub_42B410(v4);
      return (BSExtraData *)sub_41E690((ExtraDataList *)&v5[8].CompareTo);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
