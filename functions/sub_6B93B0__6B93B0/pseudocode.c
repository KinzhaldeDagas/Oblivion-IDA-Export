// OFE player Greeting adapter sites: 59EA74 wraps Initialize to distinguish forcedGreeting != null (must bypass replacement); 6B9419 matching; 6B942B owner quest; 6B9457 MenuTopic constructor. Replacement source topic must accompany selected INFO through owner and response construction. No suppression/no-candidate alteration is needed: failed replacement retains stock native fallback.
bool __thiscall MenuTopicManager::Initialize(
        MenuTopicManagerView *this,
        TESObjectREFR *speaker,
        TESTopic *forcedGreeting)
{
  TESTopic *Topic; // edi
  bool v5; // zf
  OblivionTopicInfo *MatchingInfo; // eax
  OblivionTopicInfo *v7; // ebp
  TESQuest *OwnerQuest; // ebx
  UnkBohDialogueTopicBoh *v9; // eax
  MenuTopicView *greetingMenuTopic; // edi
  void *greetingInfo; // ebp
  tListTopic *choiceSource; // ebp

  this->speaker = 0; /*0x6b93d8*/
  MenuTopicManager::ClearData(this, 1); /*0x6b93df*/
  Topic = forcedGreeting; /*0x6b93e4*/
  v5 = forcedGreeting == 0; /*0x6b93e8*/
  this->speaker = speaker; /*0x6b93ee*/
  if ( v5 ) /*0x6b93f1*/
  {
    Topic = TESTopic::GetTopic((DialogueType)Topic, (int)Topic);// Dialog menu initialization requests Topic bucket index 0: fixed FormID 000000C8 GREETING. /*0x6b93fa*/
    if ( !Topic ) /*0x6b9401*/
      goto LABEL_13;                            // Null GREETING selects the nominal known-topic source later, but no seed MenuTopic was created. FillTopicList's count>=1 guard therefore leaves the manager empty; the native runtime assumes stock GREETING exists. /*0x6b9401*/
  }
  MatchingInfo = TESTopic::GetMatchingInfo(Topic, (bool *)&speaker, (Actor *)this->speaker, (TESObjectREFR *)reference);// GREETING selection passes a scratch pointer over the now-unused stack copy of the speaker argument. If no normal match exists, SelectInfoForSpeaker may return the last INFO rejected only by GetDisposition >/>= and set this scratch flag. /*0x6b9419*/
  v7 = MatchingInfo; /*0x6b941e*/
  if ( !MatchingInfo ) /*0x6b9422*/
    goto LABEL_13;                              // No matching GREETING INFO has the same consequence as a null GREETING: no seed is pushed, so the later known-topic fallback cannot populate the empty manager. /*0x6b9422*/
  OwnerQuest = TESTopic::GetOwnerQuest(Topic, MatchingInfo);// GREETING explicitly disables InfoRefusal substitution. Therefore a low-disposition fallback INFO returned at 6B9419 is used as the greeting itself; ordinary TOPIC choices instead pass the fallback flag into MenuTopic and substitute FormID 118 when appropriate. /*0x6b9432*/
  v9 = (UnkBohDialogueTopicBoh *)FormHeapAlloc(0x28u); /*0x6b9434*/
  forcedGreeting = (TESTopic *)v9; /*0x6b943c*/
  greetingMenuTopic = v9
                    ? MenuTopic::MenuTopic((MenuTopicView *)v9, OwnerQuest, Topic, v7, (Actor *)this->speaker, 0)
                    : 0;
  BSSimpleList_PushBack(&this->firstTopic, (int)greetingMenuTopic); /*0x6b946e*/
  if ( !greetingMenuTopic ) /*0x6b9475*/
    goto LABEL_13; /*0x6b9475*/
  greetingInfo = greetingMenuTopic->info; /*0x6b9477*/
  if ( !greetingInfo ) /*0x6b947c*/
    goto LABEL_13; /*0x6b947c*/
  if ( (*((_BYTE *)greetingInfo + 0x25) & 1) != 0 )// Goodbye GREETING is pre-committed, not skipped: AddTopicList and RunResult execute now, before speech, and Initialize returns closePending=true. DialogMenu temporarily masks that close flag while building choices, restores the head cursor, and still plays the GREETING response chain. /*0x6b9482*/
  {
    TESTopicInfo::AddTopicList(greetingMenuTopic->info);// Pre-speech Goodbye GREETING ordering is AddTopicList first, then RunResult. If its response chain completes normally, LoadNextTopicList reaches AddTopicList again before observing Goodbye; known-topic duplicate suppression normally makes that second acquisition idempotent. /*0x6b9486*/
    TESTopicInfo::RunResult((OblivionTopicInfo *)greetingInfo, this->speaker);// Run the Goodbye GREETING result immediately on the dialogue speaker, before any GREETING response is played. This early commit is why the later close path does not need the clicked-Goodbye pending-INFO slot. /*0x6b9491*/
    return 1;                                   // Return closePending=true; this is not an immediate no-speech close. DialogMenu::InitializeTopics masks the flag for its initial LoadTopicsList call, then the caller starts the head GREETING response and closes after response exhaustion. /*0x6b9498*/
  }
  if ( greetingMenuTopic->hasLinkedTopics )     // GREETING linkedTo entries become the initial TOPIC choice list; without links the source is PlayerCharacter's known-topic list at +0x5E4. /*0x6b949e*/
    choiceSource = (tListTopic *)(*((_DWORD *)greetingInfo + 0xC) + 8); /*0x6b94a7*/
  else
LABEL_13:
    choiceSource = (tListTopic *)&reference->knownTopicFirst;// Nominal fallback source is PlayerCharacter.knownTopics. It is effective only when firstTopic already has a seed; after a null/unmatched greeting, FillTopicList immediately returns. /*0x6b94b2*/
  MenuTopicManager::FillTopicList(this, choiceSource); /*0x6b94bb*/
  this->currentTopicNode = (MenuTopicNode *)&this->firstTopic; /*0x6b94c3*/
  return 0; /*0x6b94c7*/
}
