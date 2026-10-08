// OFE ambient routes: constructor call 6B743D -> CreateConversation. Automatic null startingTopic means HELLO/D2; explicit nonnull start bypasses routing. A preselected replacement can be consumed once at native selector call 52F7D3, preserving native subsequent construction/result execution without reevaluating random conditions. CreateDialogueItem calls 52F902/52F91B/52F946 can route ambient D7; previous-topic identity must follow actual last DialogueItem.topic at +0x10 when using custom source topics.
int __cdecl TESTopic::CreateConversation(
        Actor *speaker,
        TESObjectREFR *target,
        ConversationView *conversation,
        TESTopic *startingTopic)
{
  ConversationView *v4; // ebp
  int result; // eax
  DialogueItemView *firstItem; // esi
  DialogueItemNode *nextItemNode; // eax
  Actor *currentSpeakerForItem; // esi
  TESTopic *currentTopic; // ebx
  DialogueItemView *DialogueItem; // edi
  OblivionTopicInfo *info; // ecx
  TESTopicLinksDecoded *links; // esi
  tListTopic *p_linkedTo; // esi
  int v14; // ebp
  tListTopic *i; // eax
  int v16; // edx
  int j; // ecx
  OblivionTopicInfo *v18; // ecx
  bool v19; // zf
  signed int v20; // eax
  TESObjectREFR *v21; // eax
  void *v22; // eax
  int v23; // ebx
  DialogueListCursorView *v24; // esi
  void *v25; // edi
  _DWORD *Current; // eax
  const char *v27; // eax
  const char *v28; // eax
  const char *v29; // [esp-14h] [ebp-24h]
  TESObjectREFR *routedTarget; // [esp+4h] [ebp-Ch]
  TESTopic *previousTopic; // [esp+8h] [ebp-8h]
  Actor *routedSpeaker; // [esp+Ch] [ebp-4h]
  #9840 *conversationa; // [esp+1Ch] [ebp+Ch]

  v4 = conversation; /*0x52f834*/
  if ( !conversation ) /*0x52f83a*/
    return 0; /*0x52f83c*/
  while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)conversation) ) /*0x52f84d*/
  {
    firstItem = conversation->firstItem; /*0x52f84f*/
    if ( conversation->firstItem ) /*0x52f84f*/
    {
      DialogueItem::Destroy(conversation->firstItem); /*0x52f858*/
      FormHeapFree((unsigned int)firstItem); /*0x52f85e*/
    }
    nextItemNode = conversation->nextItemNode; /*0x52f866*/
    if ( nextItemNode ) /*0x52f86b*/
    {
      conversation->nextItemNode = nextItemNode->next; /*0x52f870*/
      conversation->firstItem = nextItemNode->item; /*0x52f876*/
      FormHeapFree((unsigned int)nextItemNode); /*0x52f879*/
    }
    else
    {
      conversation->firstItem = 0; /*0x52f883*/
    }
  }
  currentSpeakerForItem = speaker; /*0x52f88c*/
  if ( !speaker || !target ) /*0x52f89e*/
    return 0; /*0x52fad7*/
  currentTopic = startingTopic; /*0x52f8a5*/
  routedSpeaker = speaker; /*0x52f8ac*/
  routedTarget = target; /*0x52f8b0*/
  previousTopic = 0; /*0x52f8b4*/
  if ( startingTopic || (currentTopic = LookupTopicByFormID(0xD2u)) != 0 ) /*0x52f8d2*/
  {
    while ( (unsigned int)BSSimpleList_Count(v4) < 0x64 ) /*0x52f8e6*/
    {
      DialogueItem = TESTopic::CreateDialogueItem(currentTopic, currentSpeakerForItem, routedTarget, previousTopic, v4); /*0x52f907*/
      if ( !DialogueItem ) /*0x52f90b*/
      {
        DialogueItem = TESTopic::CreateDialogueItem( /*0x52f920*/
                         currentTopic,
                         currentSpeakerForItem,
                         routedTarget,
                         previousTopic,
                         v4);                   // The repeated CreateDialogueItem attempt reevaluates its current topic's conditions. If they include GetRandomPercent (index 77), the retry consumes another RNG value; if they include GetNoRumors, the handler reads Actor::IsNoRumor on the routed condition subject.
        if ( !DialogueItem ) /*0x52f924*/
        {
          currentTopic = LookupTopicByFormID(0xD4u); /*0x52f940*/
          DialogueItem = TESTopic::CreateDialogueItem( /*0x52f94b*/
                           currentTopic,
                           currentSpeakerForItem,
                           routedTarget,
                           previousTopic,
                           v4);
          if ( !DialogueItem ) /*0x52f94f*/
            break; /*0x52f94f*/
        }
      }
      info = DialogueItem->info; /*0x52f955*/
      if ( info ) /*0x52f95a*/
      {
        if ( (info->flags & 8) != 0 ) /*0x52f965*/
        {
          TESTopicInfo::RunResult(info, (TESObjectREFR *)speaker); /*0x52f96c*/
          TESTopicInfo::AddTopicList(DialogueItem->info); /*0x52f974*/
        }
      }
      BSSimpleList_PushBack(v4, (int)DialogueItem); /*0x52f97c*/
      links = DialogueItem->info->links; /*0x52f984*/
      previousTopic = currentTopic; /*0x52f987*/
      currentTopic = 0; /*0x52f98b*/
      if ( !links ) /*0x52f98f*/
        break; /*0x52f98f*/
      p_linkedTo = &links->linkedTo; /*0x52f995*/
      v14 = 0; /*0x52f998*/
      for ( i = p_linkedTo; i; i = (tListTopic *)i->node.next ) /*0x52f99e*/
      {
        if ( i->node.data ) /*0x52f9a0*/
          ++v14; /*0x52f9a5*/
      }
      v16 = v14; /*0x52f9b1*/
      if ( v14 ) /*0x52f9b3*/
        v16 = rand() % v14 + 1; /*0x52f9bd*/
      for ( j = 0; j < v16; p_linkedTo = (tListTopic *)p_linkedTo->node.next ) /*0x52f9c4*/
      {
        if ( !p_linkedTo ) /*0x52f9c8*/
          break; /*0x52f9c8*/
        if ( !p_linkedTo->node.next && !p_linkedTo->node.data ) /*0x52f9d1*/
          break; /*0x52f9d3*/
        currentTopic = p_linkedTo->node.data; /*0x52f9d5*/
        ++j; /*0x52f9d7*/
      }
      v18 = DialogueItem->info; /*0x52f9e0*/
      if ( v18->nextSpeaker == TopicInfoNextSpeaker_Target ) /*0x52f9e3*/
        goto LABEL_39; /*0x52f9e3*/
      if ( v18->nextSpeaker == TopicInfoNextSpeaker_Random ) /*0x52f9ef*/
      {
        v20 = rand() & 0x80000001; /*0x52f9f6*/
        v19 = v20 == 0; /*0x52f9f6*/
        if ( v20 < 0 ) /*0x52f9fb*/
          v19 = (((_BYTE)v20 - 1) | 0xFFFFFFFE) == 0xFFFFFFFF; /*0x52fa01*/
        if ( v19 ) /*0x52fa02*/
        {
LABEL_39:
          v21 = (TESObjectREFR *)routedSpeaker; /*0x52fa04*/
          routedSpeaker = (Actor *)routedTarget; /*0x52fa0c*/
          routedTarget = v21; /*0x52fa10*/
        }
      }
      v4 = conversation; /*0x52fa16*/
      if ( !currentTopic ) /*0x52fa1a*/
        break; /*0x52fa1a*/
      currentSpeakerForItem = routedSpeaker; /*0x52f8e0*/
    }
  }
  if ( unk_B36508 )
  {
    Interface_ConsolePrint("------NEW CONVERSATION CREATED---------------------"); /*0x52fa32*/
    v22 = v4; /*0x52fa3a*/
    v23 = 1; /*0x52fa3c*/
    while ( 1 )
    {
      v24 = *(DialogueListCursorView **)v22; /*0x52fa47*/
      if ( !*(_DWORD *)v22 ) /*0x52fa47*/
        break; /*0x52fa47*/
      conversationa = *((#9840 **)v22 + 1); /*0x52fa52*/
      if ( DialogueItem::FirstResponse((DialogueItemView *)v24) )
      {
        v25 = v24[2].firstItem; /*0x52fa5f*/
        Current = DialogueListCursor::GetCurrent(v24); /*0x52fa64*/
        v27 = (const char *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)v25 + 0xD4))( /*0x52fa7a*/
                              v25,
                              *Current,
                              Current[1]);
        Interface_ConsolePrint("Item %d: %s says '%s'", v23, v27, v29);
      }
      else
      {
        v28 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v24[2].firstItem + 0xD4))(v24[2].firstItem); /*0x52fa9a*/
        Interface_ConsolePrint("Item %d: %s has no response!", v23, v28);
      }
      ++v23; /*0x52faab*/
      if ( !conversationa ) /*0x52fab3*/
        break; /*0x52fab3*/
      v22 = conversationa; /*0x52fa43*/
    }
  }
  result = 0; /*0x52fab6*/
  do /*0x52face*/
  {
    if ( v4->firstItem ) /*0x52fac0*/
      ++result; /*0x52fac6*/
    v4 = (ConversationView *)v4->nextItemNode; /*0x52fac9*/
  }
  while ( v4 ); /*0x52face*/
  return result; /*0x52f83e*/
}
