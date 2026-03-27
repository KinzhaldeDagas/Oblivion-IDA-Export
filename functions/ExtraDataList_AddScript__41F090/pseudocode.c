BSExtraData *__thiscall ExtraDataList_AddScript(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Script);
  if ( !result )
    return (BSExtraData *)ExtraDataList_AddScript_::NewExtraScript(a2);
  result[1].vtbl = (BSExtraDataVtbl *)a2;
  return result;
}
