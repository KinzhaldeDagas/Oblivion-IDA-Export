BSExtraData *__thiscall sub_41FA30(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_EditorID); /*0x41fa32*/
  if ( result ) /*0x41fa39*/
    return (BSExtraData *)result[1].vtbl; /*0x41fa3c*/
  return result; /*0x41fa3b*/
}
