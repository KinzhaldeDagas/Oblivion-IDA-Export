TESWorldSpace *__thiscall TESObjectCELL_GetWorldSpace(TESObjectCELL *this)
{
  TESWorldSpace *result; // eax

  result = 0; /*0x4c9cf0*/
  if ( (this->members.flags0 & 1) == 0 ) /*0x4c9cf6*/
    return this->members.worldSpace; /*0x4c9cf8*/
  return result; /*0x4c9cfb*/
}
