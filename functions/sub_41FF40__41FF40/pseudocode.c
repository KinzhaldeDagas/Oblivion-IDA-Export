BSExtraData *__thiscall sub_41FF40(ExtraDataList *this, UInt8 a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem);
  if ( result )
    result[1].members.type = a2;
  return result;
}
