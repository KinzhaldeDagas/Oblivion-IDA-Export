// OFE topic routing verified: call adapters must retain native selector, including quest priority/order, continued quest+INFO condition grouping, speaker/target context, Random/RandomEnd and conversation reuse. A custom replacement is eligible only when returned INFO is nonnull AND lowDispositionFailure is false; otherwise invoke original stock matching path unchanged.
OblivionTopicInfo *__thiscall TESTopic::SelectInfoForSpeaker(
        TESTopic *this,
        bool *lowDispositionFailure,
        Actor *speaker,
        TESObjectREFR *target,
        bool useConversationRules,
        TESTopic *previousTopic,
        ConversationView *conversation)
{
  TESTopic *v7; // ebp
  unsigned int v8; // ecx
  OblivionTopicInfo *result; // eax
  tListTopic *v10; // eax
  BSSimpleList_VoidPtr *v11; // ecx
  QuestInfoEntry *p_questInfoEntries; // eax
  int topicType; // ecx
  QuestInfoData *data; // edi
  int v15; // ebp
  int v16; // esi
  TESTopic **v17; // eax
  TESTopic **v18; // ecx
  TESTopic *v19; // eax
  ConversationView *v20; // eax
  ConversationView *nextItemNode; // edx
  DialogueItemView *firstItem; // eax
  BSSimpleList_VoidPtr *v23; // eax
  unsigned int i; // esi
  unsigned int v25; // edx
  BSSimpleList_VoidPtr *v26; // ecx
  int v27; // edi
  int v28; // edx
  char v29; // [esp+Ah] [ebp-12h]
  bool lowDispositionFailurea; // [esp+Bh] [ebp-11h] BYREF
  TESTopic *v31; // [esp+Ch] [ebp-10h]
  QuestInfoEntry *next; // [esp+10h] [ebp-Ch]
  OblivionTopicInfo *v33; // [esp+14h] [ebp-8h]
  unsigned int firstFreeEntry; // [esp+18h] [ebp-4h]

  v7 = this; /*0x52f01b*/
  *lowDispositionFailure = 0; /*0x52f01d*/
  v8 = (unsigned int)this->super.flags >> 5; /*0x52f022*/
  v31 = v7; /*0x52f028*/
  if ( (v8 & 1) != 0 ) /*0x52f02c*/
    return 0; /*0x52f035*/
  if ( g_dialogueRandomInfoCandidates ) /*0x52f038*/
  {
    BSSimpleList_Clear(g_dialogueRandomInfoCandidates); /*0x52f042*/
  }
  else
  {
    v10 = (tListTopic *)FormHeapAlloc(8u); /*0x52f04b*/
    if ( v10 ) /*0x52f055*/
    {
      v10->node.data = 0; /*0x52f057*/
      v10->node.next = 0; /*0x52f059*/
    }
    else
    {
      v10 = 0; /*0x52f05e*/
    }
    g_dialogueRandomInfoCandidates = (BSSimpleList_VoidPtr *)v10; /*0x52f060*/
  }
  v11 = g_dialogueRandomInfoCandidates; /*0x52f065*/
  p_questInfoEntries = &v7->questInfoEntries; /*0x52f06b*/
  v29 = 0; /*0x52f072*/
  v33 = 0; /*0x52f076*/
  if ( v7 == (TESTopic *)0xFFFFFFD8 ) /*0x52f07a*/
    goto LABEL_10; /*0x52f07a*/
  while ( 1 ) /*0x52f114*/
  {
    data = p_questInfoEntries->data;            // QuestInfoEntry traversal is already sorted by descending QUST priority. Selection therefore exhausts higher-priority quest INFO arrays before lower-priority quests; equal-priority bucket order remains stable. /*0x52f114*/
    if ( !p_questInfoEntries->data || v29 ) /*0x52f122*/
      break; /*0x52f122*/
    next = p_questInfoEntries->next; /*0x52f12d*/
    if ( data ) /*0x52f131*/
    {
      if ( data->parentQuest ) /*0x52f137*/
      {                                         // Only a running quest bucket participates in INFO selection: TESQuest.questFlags bit 0x01. In authored QUST DATA the Construction Set labels this same bit 'Start Game Enabled'.
        if ( (data->parentQuest->questFlags & 1) != 0 ) /*0x52f145*/
        {
          v15 = 0; /*0x52f14e*/
          firstFreeEntry = data->infoList.firstFreeEntry; /*0x52f152*/
          if ( firstFreeEntry ) /*0x52f156*/
          {
            while ( 1 ) /*0x52f163*/
            {
              v16 = (int)data->infoList.data[v15]; /*0x52f163*/
              lowDispositionFailurea = 0; /*0x52f168*/
              if ( !v16 /*0x52f186*/
                || !TESTopicInfo::EvaluateConditions(
                      (OblivionTopicInfo *)v16,
                      &lowDispositionFailurea,
                      data->parentQuest,
                      speaker,
                      target) )                 // Evaluate quest conditions followed by INFO conditions for this speaker/target. SayOnce is rejected here when the INFO-global spoken byte is already set.
              {
                goto LABEL_55; /*0x52f18d*/
              }
              *lowDispositionFailure = 0; /*0x52f19b*/
              if ( !useConversationRules ) /*0x52f19d*/
                goto LABEL_48; /*0x52f19d*/
              v17 = *(TESTopic ***)(v16 + 0x30); /*0x52f1a3*/
              if ( !v17 ) /*0x52f1a8*/
                goto LABEL_38; /*0x52f1a8*/
              if ( previousTopic ) /*0x52f1b0*/
              {
                while ( 1 ) /*0x52f1b2*/
                {
                  v18 = (TESTopic **)v17[1]; /*0x52f1b2*/
                  if ( !v18 && !*v17 ) /*0x52f1b9*/
                    goto LABEL_55; /*0x52f1bb*/
                  v19 = *v17; /*0x52f1c1*/
                  if ( v19 == previousTopic || v19->super.refID == 0xD3 ) /*0x52f1ce*/
                    goto LABEL_38;              // Conversation link acceptance: the candidate linked topic may equal previousTopic or be stock 000000D3 / ANY, which acts as the wildcard continuation root. /*0x52f1ce*/
                  v17 = v18; /*0x52f1d0*/
                  if ( !v18 ) /*0x52f1d4*/
                    goto LABEL_55; /*0x52f1d4*/
                }
              }
              if ( BSSimpleList_IsEmpty(*(BSSimpleList_VoidPtr **)(v16 + 0x30)) || target == (TESObjectREFR *)reference )// For normal NPC-to-NPC random conversation, previousTopic=null plus nonempty INFO.linkedFrom rejects this candidate. The target==Player exception applies only to this first-item/no-previous-topic branch. /*0x52f1ef*/
              {                                 // TESTopicInfo::RandomEnd (0x20): stop scanning later INFO candidates after this match.
LABEL_38:
                if ( (*(_BYTE *)(v16 + 0x25) & 0x20) != 0 ) /*0x52f1ff*/
                  v29 = 1;                      // Latch RandomEnd before checking whether this INFO duplicates an earlier conversation item. The stop flag is not cleared if the later exact-INFO or same quest/topic reuse test rejects the candidate. /*0x52f201*/
                v20 = conversation; /*0x52f206*/
                if ( conversation ) /*0x52f20c*/
                {
                  do /*0x52f210*/
                  {
                    nextItemNode = (ConversationView *)v20->nextItemNode; /*0x52f210*/
                    if ( !nextItemNode && !v20->firstItem ) /*0x52f217*/
                      break; /*0x52f217*/
                    firstItem = v20->firstItem; /*0x52f21b*/
                    if ( firstItem->info == (OblivionTopicInfo *)v16 /*0x52f236*/
                      || (data->parentQuest->questFlags & 4) == 0
                      && firstItem->ownerQuest == data->parentQuest
                      && firstItem->topic == v31 )
                    {
                      goto LABEL_55;            // Same owner quest/topic reuse rejection also preserves an already-latched RandomEnd stop. QUST Allow repeated conversation topics bypasses only this same-topic test, never exact-INFO reuse. /*0x52f236*/
                    }
                    v20 = nextItemNode; /*0x52f238*/
                  }
                  while ( nextItemNode ); /*0x52f210*/
                }
LABEL_48:
                if ( (*(_BYTE *)(v16 + 0x25) & 0x20) != 0 ) /*0x52f24a*/
                  v29 = 1; /*0x52f24c*/
                v11 = g_dialogueRandomInfoCandidates; /*0x52f251*/
                if ( !g_dialogueRandomInfoCandidates->firstNode.next /*0x52f267*/
                  && !v11->firstNode.data
                  && (*(_BYTE *)(v16 + 0x25) & 2) == 0 )// TESTopicInfo::Random (0x02): non-random eligible INFO returns immediately when no random candidates exist; random INFOs are accumulated.
                {
                  return (OblivionTopicInfo *)v16; /*0x52f2c8*/
                }
                if ( (*(_BYTE *)(v16 + 0x25) & 2) == 0 )// An eligible non-Random INFO terminates further scanning. If Random candidates were already accumulated, the non-Random INFO is a boundary and is not itself selected. /*0x52f26d*/
                {
                  v29 = 1; /*0x52f2b8*/
                  break; /*0x52f2bd*/
                }
                BSSimpleList_PushFront(v11, v16); /*0x52f270*/
              }
LABEL_55:
              if ( !useConversationRules && lowDispositionFailurea ) /*0x52f27f*/
              {
                v33 = (OblivionTopicInfo *)v16; // Player/menu-only fallback: retain this condition-failed INFO when its failed condition was GetDisposition with > or >=. The last such candidate wins if no normal or Random match exists. /*0x52f285*/
                *lowDispositionFailure = 1; /*0x52f289*/
              }
              if ( !v29 && ++v15 < firstFreeEntry ) /*0x52f299*/
                continue; /*0x52f299*/
              v11 = g_dialogueRandomInfoCandidates; /*0x52f29f*/
              break; /*0x52f29f*/
            }
          }
        }
      }
    }
    v7 = v31; /*0x52f2a5*/
    if ( !next ) /*0x52f2ad*/
      break; /*0x52f2ad*/
    p_questInfoEntries = next; /*0x52f110*/
  }
LABEL_10:
  if ( v11->firstNode.next || v11->firstNode.data ) /*0x52f089*/
  {
    v23 = v11; /*0x52f2d9*/
    for ( i = 0; v23; v23 = (BSSimpleList_VoidPtr *)v23->firstNode.next ) /*0x52f2df*/
    {
      if ( v23->firstNode.data ) /*0x52f2e1*/
        ++i; /*0x52f2e5*/
    }
    v25 = Game_RandomLargeInteger(0) % i;       // Uniform selection from the eligible Random (0x02) INFO candidate list. /*0x52f2f7*/
    v26 = g_dialogueRandomInfoCandidates; /*0x52f2f9*/
    v27 = 0; /*0x52f302*/
    result = 0; /*0x52f304*/
    v28 = v25 + 1; /*0x52f306*/
    if ( v28 > 0 ) /*0x52f30b*/
    {
      do /*0x52f324*/
      {
        if ( !v26 ) /*0x52f312*/
          break; /*0x52f312*/
        if ( v26->firstNode.data ) /*0x52f314*/
        {
          result = (OblivionTopicInfo *)v26->firstNode.data; /*0x52f31a*/
          ++v27; /*0x52f31c*/
        }
        v26 = (BSSimpleList_VoidPtr *)v26->firstNode.next; /*0x52f321*/
      }
      while ( v27 < v28 ); /*0x52f324*/
    }
  }
  else if ( useConversationRules ) /*0x52f097*/
  {
    result = 0; /*0x52f0a3*/
    if ( reference->isInSEWorld )               // Shivering Isles fallback for ambient selection only: if no match while the player is in the SE world, temporarily retry base-world conditions for dialogue types Combat(2), Persuasion(3), Detection(4), or Miscellaneous(6), then restore the world flag. /*0x52f0a5*/
    {
      topicType = (char)v7->topicType; /*0x52f0b1*/
      if ( topicType >= 2 && (topicType <= 4 || topicType == 6) ) /*0x52f0c6*/
      {
        reference->isInSEWorld = 0; /*0x52f0e8*/
        result = TESTopic::SelectInfoForSpeaker( /*0x52f0ee*/
                   v7,
                   lowDispositionFailure,
                   speaker,
                   target,
                   useConversationRules,
                   previousTopic,
                   conversation);
        reference->isInSEWorld = 1; /*0x52f0fc*/
      }
    }
  }
  else
  {
    return v33; /*0x52f2cb*/
  }
  return result; /*0x52f02e*/
}
