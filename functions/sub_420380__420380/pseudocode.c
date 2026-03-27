BSExtraData *__thiscall sub_420380(ExtraDataList *this, UInt8 a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent);
  if ( result )
    result[1].members.type = a2;
  return result;
}
