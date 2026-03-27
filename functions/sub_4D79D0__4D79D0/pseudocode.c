BSExtraDataVtbl *__thiscall sub_4D79D0(_BYTE *this)
{
  BSExtraData *StartLocation; // eax
  BSExtraDataVtbl *result; // eax

  StartLocation = ExtraDataList::GetStartLocation((ExtraDataList *)(this + 0x44));
  if ( !StartLocation )
    return 0;
  result = StartLocation->vtbl;
  if ( !result || LOBYTE(result->CompareTo) != 0x30 )
    return 0;
  return result;
}
