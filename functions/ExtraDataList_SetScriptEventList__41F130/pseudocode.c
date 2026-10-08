BSExtraData *__thiscall ExtraDataList_SetScriptEventList(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x41f132*/
  if ( result ) /*0x41f139*/
    *(_DWORD *)&result[1].members.type = a2; /*0x41f13f*/
  return result; /*0x41f142*/
}
