BSExtraData *__thiscall sub_41F860(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x41f862*/
  if ( result ) /*0x41f869*/
    return *(BSExtraData **)&result[1].members.type; /*0x41f86c*/
  return result; /*0x41f86b*/
}
