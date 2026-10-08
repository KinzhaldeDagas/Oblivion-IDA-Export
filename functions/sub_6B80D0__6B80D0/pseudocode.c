// Ambient DialogueItem constructor. Unlike player MenuTopic::FillResponseList, this path appends every collected TESResponse without filtering empty display text and without INFOGENERAL/D7's first-nonempty-response limit. An ambient RUMOR item can therefore retain all authored responses.
DialogueItemView *__thiscall DialogueItem::DialogueItem(
        DialogueItemView *this,
        TESQuest *ownerQuest,
        TESTopic *topic,
        OblivionTopicInfo *info,
        TESObjectREFR *speaker)
{
  unsigned int **v6; // edi
  unsigned int *v7; // ebp
  BSStringT *v8; // eax
  DialogueResponse *v9; // eax
  unsigned int *responseList[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v12; // [esp+24h] [ebp-4h]

  this->firstResponse = 0; /*0x6b8101*/
  this->nextResponseNode = 0; /*0x6b8103*/
  this->currentResponseNode = 0; /*0x6b8106*/
  this->info = 0; /*0x6b8109*/
  if ( topic )
  {
    if ( info )
    {
      if ( ownerQuest )
      {
        this->ownerQuest = ownerQuest; /*0x6b812a*/
        this->info = info; /*0x6b8131*/
        this->topic = topic; /*0x6b8134*/
        this->speaker = speaker; /*0x6b8137*/
        responseList[0] = 0; /*0x6b813a*/
        responseList[1] = 0; /*0x6b813e*/
        v12 = 0; /*0x6b8149*/
        TESTopicInfo::CollectResponses(info, responseList);// DialogueItem construction also consumes an independent TESResponseList snapshot. Ambient items therefore remain valid after the one-entry shared INFO response cache is switched to a different TESTopicInfo. /*0x6b814d*/
        v6 = responseList; /*0x6b8152*/
        do
        {
          v7 = *v6; /*0x6b8156*/
          if ( !*v6 ) /*0x6b8156*/
            break; /*0x6b815a*/
          v6 = (unsigned int **)v6[1]; /*0x6b815c*/
          v8 = (BSStringT *)FormHeapAlloc(0x18u); /*0x6b8161*/
          LOBYTE(v12) = 1; /*0x6b816f*/
          v9 = v8 ? DialogueResponse::DialogueResponse((DialogueResponse *)v8, ownerQuest, topic, info, speaker, v7) : 0;
          LOBYTE(v12) = 0; /*0x6b8195*/
          BSSimpleList_PushBack(this, (int)v9); /*0x6b819a*/
        }
        while ( v6 );
        v12 = 0xFFFFFFFF; /*0x6b81a7*/
        TESResponseList::Clear(responseList); /*0x6b81af*/
      }
    }
  }
  return this; /*0x6b81b6*/
}
