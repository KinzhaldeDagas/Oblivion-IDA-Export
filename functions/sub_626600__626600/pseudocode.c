// Post-load identity/cursor fixup. Modern path resolves saved actor FormIDs in package and DialogueItems only; it runs no result script and performs no topic selection.
void __thiscall DialoguePackage::InitLoadGame(DialoguePackageRuntimeView *this)
{
  TESForm *v2; // eax
  TESForm *v3; // eax
  TESForm *v4; // eax
  ConversationView *conversation; // ecx
  ConversationView *v6; // edi
  SInt16 currentItem; // bx
  SInt16 currentResponse; // bp
  ConversationView *v9; // eax
  ConversationView *v10; // eax
  DialogueItemView *v11; // ecx

  TESPackage_InitLoadGame(this); /*0x626627*/
  v2 = TESForm_LookupByFormID((UInt32)this->activeSpeaker); /*0x62663e*/
  this->activeSpeaker = (Actor *)OblivionDynamicCast( /*0x62665b*/
                                   v2,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
  v3 = TESForm_LookupByFormID((UInt32)this->speaker); /*0x626664*/
  this->speaker = (Actor *)OblivionDynamicCast( /*0x626681*/
                             v3,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v4 = TESForm_LookupByFormID((UInt32)this->target); /*0x62668a*/
  this->target = (Actor *)OblivionDynamicCast( /*0x626698*/
                            v4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x20u )// Modern save version >=0x20: call Conversation::InitLoadGame solely to resolve each DialogueItem's saved speaker FormID. /*0x6266a8*/
  {
    conversation = this->conversation; /*0x6266aa*/
    if ( conversation ) /*0x6266af*/
      Conversation::InitLoadGame(conversation); /*0x6266b1*/
  }
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x20u )// Legacy save version <0x20: regenerate the Conversation from speaker, target, and startingTopic, then restore item/response indices. Regeneration calls TESTopic::CreateConversation, so ImmediateResult INFOs and their AddTopicList effects are executed again; deferred results are not run by load. /*0x6266c0*/
  {
    v6 = this->conversation; /*0x6266c6*/
    currentItem = (SInt16)this->currentItem; /*0x6266cb*/
    currentResponse = (SInt16)this->currentResponse; /*0x6266cf*/
    if ( v6 ) /*0x6266d3*/
    {
      v9 = (ConversationView *)FormHeapAlloc(0x10u); /*0x6266db*/
      if ( v9 ) /*0x6266f1*/
        v10 = Conversation::Conversation(v9, this->speaker, (TESObjectREFR *)this->target, this->startingTopic, (int)v6);// Legacy-only conversation reconstruction. Because the constructor invokes TESTopic::CreateConversation, selection/random linkage can differ from the original old-save chain and ImmediateResult side effects repeat. /*0x626702*/
      else
        v10 = 0; /*0x626709*/
      this->conversation = v10; /*0x626717*/
      if ( currentItem == (SInt16)0xFFFF ) /*0x62671a*/
        this->currentItem = 0; /*0x626729*/
      else
        this->currentItem = Conversation::GetDialogueItemByIndex(v10, currentItem); /*0x626724*/
      v11 = this->currentItem; /*0x626730*/
      if ( !v11 || currentResponse == (SInt16)0xFFFF ) /*0x62673b*/
        this->currentResponse = 0; /*0x626748*/
      else
        this->currentResponse = DialogueItem::GetDialogueResponseByIndex(v11, currentResponse); /*0x626743*/
      DialogueListCursor::SetCurrent(this->conversation, this->currentItem);// Legacy-only: restore the regenerated Conversation's internal current-item cursor from the saved external index. /*0x626756*/
      DialogueListCursor::SetCurrent((ConversationView *)this->currentItem, (DialogueItemView *)this->currentResponse);// Legacy-only: restore currentItem's internal current-response cursor from the saved external index. /*0x626762*/
    }
  }
}
