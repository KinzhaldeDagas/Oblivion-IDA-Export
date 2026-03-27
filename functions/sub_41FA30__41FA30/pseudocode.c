BSExtraData *__thiscall sub_41FA30(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_EditorID);
  if ( result )
    return (BSExtraData *)result[1].vtbl;
  return result;
}
