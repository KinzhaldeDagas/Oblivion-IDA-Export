BSExtraData *__thiscall sub_420360(ExtraDataList *this, char a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent);
  if ( result )
  {
    if ( a2 )
      result[1].members.type |= 1u;
    else
      result[1].members.type &= ~1u;
  }
  return result;
}
