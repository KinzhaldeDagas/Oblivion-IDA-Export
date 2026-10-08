BSExtraData *__thiscall ExtraDataList::GetStartLocation(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_StartLocation); /*0x41e9b2*/
  if ( result ) /*0x41e9b9*/
    ++result; /*0x41e9bc*/
  return result; /*0x41e9bb*/
}
