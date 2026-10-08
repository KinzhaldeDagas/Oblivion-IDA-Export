// Removes ExtraFollower (type 0x23) when present.
BSExtraData *__thiscall ExtraDataList_RemoveFollowerExtra(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Follower); /*0x420f05*/
  if ( result ) /*0x420f0c*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x23u); /*0x420f12*/
  return result; /*0x420f17*/
}
