BSExtraDataVtbl *__thiscall sub_4D79B0(TESObjectREFR *this)
{
  BSExtraData *StartLocation; // eax
  BSExtraDataVtbl *result; // eax

  StartLocation = ExtraDataList::GetStartLocation(&this->member.baseExtraList); /*0x4d79b3*/
  if ( !StartLocation ) /*0x4d79ba*/
    return 0; /*0x4d79ba*/
  result = StartLocation->vtbl; /*0x4d79bc*/
  if ( !result || LOBYTE(result->CompareTo) != 0x35 ) /*0x4d79c6*/
    return 0; /*0x4d79c8*/
  return result; /*0x4d79ca*/
}
