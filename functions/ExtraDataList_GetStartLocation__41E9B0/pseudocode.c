BSExtraData *__thiscall ExtraDataList::GetStartLocation(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_StartLocation);
  if ( result )
    ++result;
  return result;
}
