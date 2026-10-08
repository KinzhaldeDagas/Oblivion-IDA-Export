// DialoguePackage cursor/playback state machine. Speak(true) performs audible HighProcess playback; Speak(false) advances silently with no new timer. With waitingForLip clear, each false call advances one response cursor and can commit an exhausted item while selecting the next. With waitingForLip set, false calls cannot clear the flag or advance, so MiddleHigh execution stalls until HighProcess playback resumes or the package is destroyed.
void __thiscall DialoguePackage::Speak(DialoguePackageRuntimeView *this, bool startSpeech)
{                                               // waitingForLip suppresses the normal response/item cursor advance. The later code can clear this flag only inside the startSpeech=true branch; Speak(false) returns without progress while it remains set.
  double v2; // st7
  DialogueItemView *currentItem; // ecx
  ConversationView *conversation; // ecx
  DialogueItemView *Current; // eax
  DialogueItemView *v7; // ecx
  DialogueItemView *v8; // ecx
  DialogueResponse *v9; // eax
  Actor *v10; // edi
  Actor *activeSpeaker; // ecx
  DialogueResponse *v12; // ecx
  int v13; // ebx
  int v14; // ebp
  unsigned int v15; // eax
  DialogueResponse *currentResponse; // ecx
  int v17; // ebp
  int v18; // ebx
  unsigned int Len; // eax
  ActorAnimData *v20; // edi
  ActorAnimData *v21; // eax
  unsigned __int8 **IdleForActor; // eax
  UInt32 v23; // ebp
  UInt32 QueuedAnimType; // eax
  TESObjectREFR *target; // eax
  unsigned __int8 **v26; // eax
  UInt32 v27; // edi
  UInt32 v28; // eax
  DialogueListCursorView *v29; // eax
  DialogueListCursorView *v30; // eax
  DialogueListCursorView *v31; // eax
  const char **v32; // eax
  double v33; // st7
  int *SafeFloatPointer; // eax
  BSStringT v35; // [esp+28h] [ebp-1Ch] BYREF
  double v36; // [esp+30h] [ebp-14h]
  unsigned int v37; // [esp+40h] [ebp-4h]
  AnimSequenceSingle *v38; // [esp+48h] [ebp+4h]
  AnimSequenceSingle *v39; // [esp+48h] [ebp+4h]

  if ( !this->waitingForLip ) /*0x6267cb*/
  {
    currentItem = this->currentItem; /*0x6267d4*/
    if ( currentItem ) /*0x6267d9*/
    {                                           // Normal completed-response path: advance currentItem's response cursor. A modern save restores this cursor, preventing previously completed responses from being selected again.
      if ( !this->currentResponse ) /*0x626847*/
      {
LABEL_11:
        v7 = this->currentItem; /*0x62685e*/
        if ( v7 ) /*0x626863*/
          DialogueItem::RunResult(v7);          // Commit a deferred ambient INFO only when advancing past its exhausted response list; even a response-less item commits on the next Speak update. Goodbye does not terminate here, and RunForRumors does not gate the result. /*0x626865*/
        Conversation::NextItem(this->conversation);// Conversation::NextItem selects the next speaker/topic item. /*0x62686d*/
        this->currentItem = (DialogueItemView *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->conversation);// Shared cursor getter used on ConversationView; result becomes DialoguePackage.currentItem. /*0x62687a*/
        goto LABEL_14; /*0x62687a*/
      }
      DialogueItem::NextResponse(currentItem);  // One normal Speak call advances one response cursor. In MiddleHigh mode no replacement response timer is installed, so repeated process updates consume the chain at update cadence. /*0x626849*/
    }
    else
    {
      conversation = this->conversation; /*0x6267db*/
      if ( !conversation ) /*0x6267e0*/
      {
LABEL_53:
        this->speaker->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)this->speaker, 1);// No current item remains: set procedureCompleted=true on both participants. This does not itself destroy the DialoguePackage; the owning process update observes the flag and performs cleanup. /*0x626bcf*/
        this->target->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)this->target, 1); /*0x626bed*/
        return; /*0x626bed*/
      }
      Conversation::FirstItem(conversation); /*0x626807*/
      Current = (DialogueItemView *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->conversation);// Shared cursor getter (identical layout): here the function named DialogueItem::GetCurrentResponse is operating on ConversationView and returns the current DialogueItem. /*0x62680f*/
      this->currentItem = Current; /*0x626816*/
      if ( !Current ) /*0x626819*/
      {
        this->speaker->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)this->speaker, 1);// Empty/null conversation completion: mark the initiating speaker procedure completed. /*0x626831*/
        this->target->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)this->target, 1);// Empty/null conversation completion: mark the target procedure completed as well; the process handler subsequently cleans up the shared package. /*0x626840*/
        goto LABEL_10; /*0x626842*/
      }
      DialogueItem::FirstResponse(Current); /*0x62681d*/
    }
    this->currentResponse = (DialogueResponse *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->currentItem); /*0x626856*/
