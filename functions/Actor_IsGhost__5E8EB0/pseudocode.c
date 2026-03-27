bool __thiscall Actor_IsGhost(Actor *this)
{
  return BaseExtraList_HasGhost(&this->members.super.super.baseExtraList);
}
