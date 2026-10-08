BSExtraData *__thiscall sub_41FF40(ExtraDataList *this, UInt8 a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem); /*0x41ff42*/
  if ( result ) /*0x41ff49*/
    result[1].members.type = a2; /*0x41ff4f*/
  return result; /*0x41ff52*/
}
