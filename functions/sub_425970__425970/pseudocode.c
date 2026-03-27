TESTopic *__thiscall sub_425970(ExtraDataList *this, TESObjectREFR *a2)
{
  TESTopic *topicData; // esi
  ExtraInfoGeneralTopic *ExtraData; // eax

  topicData = 0;
  ExtraData = (ExtraInfoGeneralTopic *)BaseExtraList_GetExtraData(this, kExtraData_InfoGeneralTopic);
  if ( ExtraData )
  {
    topicData = (TESTopic *)ExtraData->GeneralTopicData;
    if ( topicData )
    {
      if ( sub_422DF0(&ExtraData->GeneralTopicData->unkString.m_data) )
        sub_6B8CF0(
          (BSStringT *)topicData,
          (TESQuest *)topicData->super.modlist.next,
          *(TESTopic **)&topicData->topicType,
          (TESForm *)topicData->fullname.vtbl,
          a2);
    }
  }
  return topicData;
}
