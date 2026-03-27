BSExtraData *__thiscall ExtraDataList_SetScriptEventList(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Script);
  if ( result )
    *(_DWORD *)&result[1].members.type = a2;
  return result;
}
