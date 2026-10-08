BSExtraDataVtbl *__thiscall sub_4D79D0(_BYTE *this)
{
  BSExtraData *StartLocation; // eax
  BSExtraDataVtbl *result; // eax

  StartLocation = ExtraDataList::GetStartLocation((ExtraDataList *)(this + 0x44)); /*0x4d79d3*/
  if ( !StartLocation ) /*0x4d79da*/
    return 0; /*0x4d79da*/
  result = StartLocation->vtbl; /*0x4d79dc*/
  if ( !result || LOBYTE(result->CompareTo) != 0x30 ) /*0x4d79e6*/
    return 0; /*0x4d79e8*/
  return result; /*0x4d79ea*/
}
