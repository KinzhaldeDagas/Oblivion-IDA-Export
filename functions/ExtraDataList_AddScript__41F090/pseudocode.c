BSExtraData *__thiscall ExtraDataList_AddScript(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x41f0b6*/
  if ( !result ) /*0x41f0bd*/
    return (BSExtraData *)ExtraDataList_AddScript_::NewExtraScript(this, (int)a2); /*0x41f0bd*/
  result[1].vtbl = a2; /*0x41f0c3*/
  return result; /*0x41f0c6*/
}
