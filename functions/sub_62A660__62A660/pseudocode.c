// RadiantAI: action code 20 from Trespass row. Creates trespass/warning dialogue info and calls Actor::InitDialogue.
void __userpurge sub_62A660(
        HighProcess *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        double a5@<st1>,
        double st7_0@<st0>,
        Actor *a6)
{
  Actor *follow; // ebp
  TESTopic *Topic; // ebx
  #9839 *DialogueItem; // ebx
  DialogueResponse *CurrentResponse; // eax
  int v12; // ebp
  int m_data; // ebx
  unsigned int Len; // eax
  void (__thiscall *Unk_2E)(BaseProcess *__hidden, UInt32); // eax
  Unk1C *unk250; // ecx
  Unk1C *v17; // ebx
  ActorAnimData *v18; // eax
  LowProcess *process; // ecx
  MiddleHighProcess_vtbl *v20; // edx
  Actor ***p_unk03C; // ebp
  int *v22; // eax
  Actor **v23; // ebx
  TESPackage *(__thiscall *GetCurrentPackage)(BaseProcess *__hidden); // eax
  int v25; // eax
  char v26; // [esp+0h] [ebp-20h]
  int v27; // [esp+4h] [ebp-1Ch]
  int v28; // [esp+10h] [ebp-10h]
  char *v29; // [esp+18h] [ebp-8h]
  #9839 *v30; // [esp+1Ch] [ebp-4h]
  Actor *retaddr; // [esp+20h] [ebp+0h]
  Actor *speaker; // [esp+24h] [ebp+4h]

  if ( PlayerCharacter::IsSleeping_(reference) ) /*0x62a66c*/
  {
    sub_5EAE70(a6, a2, a3, v28); /*0x62a679*/
  }
  else
  {
    if ( !a1->follow ) /*0x62a685*/
      a1->Unk_155(a1, (TESChildCELL *)a6); /*0x62a69b*/
    follow = a1->follow; /*0x62a69e*/
    if ( follow ) /*0x62a6a7*/
    {
      TesObjectREF_GetDistance((TESObjectREFR *)a6, (TESObjectREFR *)follow, 0); /*0x62a6c6*/
      if ( st7_0 > dbl_A6BEA0 ) /*0x62a6d6*/
      {
        ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 1); /*0x62a9a6*/
      }
      else
      {
        v27 = a2; /*0x62a6dc*/
        if ( Actor_IsNPC(a6) && follow->members.unk07C != a6 && Actor_IsNPC(follow) ) /*0x62a6f7*/
        {
          if ( a1->Unk_2F(a1) ) /*0x62a70e*/
          {
            if ( a1->dialogueResponseTimer <= 0.0 ) /*0x62a7f9*/
              unk_B3B92C = 1; /*0x62a80f*/
            else
              a1->dialogueResponseTimer = a1->dialogueResponseTimer - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62a807*/
            unk250 = a1->activeDialogueItem; /*0x62a816*/
            if ( unk250 ) /*0x62a81e*/
            {
              DialogueItem::RunResult((#9839 *)unk250); /*0x62a820*/
              v17 = a1->activeDialogueItem; /*0x62a825*/
              if ( v17 ) /*0x62a82d*/
              {
                DialogueItem::Destroy((#9839 *)a1->activeDialogueItem); /*0x62a831*/
                FormHeapFree((unsigned int)v17); /*0x62a837*/
              }
              a1->activeDialogueItem = 0; /*0x62a83f*/
            }
          }
          else
          {
            Topic = TESTopic::GetTopic(6, 3);   // Hardcoded miscellaneous topic bucket 6 index 3: stock 0000011B / Corpse. Null skips DialogueItem creation and Actor::InitDialogue. /*0x62a721*/
            if ( Topic ) /*0x62a728*/
            {
              ((void (__thiscall *)(HighProcess *, _DWORD, int))a1->StopSoundITMTorchHeldLP)(a1, 0, v27); /*0x62a73a*/
              DialogueItem = TESTopic::CreateDialogueItem(Topic, a6, (TESObjectREFR *)a1->follow, 0, 0); /*0x62a754*/
              v30 = DialogueItem; /*0x62a75c*/
              ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_120)(a1, a1->follow); /*0x62a760*/
              if ( DialogueItem ) /*0x62a764*/
              {
                DialogueItem::FirstResponse(DialogueItem); /*0x62a768*/
                CurrentResponse = DialogueListCursor::GetCurrent(DialogueItem); /*0x62a76f*/
                if ( CurrentResponse ) /*0x62a776*/
                {
                  v12 = *(_DWORD *)&CurrentResponse->trdtPrefix.m_dataLen; /*0x62a781*/
                  m_data = (int)CurrentResponse->trdtPrefix.m_data; /*0x62a784*/
                  v26 = bBackgroundLoadLipFiles; /*0x62a791*/
                  v29 = CurrentResponse->voicePath.m_data; /*0x62a798*/
                  Len = BSStringT_GetLen(&CurrentResponse->displayText); /*0x62a79c*/
                  Actor::InitDialogue(a6, v29, (int **)a1->unk220, m_data, v12, Len, 0, 0, v26, 1); /*0x62a7b2*/
                  a1->dialogueResponseTimer = st7_0; /*0x62a7b7*/
                  a1->Unk_12(a1, (UInt32)a6); /*0x62a7c5*/
                  DialogueItem = v30; /*0x62a7c7*/
                  follow = retaddr; /*0x62a7cb*/
                }
              }
              Unk_2E = a1->Unk_2E; /*0x62a7d1*/
              a1->activeDialogueItem = (Unk1C *)DialogueItem; /*0x62a7db*/
              a1->dialogueActive = 1;           // Corpse/reaction dialogue sets HighProcess.dialogueActive=1 after assigning activeDialogueItem; completion clears both fields. /*0x62a7e1*/
              Unk_2E(a1, 1); /*0x62a7e8*/
            }
          }
          if ( unk_B3B92C ) /*0x62a849*/
          {
            a1->activeDialogueItem = 0; /*0x62a852*/
            a1->dialogueActive = 0; /*0x62a85c*/
          }
        }
        else if ( !a1->Unk_2F(a1) ) /*0x62a86f*/
        {
          a1->Unk_12(a1, (UInt32)a6); /*0x62a87d*/
          a1->Unk_2E(a1, 1); /*0x62a88b*/
        }
        v18 = a6->vtbl->super.super.GetAnimData(a6); /*0x62a897*/
        if ( v18 ) /*0x62a89b*/
        {
          if ( ActorAnimData_IsIdleInactive(v18) ) /*0x62a8a3*/
          {
            process = follow->members.super.process; /*0x62a8b0*/
            if ( process ) /*0x62a8b5*/
              ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_80)(process, 0); /*0x62a8c1*/
            follow->members.unk080[1] = *(UInt32 *)GameSetting_GetSafeFloatPointer((int *)flt_B36CC0); /*0x62a8cf*/
            ((void (__thiscall *)(HighProcess *, int))a1->Unk_126)(a1, v27); /*0x62a8df*/
            v20 = a1->__vftable; /*0x62a8e5*/
            p_unk03C = (Actor ***)&a1->unk03C; /*0x62a8e7*/
            if ( a1->unk03C ) /*0x62a8e1*/
            {
              if ( !((int (__thiscall *)(HighProcess *, _DWORD))v20->GetUnk220Element)(a1, 0) /*0x62a910*/
                || (v22 = (int *)((int (__thiscall *)(HighProcess *, _DWORD))a1->GetUnk220Element)(a1, 0),
                    !SoundHandle::IsPlaying(v22)) )
              {
                v23 = *p_unk03C; /*0x62a919*/
                speaker = **p_unk03C; /*0x62a91e*/
                BSSimpleList_PopHeadWithoutPayloadFree(&a1->unk03C); /*0x62a924*/
                FormHeapFree((unsigned int)v23); /*0x62a92a*/
                a1->Unk_2E(a1, 0); /*0x62a93e*/
                ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))a1->Unk_61)(a1, a6, 0xFFFFFFFF); /*0x62a94d*/
                GetCurrentPackage = a1->GetCurrentPackage; /*0x62a955*/
                a1->follow = speaker; /*0x62a95d*/
                v25 = (int)GetCurrentPackage(a1); /*0x62a960*/
                TESPackage_LocationData_SetReference(*(_DWORD **)(v25 + 0x24), (int)a1->follow); /*0x62a969*/
                BSSimpleList_PushFront(&a1->unk0A8, (int)speaker); /*0x62a975*/
              }
            }
            else
            {
              v20->Unk_61(a1, (UInt32)a6); /*0x62a98d*/
            }
          }
        }
      }
    }
    else
    {
      ((void (__usercall *)(HighProcess *@<ecx>, Actor *, int, double@<st0>, double@<st1>))a1->Unk_61)( /*0x62a6b6*/
        a1,
        a6,
        1,
        st7_0,
        a5);
    }
  }
}
