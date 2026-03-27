TESWorldSpace *__thiscall sub_4C9D10(TESObjectCELL *this)
{
  TESWorldSpace *result; // eax

  result = 0;
  if ( (this->members.flags0 & kFlags0_Interior) != 0 )
    return this->members.worldSpace;
  return result;
}
