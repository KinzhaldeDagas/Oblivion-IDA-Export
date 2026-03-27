// Check the meaning of JailedState
bool __thiscall PlayerCharacter::IsJailed(PlayerCharacter *this)
{
  return (signed int)this->JailedState > 0;
}
