BSExtraDataVtbl *__thiscall sub_4D79B0(TESObjectREFR *this)
{
  BSExtraData *StartLocation; // eax
  BSExtraDataVtbl *result; // eax

  StartLocation = ExtraDataList::GetStartLocation(&this->member.baseExtraList);
  if ( !StartLocation )
    return 0;
  result = StartLocation->vtbl;
  if ( !result || LOBYTE(result->CompareTo) != 0x35 )
    return 0;
  return result;
}
