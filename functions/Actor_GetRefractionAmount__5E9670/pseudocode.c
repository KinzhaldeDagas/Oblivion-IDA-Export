bool __thiscall Actor_GetRefractionAmount(Actor *this)
{
  ExtraDataList *p_baseExtraList; // ecx

  p_baseExtraList = &this->members.super.super.baseExtraList;
  return p_baseExtraList && ExtraDataList::GetRefractionProperty(p_baseExtraList);
}
