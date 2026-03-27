TESWorldSpace *__thiscall TESObjectCELL_GetWorldSpace(TESObjectCELL *this)
{
  TESWorldSpace *result; // eax

  result = 0;
  if ( (this->members.flags0 & 1) == 0 )
    return this->members.worldSpace;
  return result;
}
