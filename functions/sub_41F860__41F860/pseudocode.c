BSExtraData *__thiscall sub_41F860(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( result )
    return *(BSExtraData **)&result[1].members.type;
  return result;
}
