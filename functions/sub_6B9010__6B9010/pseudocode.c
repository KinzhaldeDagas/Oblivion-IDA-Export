// OFE Rumors adapter verified: GetInfoGeneral cache call 6B90CC; matching 6B9128; owner 6B913A; constructor 6B91A5; cache store 6B91D8; rejected-menu destroy 6B921C. D7 role classification depends on original D7 input to constructor, but owner/response generation must use selected replacement topic. Native NoRumors checks remain intact.
// OFE 0.2.1 verified Rumors control flow (2026-10-02): call 6B90CC retrieves the actor cache; 6B9108 latches cache-present even before the unconditional GetMatchingInfo at 6B9128. At 6B9154/6B9159 a present cache prevents construction of the later matching INFO. Adapter implication: cache probing must remember both successful and failed custom selections and must not re-evaluate replacement conditions after returning a cache. Otherwise random conditions can run twice and a second successful replacement can be ignored. This is an OFE adapter invariant derived from the native branch sequence, not a change to native INFO conditions.
// OFE RC1 NoRumors offer-gate verification (2026-10-02): the D7 branch at 6B90BC bypasses GetInfoGeneralTopic/6B90CC when Actor::IsNoRumor is true. GetMatchingInfo at 6B9128 still runs unconditionally, and the later D7/NoRumors branch around 6B915F prevents fresh construction. The extension should therefore attempt custom player-Rumors selection only when this D7 iteration reached the native cache/offer gate; otherwise evaluating custom conditions would consume RNG or condition effects for a menu that native code will discard. Native stock matching remains unchanged. This gate applies to player Rumors only, not ambient linked INFOGENERAL selection.
void __thiscall MenuTopicManager::FillTopicList(MenuTopicManagerView *this, tListTopic *topics)
{
  MenuTopicManagerView *v2; // edi
  MenuTopicView **p_firstTopic; // eax
  int v4; // ecx
  tListTopic *v5; // eax
  TESTopic *data; // esi
  MenuTopicView *InfoGeneralTopic; // eax
  MenuTopicView *v8; // edi
  DialogueResponse **p_firstResponse; // eax
  OblivionTopicInfo *MatchingInfo; // eax
  OblivionTopicInfo *v11; // ebp
  TESQuest *OwnerQuest; // ebx
  UnkBohDialogueTopicBoh *v13; // edi
  UnkBohDialogueTopicBoh *v14; // eax
  UnkBohDialogueTopicBoh *v15; // eax
  MenuTopicManagerView *v16; // esi
  BSSimpleList_VoidPtr::NodeVoid *v17; // eax
  Actor *speaker; // [esp-8h] [ebp-3Ch]
  TESObjectREFR *v19; // [esp-4h] [ebp-38h]
  char v20; // [esp+15h] [ebp-1Fh]
  char v21; // [esp+16h] [ebp-1Eh]
  char v22; // [esp+17h] [ebp-1Dh]
  Actor *v24; // [esp+1Ch] [ebp-18h]
  bool conditionFallback[4]; // [esp+20h] [ebp-14h] BYREF
  UnkBohDialogueTopicBoh *v26; // [esp+24h] [ebp-10h]
  unsigned int v27; // [esp+30h] [ebp-4h]
  tListTopic *topicsa; // [esp+38h] [ebp+4h]

  v2 = this; /*0x6b9037*/
  v20 = 0; /*0x6b904f*/
  v24 = (Actor *)OblivionDynamicCast( /*0x6b9059*/
                   this->speaker,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  p_firstTopic = &v2->firstTopic; /*0x6b905d*/
  v4 = 0;                                       // Hard seed invariant: count existing MenuTopics and return unless count >= 1. This is not merely a duplicate check; FillTopicList cannot populate an empty manager. /*0x6b9063*/
  if ( v2 != (MenuTopicManagerView *)0xFFFFFFFC ) /*0x6b9067*/
  {
    do /*0x6b907d*/
    {
      if ( *p_firstTopic ) /*0x6b9070*/
        ++v4; /*0x6b9075*/
      p_firstTopic = (MenuTopicView **)p_firstTopic[1]; /*0x6b9078*/
    }
    while ( p_firstTopic ); /*0x6b907d*/
    if ( v4 ) /*0x6b9082*/
    {
      v5 = topics; /*0x6b9088*/
      if ( topics ) /*0x6b908e*/
      {
        while ( 1 ) /*0x6b909e*/
        {
          data = v5->node.data; /*0x6b909e*/
          if ( !v5->node.data ) /*0x6b90a2*/
            return; /*0x6b90a2*/
          topicsa = (tListTopic *)v5->node.next; /*0x6b90b2*/
          if ( data->super.refID == 0xD7 && !Actor::IsNoRumor(v24) )// NoRumors is only an offer gate for player-menu INFOGENERAL D7. It does not invalidate ExtraInfoGeneralTopic (0x59), alter the cached INFO/response/display/unread state, or filter ambient conversation links. /*0x6b90bc*/
          {
            InfoGeneralTopic = ExtraDataList::GetInfoGeneralTopic(&v2->speaker->member.baseExtraList, v2->speaker);// Retrieve the actor-owned INFOGENERAL cache when D7 is encountered in the player choice source. An empty post-load cache reconstructs responses from its stored selection identity; it does not rerun conditions. /*0x6b90cc*/
            v8 = InfoGeneralTopic; /*0x6b90d1*/
            if ( InfoGeneralTopic ) /*0x6b90d5*/
            {
              if ( !v20 ) /*0x6b90dc*/
              {
                p_firstResponse = &InfoGeneralTopic->firstResponse; /*0x6b90de*/
                v8->currentResponseNode = (DialogueResponseNode *)&v8->firstResponse;// Rewind the cached INFOGENERAL MenuTopic to its first response before re-appending it. No topic/INFO condition selection is rerun, so clearing NoRumors can resurrect the exact old cached rumor line and UI state. /*0x6b90e3*/
                if ( v8 != (MenuTopicView *)0xFFFFFFF4 ) /*0x6b90e6*/
                {
                  if ( *p_firstResponse ) /*0x6b90e8*/
                  {
                    if ( !BSSimpleList::Contains((BSSimpleList_VoidPtr *)&this->firstTopic, v8) ) /*0x6b90f7*/
                      BSSimpleList_PushBack(&this->firstTopic, (int)v8); /*0x6b9103*/
                  }
                }
                v20 = 1; /*0x6b9108*/
              }
            }
          }
          v19 = (TESObjectREFR *)reference; /*0x6b911a*/
          speaker = (Actor *)this->speaker; /*0x6b911b*/
          conditionFallback[0] = 0; /*0x6b9123*/
          MatchingInfo = TESTopic::GetMatchingInfo(data, conditionFallback, speaker, v19); /*0x6b9128*/
          v11 = MatchingInfo; /*0x6b912d*/
          if ( MatchingInfo ) /*0x6b9131*/
          {
            OwnerQuest = TESTopic::GetOwnerQuest(data, MatchingInfo); /*0x6b9146*/
            v22 = 0; /*0x6b9148*/
            v21 = 1; /*0x6b914d*/
            if ( data->super.refID == 0xD7 )    // Second player-menu INFOGENERAL gate decides whether to construct/cache a fresh Rumors MenuTopic. This logic is separate from ambient HELLO/linked-topic conversation generation. /*0x6b9152*/
            {                                   // Second NoRumors gate prevents constructing a fresh INFOGENERAL MenuTopic. A previously cached type-0x59 object remains owned by the actor and can reappear if the type-0x5A NoRumors override later clears.
              if ( v20 || Actor::IsNoRumor(v24) ) /*0x6b915f*/
                v21 = 0; /*0x6b916f*/
              else
                v22 = 1; /*0x6b9168*/
            }
            v13 = 0; /*0x6b9174*/
            if ( v21 ) /*0x6b917b*/
            {
              v14 = (UnkBohDialogueTopicBoh *)FormHeapAlloc(0x28u); /*0x6b917f*/
              v26 = v14; /*0x6b9187*/
              v27 = 0; /*0x6b918d*/
              if ( v14 ) /*0x6b9191*/
                v15 = (UnkBohDialogueTopicBoh *)MenuTopic::MenuTopic( /*0x6b91a5*/
                                                  (MenuTopicView *)v14,
                                                  OwnerQuest,
                                                  data,
                                                  v11,
                                                  (Actor *)this->speaker,
                                                  conditionFallback[0]);
              else
                v15 = 0; /*0x6b91ac*/
              v27 = 0xFFFFFFFF; /*0x6b91ae*/
              v13 = v15; /*0x6b91b6*/
            }
            if ( !v22 || (*(_BYTE *)(v13->unk18 + 0x25) & 4) != 0 )// Fresh INFOGENERAL with SayOnce clear is assigned to actor-owned ExtraInfoGeneralTopic. SayOnce prevents that ownership transfer. If such an uncached Rumors MenuTopic is appended, ClearData still skips destruction because isInfoGeneralTopic remains true, producing a native ownership leak. /*0x6b91cb*/
            {
              v16 = this; /*0x6b91df*/
            }
            else
            {
              v16 = this; /*0x6b91cd*/
              ExtraDataList::SetInfoGeneralTopic(&this->speaker->member.baseExtraList, (MenuTopicView *)v13);// Stores the exact MenuTopic pointer in ExtraInfoGeneralTopic; this is ownership, not a clone. The pointer is installed before the subsequent nonempty-response append test, so authored INFOGENERAL data relies on having at least one usable response. /*0x6b91d8*/
            }
            if ( v21 ) /*0x6b91e8*/
            {
              v13->unk1C = (UInt32)&v13->unk0C; /*0x6b91ef*/
              if ( v13 != (UnkBohDialogueTopicBoh *)0xFFFFFFF4 ) /*0x6b91f2*/
              {
                if ( v13->unk0C ) /*0x6b91ea*/
                {
                  v17 = (BSSimpleList_VoidPtr::NodeVoid *)&v16->firstTopic;// Only the cached INFOGENERAL MenuTopic is checked against the existing MenuTopic list before append. Ordinary linkedTo entries have no corresponding duplicate-pointer check, so repeated authored links may render repeated TOPIC tiles. /*0x6b91f9*/
                  if ( v16 == (MenuTopicManagerView *)0xFFFFFFFC ) /*0x6b91fe*/
                  {
LABEL_40:
                    BSSimpleList_PushBack(&v16->firstTopic, (int)v13);// Append successful MenuTopic to the seeded list and bypass local destruction. For cached INFOGENERAL, ExtraInfoGeneralTopic owns it. A SayOnce INFOGENERAL is deliberately uncached but remains exempt from ClearData destruction. /*0x6b920b*/
                    goto LABEL_43; /*0x6b9214*/
                  }
                  while ( v17->data != v13 ) /*0x6b9202*/
                  {
                    v17 = v17->next; /*0x6b9204*/
                    if ( !v17 ) /*0x6b9209*/
                      goto LABEL_40; /*0x6b9209*/
                  }
                }
              }
            }
            if ( v13 )                          // Non-appended MenuTopic is destroyed here. For a freshly cached INFOGENERAL with no usable response, the actor ExtraInfoGeneralTopic already holds this raw pointer; native data therefore depends on the nonempty-response invariant. /*0x6b9218*/
            {
              MenuTopic::Destroy((MenuTopicView *)v13); /*0x6b921c*/
              FormHeapFree((unsigned int)v13); /*0x6b9222*/
            }
          }
LABEL_43:
          if ( !topicsa ) /*0x6b922f*/
            return; /*0x6b922f*/
          v5 = topicsa; /*0x6b9096*/
          v2 = this; /*0x6b909a*/
        }
      }
    }
  }
}
