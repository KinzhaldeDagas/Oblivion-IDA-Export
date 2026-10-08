// OFE world-transition finding: this getter does not reevaluate INFO conditions. A custom cached MenuTopic must be invalidated when its active topic rule no longer matches the current speaker worldspace. Native 41E160 removes extra type 0x59 and invokes its deleting destructor; 42A0B0 then clears ownership flag and destroys/frees stored MenuTopic. Do not install a cache pointer when its response list is empty.
MenuTopicView *__thiscall ExtraDataList::GetInfoGeneralTopic(ExtraDataList *this, TESObjectREFR *speaker)
{
  TESTopic *topicData; // esi
  ExtraInfoGeneralTopic *ExtraData; // eax

  topicData = 0; /*0x425973*/
  ExtraData = (ExtraInfoGeneralTopic *)BaseExtraList_GetExtraData(this, kExtraData_InfoGeneralTopic); /*0x425975*/
  if ( ExtraData ) /*0x42597c*/
  {
    topicData = (TESTopic *)ExtraData->menuTopic; /*0x42597e*/
    if ( topicData ) /*0x425983*/
    {                                           // Rebuild gate is structural list emptiness, not an exhausted response cursor. Existing cached response entries remain the same selected INFO even if its conditions would now select another candidate.
      if ( MenuTopic::ResponsesEmpty((_DWORD *)ExtraData->menuTopic) ) /*0x425987*/
        MenuTopic::FillResponseList( /*0x4259a3*/
          (MenuTopicView *)topicData,
          (TESQuest *)topicData->super.modlist.next,
          *(TESTopic **)&topicData->topicType,
          (OblivionTopicInfo *)topicData->fullname.vtbl,
          speaker);                             // Reconstruct response entries from the cached identity fields only. This refreshes the runtime preview after a save/load that omitted transient response nodes without reevaluating match conditions or selecting another rumor.
    }
  }
  return (MenuTopicView *)topicData; /*0x4259aa*/
}