LABEL_10:
    if ( this->currentResponse ) /*0x626859*/
      goto LABEL_14; /*0x62685c*/
    goto LABEL_11; /*0x62685c*/
  }
LABEL_14:
  v8 = this->currentItem; /*0x62687d*/
  if ( !v8 ) /*0x626882*/
    goto LABEL_53; /*0x626882*/
  if ( this->currentResponse ) /*0x626888*/
    goto LABEL_19; /*0x626888*/
  DialogueItem::FirstResponse(v8); /*0x62688d*/
  v9 = (DialogueResponse *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->currentItem); /*0x626895*/
  this->currentResponse = v9; /*0x62689c*/
  if ( !v9 ) /*0x62689f*/
    PrintError("No responses found for conversation Topic Info (%08X).", this->currentItem->info->super.member.refID);// No-response item is diagnosed but retained. On the next Speak update its deferred result is committed and the conversation advances; a chain can therefore execute response-less INFO results without audible dialogue. /*0x6268b0*/
  if ( this->currentResponse ) /*0x6268b8*/
  {
LABEL_19:
    v10 = (Actor *)OblivionDynamicCast( /*0x6268d9*/
                     this->currentItem->speaker,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v10 ) /*0x6268e0*/
    {                                           // Only startSpeech=true enters voice/LIP initialization and establishes response timing. startSpeech=false leaves the selected response queued but silent; the next call advances it, unless waitingForLip has already frozen the state.
      if ( startSpeech ) /*0x6268eb*/
      {
        v35.m_data = 0; /*0x6268f1*/
        v35.m_dataLen = 0; /*0x6268f5*/
        v35.m_bufLen = 0; /*0x6268fa*/
        activeSpeaker = this->activeSpeaker; /*0x6268ff*/
        v37 = 0; /*0x626904*/
        if ( activeSpeaker ) /*0x626908*/
        {
          Actor::StopDialoguePlayback(activeSpeaker); /*0x62690a*/
          this->activeSpeaker = 0; /*0x62690f*/
        }
        BSStringT_Set(&v35, this->currentResponse->voicePath.m_data, 0); /*0x62691e*/
        if ( ((int (__thiscall *)(LowProcess *))v10->members.super.process->Unk_97)(v10->members.super.process) /*0x626958*/
          || ((unsigned __int8 (__thiscall *)(LowProcess *))v10->members.super.process->Unk_93)(v10->members.super.process)
          || !bBackgroundLoadLipFiles
          || ((unsigned __int8 (__thiscall *)(LowProcess *))v10->members.super.process->Unk_96)(v10->members.super.process) )
        {
          if ( (!((unsigned __int8 (__thiscall *)(LowProcess *))v10->members.super.process->Unk_93)(v10->members.super.process) /*0x6269f5*/
             || ((unsigned __int8 (__thiscall *)(LowProcess *))v10->members.super.process->Unk_96)(v10->members.super.process))
            && (((int (__thiscall *)(LowProcess *))v10->members.super.process->Unk_97)(v10->members.super.process)
             || ((unsigned __int8 (__thiscall *)(LowProcess *))v10->members.super.process->Unk_96)(v10->members.super.process)
             || !bBackgroundLoadLipFiles) )
          {
            currentResponse = this->currentResponse; /*0x626a01*/
            v17 = *(_DWORD *)&currentResponse->trdtPrefix[4]; /*0x626a04*/
            v18 = *(_DWORD *)currentResponse->trdtPrefix; /*0x626a07*/
            Len = BSStringT_GetLen(&currentResponse->displayText); /*0x626a12*/
            Actor::InitDialogue(v10, v35.m_data, (int **)&this->activeSoundHandle, v18, v17, Len, 1, 0, 0, 1);// Start audible ambient response and receive its active sound handle at DialoguePackage+0x3C. HighProcess waits SoundHandle::IsPlaying before advancing or cleaning the package. /*0x626a25*/
            this->responseTimeRemaining = v2; /*0x626a2a*/
            this->activeSpeaker = v10; /*0x626a2d*/
            ((void (__thiscall *)(LowProcess *, _DWORD))v10->members.super.process->Unk_98)( /*0x626a3d*/
              v10->members.super.process,
              0);
            this->waitingForLip = 0; /*0x626a3f*/
            ((void (__thiscall *)(LowProcess *, _DWORD))v10->members.super.process->Unk_95)( /*0x626a50*/
              v10->members.super.process,
              0);
            v20 = this->activeSpeaker->vtbl->super.super.GetAnimData(this->activeSpeaker); /*0x626a64*/
            v21 = this->target->vtbl->super.super.GetAnimData(this->target); /*0x626a6c*/
            v38 = (AnimSequenceSingle *)v21; /*0x626a70*/
            if ( v20 ) /*0x626a74*/
            {
              if ( v21 ) /*0x626a7c*/
              {
                IdleForActor = TESIdleForm_FindIdleForActor( /*0x626a90*/
                                 (TESObjectREFR *)dword_B361CC[0x3D],
                                 (TESObjectREFR *)this->activeSpeaker,
                                 (TESObjectREFR *)this->target);
                v23 = (UInt32)IdleForActor; /*0x626a95*/
                if ( IdleForActor ) /*0x626a99*/
                {
                  QueuedAnimType = TESIdleForm_GetQueuedAnimType(IdleForActor); /*0x626a9f*/
                  ActorAnimData_QueueIdle(v20, v23, (TESObjectREFR *)this->activeSpeaker, QueuedAnimType, 2); /*0x626aac*/
                  this->speaker->members.super.process->Unk_1A(this->speaker->members.super.process, 0); /*0x626abe*/
                }
                target = (TESObjectREFR *)this->target; /*0x626ac0*/
                if ( target != (TESObjectREFR *)this->activeSpeaker ) /*0x626ac8*/
                {
                  v26 = TESIdleForm_FindIdleForActor( /*0x626ad2*/
                          (TESObjectREFR *)dword_B361CC[0x3D],
                          target,
                          (TESObjectREFR *)this->activeSpeaker);
                  v27 = (UInt32)v26; /*0x626ad7*/
                  if ( v26 ) /*0x626adb*/
                  {
                    v28 = TESIdleForm_GetQueuedAnimType(v26); /*0x626ae1*/
                    ActorAnimData_QueueIdle((ActorAnimData *)v38, v27, (TESObjectREFR *)this->target, v28, 2); /*0x626af0*/
                    this->target->members.super.process->Unk_1A(this->target->members.super.process, 0); /*0x626b02*/
                  }
                }
              }
            }
            if ( this == (DialoguePackageRuntimeView *)reference->dialoguePackage || BYTE1(qword_B3BB2C[0x9E]) ) /*0x626b11*/
            {
              if ( DialogueListCursor::GetCurrent((DialogueListCursorView *)this->conversation) ) /*0x626b1d*/
              {
                v29 = (DialogueListCursorView *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->conversation); /*0x626b29*/
                if ( DialogueListCursor::GetCurrent(v29) ) /*0x626b30*/
                {
                  v30 = (DialogueListCursorView *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->conversation); /*0x626b3c*/
                  if ( *(_DWORD *)DialogueListCursor::GetCurrent(v30) ) /*0x626b48*/
                  {
                    if ( byte_B13208 ) /*0x626b4d*/
                    {
                      v31 = (DialogueListCursorView *)DialogueListCursor::GetCurrent((DialogueListCursorView *)this->conversation); /*0x626b59*/
                      v32 = (const char **)DialogueListCursor::GetCurrent(v31); /*0x626b60*/
                      GameUI_QueueMessage(*v32, (UInt32)this->activeSoundHandle, 0, kTerrainLODQuadRayDirectionZ); /*0x626b77*/
                    }
                  }
                }
              }
            }
            if ( this->responseTimeRemaining <= 0.0 ) /*0x626b89*/
            {
              v39 = (AnimSequenceSingle *)BSStringT_GetLen(&this->currentResponse->displayText); /*0x626b95*/
              v33 = (double)(int)v39; /*0x626b99*/
              if ( (int)v39 < 0 ) /*0x626b9d*/
                v33 = v33 + flt_A2FC78; /*0x626b9f*/
              v36 = v33; /*0x626baa*/
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)unk_B36AF8); /*0x626bae*/
              this->responseTimeRemaining = *(float *)SafeFloatPointer * v36; /*0x626bb9*/
            }
          }
        }
        else
        {
          v12 = this->currentResponse; /*0x62695e*/
          v13 = *(_DWORD *)&v12->trdtPrefix[4]; /*0x626961*/
          v14 = *(_DWORD *)v12->trdtPrefix; /*0x626964*/
          v15 = BSStringT_GetLen(&v12->displayText); /*0x62696f*/
          Actor::InitDialogue(v10, v35.m_data, (int **)&this->activeSoundHandle, v14, v13, v15, 1, 0, 1, 1);// 3DTheft 2026-05-17: DialoguePackage execution calls Actor::InitDialogue for the initiating/async path. /*0x626982*/
          this->responseTimeRemaining = v2; /*0x626987*/
          this->activeSpeaker = v10; /*0x62698a*/
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))v10->members.super.process->Unk_93)(v10->members.super.process) ) /*0x62699a*/
            this->waitingForLip = 1; /*0x6269a4*/
        }
        v37 = 0xFFFFFFFF; /*0x626bc0*/
        BSStringT_Clear((unsigned int *)&v35); /*0x626bc8*/
      }
    }
  }
}
