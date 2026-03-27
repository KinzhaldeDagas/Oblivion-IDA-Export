BSExtraData *__thiscall sub_420F00(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Follower);
  if ( result )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x23u);
  return result;
}
