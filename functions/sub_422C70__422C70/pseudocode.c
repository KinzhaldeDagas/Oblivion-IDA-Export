ExtraInfoGeneralTopic *__thiscall sub_422C70(ExtraDataList *this, UnkBohDialogueTopicBoh *a2)
{
  ExtraInfoGeneralTopic *result; // eax
  ExtraInfoGeneralTopic *v4; // eax
  ExtraInfoGeneralTopic *v5; // eax

  result = (ExtraInfoGeneralTopic *)BaseExtraList_GetExtraData(this, kExtraData_InfoGeneralTopic);
  if ( result )
  {
    result->GeneralTopicData = a2;
  }
  else
  {
    v4 = (ExtraInfoGeneralTopic *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = ExtraInfoGeneralTopic::ExtraInfoGeneralTopic(v4, a2);
    else
      v5 = 0;
    return (ExtraInfoGeneralTopic *)BaseExtraList_AddExtra(this, &v5->super);
  }
  return result;
}
