TESWorldSpace *__thiscall sub_4C9D10(TESObjectCELL *this)
{
  TESWorldSpace *result; // eax

  result = 0; /*0x4c9d10*/
  if ( (this->members.flags0 & kFlags0_Interior) != 0 ) /*0x4c9d16*/
    return this->members.worldSpace; /*0x4c9d18*/
  return result; /*0x4c9d1b*/
}
