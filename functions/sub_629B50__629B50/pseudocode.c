UInt8 __thiscall sub_629B50(HighProcess *this, UInt8 a2)
{
  this->movementFlags &= kMovement_Sneak|kMovement_Swim|kMovement_Jump|kMovement_Fly|kMovement_Fall|kMovement_Slide|0xC0;
  this->unk0D0 = a2;
  return a2;
}
