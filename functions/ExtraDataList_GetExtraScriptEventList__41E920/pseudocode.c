ExtraScript *__thiscall ExtraDataList_GetExtraScriptEventList(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script);
  if ( ExtraData )
    return *(ExtraScript **)&ExtraData[1].members.type;
  else
    return 0;
}
