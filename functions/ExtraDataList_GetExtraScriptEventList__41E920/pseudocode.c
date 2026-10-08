ExtraScript *__thiscall ExtraDataList_GetExtraScriptEventList(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x41e922*/
  if ( ExtraData ) /*0x41e929*/
    return *(ExtraScript **)&ExtraData[1].members.type; /*0x41e92b*/
  else
    return 0; /*0x41e92f*/
}
