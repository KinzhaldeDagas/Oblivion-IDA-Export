bool __thiscall Actor_GetRefractionAmount(Actor *this)
{
  ExtraDataList *p_baseExtraList; // ecx

  p_baseExtraList = &this->members.super.super.baseExtraList; /*0x5e9670*/
  return p_baseExtraList && ExtraDataList_GetRefractionPropertyExtra(p_baseExtraList); /*0x5e9680*/
}
