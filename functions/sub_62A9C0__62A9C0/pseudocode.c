// 3DTheft decode 2026-05-18: HighProcess vtable +0x1A4 SayTopic implementation. Uses Actor+0xE4 or process+0x258 as dialogue target, creates TESTopic dialogue info, calls Actor::InitDialogue, sets dialogue timer/state fields (0x21C/0x228/0x278/0x22C), and may turn/target actor; it does not call Actor_AddPackage or EvaluatePackage.
void __thiscall sub_62A9C0(HighProcess *this, Actor *a2, TESTopic *a3, bool a4, UInt8 a5, char a6)
{
  double v6; // st7
  Actor *unk0E4; // edi
  Unk1C *unk250; // ebx
  TESPackage *v10; // ebx
  UInt8 type; // bl
  float *v12; // eax
  Unk1C *v13; // eax
  Unk1C *v14; // ebx
  void *v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  Unk1C *v18; // ecx
  Unk1C *DialogueItem; // ebx
  Unk1C *v20; // ecx
  BSStringT *Current; // eax
  BSStringT *v22; // edi
  UInt32 *unk220; // ebx
  unsigned int Len; // eax
  DialogueListCursorView *v25; // ebx
  int *SafeFloatPointer; // eax
  char *Name; // eax
  TESPackage *v28; // eax
  UInt32 v29; // edi
  int *v30; // ecx
  Unk1C *v31; // edi
  MiddleHighProcess_vtbl *v32; // edx
  int v33; // eax
  int v34; // esi
  int v35; // esi
  float *duration; // [esp+10h] [ebp-140h]
  char *durationa; // [esp+10h] [ebp-140h]
  char v38; // [esp+27h] [ebp-129h]
  DialogueListCursorView *unk258; // [esp+28h] [ebp-128h]
  float v40; // [esp+28h] [ebp-128h]
  DialogueListCursorView *v41; // [esp+28h] [ebp-128h]
  UInt32 procedureArrayIndex; // [esp+2Ch] [ebp-124h]
  float v43; // [esp+2Ch] [ebp-124h]
  float v44; // [esp+30h] [ebp-120h]
  int v45; // [esp+30h] [ebp-120h]
  unsigned int v46; // [esp+30h] [ebp-120h]
  double Distance; // [esp+30h] [ebp-120h]
  int v48; // [esp+38h] [ebp-118h] BYREF
  float v49[3]; // [esp+3Ch] [ebp-114h] BYREF
  char v50[260]; // [esp+48h] [ebp-108h] BYREF

  unk0E4 = a2->members.unk0E4; /*0x62a9e6*/
  v38 = 0; /*0x62a9f0*/
  unk258 = (DialogueListCursorView *)unk0E4; /*0x62a9f5*/
  a2->members.unk0E4 = 0; /*0x62a9f9*/
  if ( !unk0E4 ) /*0x62aa03*/
  {
    unk258 = (DialogueListCursorView *)this->unk258; /*0x62aa0b*/
    unk0E4 = (Actor *)unk258; /*0x62aa0f*/
  }
  if ( !a3 ) /*0x62aa13*/
  {
    if ( this->unk2B8 ) /*0x62aa19*/
    {
LABEL_28:
      this->unk278 = a5; /*0x62abef*/
      return; /*0x62abfc*/
    }
    if ( !a6 || !this->unk2B4 ) /*0x62aa2e*/
    {
      unk250 = this->activeDialogueItem; /*0x62aa3a*/
      if ( unk250 ) /*0x62aa42*/
      {
        DialogueItem::Destroy((DialogueItemView *)this->activeDialogueItem); /*0x62aa46*/
        FormHeapFree((unsigned int)unk250); /*0x62aa4c*/
        this->activeDialogueItem = 0; /*0x62aa54*/
      }
      if ( this->dialogueResponseTimer <= 0.0 ) /*0x62aa6b*/
        v38 = 1; /*0x62aa81*/
      else
        this->dialogueResponseTimer = this->dialogueResponseTimer - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62aa79*/
      if ( unk0E4 ) /*0x62aa88*/
      {
        v10 = this->GetCurrentPackage(this); /*0x62aa9a*/
        if ( v10 ) /*0x62aa9e*/
        {
          procedureArrayIndex = v10->members.procedureArrayIndex; /*0x62aaab*/
          if ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * this->GetCurrentPackProcedure(this)) == 1 )// 3DTheft decode: dialogue update resolves the active procedure by indexing ProcedureRows[package->procedureArrayIndex][process->GetCurrentPackProcedure()]. GetCurrentPackProcedure is a row slot. /*0x62aac2*/
            sub_5E02B0(a2); /*0x62aac6*/
        }
        if ( !this->pathing && !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x62aadf*/
        {
          if ( !v10 || (type = v10->members.type, type != 6) && type != 8 ) /*0x62aafc*/
          {
            if ( !((unsigned __int8 (__thiscall *)(HighProcess *))this->Unk_136)(this) ) /*0x62ab0c*/
            {
              ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_120)(this, unk0E4); /*0x62ab21*/
              duration = a2->vtbl->super.super.GetPos(a2); /*0x62ab32*/
              v12 = unk0E4->vtbl->super.super.GetPos((TESObjectREFR *)unk0E4); /*0x62ab40*/
              sub_4121A0(v12, v49, duration); /*0x62ab44*/
              v43 = Vector3_CalculateHeadingRadiansXY(v49); /*0x62ab53*/
              *(float *)&v48 = 0.0; /*0x62ab60*/
              sub_683D80((int)a2, v43, (float *)&v48); /*0x62ab6e*/
              v40 = (double)MEMORY[0xB36C10] * dbl_A31C78; /*0x62ab88*/
              if ( sub_5E0590(a2) ) /*0x62ab8c*/
                v40 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x62aba1*/
              v44 = fabs(v43); /*0x62abab*/
              if ( v40 >= (double)v44 ) /*0x62abbe*/
                sub_5E05F0(a2, 0x30); /*0x62abdc*/
              else
                sub_685530(a2, v43, 1); /*0x62abcb*/
            }
          }
        }
      }
LABEL_75:
      if ( v38 ) /*0x62af8a*/
      {
        if ( !this->unk2B8 ) /*0x62af90*/
        {
          v30 = (int *)this->unk220[0]; /*0x62af9d*/
          if ( !v30 || !SoundHandle::IsPlaying(v30) ) /*0x62afa7*/
          {
            v31 = this->activeDialogueItem; /*0x62afb4*/
            if ( v31 ) /*0x62afbc*/
            {
              DialogueItem::Destroy((DialogueItemView *)this->activeDialogueItem); /*0x62afc0*/
              FormHeapFree((unsigned int)v31); /*0x62afc6*/
            }
            v32 = this->__vftable; /*0x62afce*/
            this->activeDialogueItem = 0; /*0x62afd2*/
            this->unk258 = 0; /*0x62afd8*/
            ((void (__thiscall *)(HighProcess *, _DWORD))v32->StopSoundITMTorchHeldLP)(this, 0); /*0x62afe7*/
            this->unk278 = 0; /*0x62afe9*/
            this->dialogueActive = 0; /*0x62aff0*/
            sub_65DA10(reference); /*0x62affd*/
            this->Unk_126(this); /*0x62b00c*/
            v33 = sub_5E6830(a2); /*0x62b010*/
            v34 = v33; /*0x62b015*/
            if ( v33 ) /*0x62b019*/
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 0x190))(v33) ) /*0x62b025*/
              {
                v35 = *(_DWORD *)(v34 + 0x58); /*0x62b02b*/
                if ( v35 ) /*0x62b030*/
                  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v35 + 0x338))(v35, 0); /*0x62b03e*/
              }
            }
            sub_5E05F0(a2, 0x30); /*0x62b044*/
          }
        }
      }
      return; /*0x62b044*/
    }
  }
  if ( this->unk2B8 ) /*0x62abe6*/
    goto LABEL_28; /*0x62abed*/
  if ( !a6 || this->unk2B4 ) /*0x62ac0f*/
  {
    ((void (__thiscall *)(HighProcess *, _DWORD))this->StopSoundITMTorchHeldLP)(this, 0); /*0x62ad21*/
    if ( a6 ) /*0x62ad2b*/
    {
      DialogueItem = this->activeDialogueItem; /*0x62ad6e*/
    }
    else
    {
      v18 = this->activeDialogueItem; /*0x62ad2d*/
      v46 = (unsigned int)v18; /*0x62ad35*/
      if ( v18 ) /*0x62ad39*/
      {
        DialogueItem::Destroy((DialogueItemView *)v18); /*0x62ad3b*/
        FormHeapFree(v46); /*0x62ad45*/
        this->activeDialogueItem = 0; /*0x62ad4d*/
      }
      DialogueItem = (Unk1C *)TESTopic::CreateDialogueItem(a3, a2, (TESObjectREFR *)unk0E4, 0, 0); /*0x62ad64*/
      this->activeDialogueItem = DialogueItem; /*0x62ad66*/
    }
    v20 = this->activeDialogueItem; /*0x62ad74*/
    if ( v20 ) /*0x62ad7c*/
      DialogueItem::RunResult((DialogueItemView *)v20); /*0x62ad7e*/
    if ( DialogueItem ) /*0x62ad85*/
    {
      if ( unk0E4 ) /*0x62ad8d*/
      {
        if ( (unk0E4->members.super.super.super.flags & 0x800) == 0 ) /*0x62ad98*/
          ((void (__thiscall *)(LowProcess *, Actor *))unk0E4->members.super.process->SetUnk218)( /*0x62ada8*/
            unk0E4->members.super.process,
            a2);
      }
      DialogueItem::FirstResponse((DialogueItemView *)DialogueItem); /*0x62adac*/
      Current = (BSStringT *)DialogueListCursor::GetCurrent((DialogueListCursorView *)DialogueItem); /*0x62adb3*/
      v22 = Current; /*0x62adb8*/
      if ( Current ) /*0x62adbc*/
      {
        this->unk278 = a5; /*0x62adcf*/
        unk220 = this->unk220; /*0x62add9*/
        Len = BSStringT_GetLen(Current); /*0x62addf*/
        Actor::InitDialogue( /*0x62adf4*/
          a2,
          v22[2].m_data,
          (int **)this->unk220,
          (int)v22[1].m_data,
          *(_DWORD *)&v22[1].m_dataLen,
          Len,
          1,
          0,
          0,
          1);                                   // 3DTheft decode 2026-05-18: SayTopic response path calls Actor::InitDialogue with selected response text/info and process unk220, then records dialogue state/timer.
        this->dialogueResponseTimer = v6; /*0x62adf9*/
        this->Unk_12(this, (UInt32)a2); /*0x62ae07*/
        if ( this->dialogueResponseTimer > 0.0 ) /*0x62ae16*/
        {
          if ( this->unk278 ) /*0x62ae26*/
            ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, a2); /*0x62ae3a*/
          if ( byte_B13208 ) /*0x62ae3c*/
          {
            if ( v22->m_data ) /*0x62ae49*/
            {
              if ( a4 /*0x62ae87*/
                || (Distance = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)reference, 0),
                    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)unk_B36AD8),
                    *(float *)SafeFloatPointer + *(float *)SafeFloatPointer >= Distance) )
              {
                if ( sub_579400() ) /*0x62ae89*/
                {
                  durationa = v22->m_data; /*0x62ae94*/
                  Name = TESObjectREFR_GetName((TESObjectREFR *)a2); /*0x62ae97*/
                  _sprintf(v50, "'%s' :%s", Name, durationa); /*0x62aea7*/
                  GameUI_QueueMessage(v50, *unk220, 0, kTerrainLODQuadRayDirectionZ); /*0x62aec3*/
                }
                else
                {
                  GameUI_QueueMessage(v22->m_data, *unk220, 0, kTerrainLODQuadRayDirectionZ); /*0x62aed7*/
                }
              }
            }
          }
          v25 = unk258; /*0x62aedf*/
          this->dialogueActive = 1; /*0x62aee5*/
          if ( unk258 ) /*0x62aeec*/
            LOBYTE(reference->unk600) = 1; /*0x62aef4*/
        }
        else
        {
          v25 = unk258; /*0x62ae18*/
          v38 = 1; /*0x62ae1c*/
        }
        v28 = this->GetCurrentPackage(this); /*0x62af05*/
        if ( v28 ) /*0x62af09*/
        {
          v29 = v28->members.procedureArrayIndex; /*0x62af0d*/
          if ( *(_DWORD *)(*(_DWORD *)(4 * v29 + 0xB152B0) + 4 * this->GetCurrentPackProcedure(this)) == 1 ) /*0x62af25*/
            sub_5E02B0(a2); /*0x62af29*/
        }
        if ( !this->pathing && !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) ) /*0x62af3e*/
        {                                       // 3DTheft decode 2026-05-18: after SayTopic dialogue setup, non-null target leads to process target vfunc +0x484 and vfunc +0x54C set; this is target/facing dialogue state, not Follow path setup.
          if ( v25 ) /*0x62af46*/
          {
            ((void (__thiscall *)(HighProcess *, DialogueListCursorView *))this->Unk_120)(this, v25); /*0x62af53*/
            ((void (__thiscall *)(HighProcess *, int))this->Unk_135)(this, 1); /*0x62af61*/
          }
        }
        this->dialogueResponseTimer = this->dialogueResponseTimer - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62af71*/
        if ( v25 ) /*0x62af77*/
          this->unk22C = unk_B36AE8[0]; /*0x62af7f*/
        goto LABEL_75; /*0x62af7f*/
      }
    }
  }
  else
  {
    v13 = (Unk1C *)TESTopic::CreateDialogueItem(a3, a2, (TESObjectREFR *)unk0E4, 0, 0); /*0x62ac24*/
    v14 = this->activeDialogueItem; /*0x62ac29*/
    v41 = (DialogueListCursorView *)v13; /*0x62ac31*/
    if ( v14 ) /*0x62ac35*/
    {
      DialogueItem::Destroy((DialogueItemView *)v14); /*0x62ac39*/
      FormHeapFree((unsigned int)v14); /*0x62ac3f*/
      v13 = (Unk1C *)v41; /*0x62ac44*/
      this->activeDialogueItem = 0; /*0x62ac4b*/
    }
    this->activeDialogueItem = v13; /*0x62ac57*/
    this->unk258 = (UInt32)unk0E4; /*0x62ac5d*/
    if ( v13 ) /*0x62ac63*/
    {
      if ( unk0E4 ) /*0x62ac6b*/
      {
        if ( (unk0E4->members.super.super.super.flags & 0x800) == 0 ) /*0x62ac76*/
        {
          ((void (__thiscall *)(LowProcess *, Actor *))unk0E4->members.super.process->SetUnk218)( /*0x62ac84*/
            unk0E4->members.super.process,
            a2);
          v13 = (Unk1C *)v41; /*0x62ac86*/
        }
      }
      this->dialogueActive = 1; /*0x62ac8c*/
      DialogueItem::FirstResponse((DialogueItemView *)v13); /*0x62ac93*/
      v15 = DialogueListCursor::GetCurrent(v41); /*0x62ac9c*/
      if ( v15 ) /*0x62aca3*/
      {
        v16 = *((_DWORD *)v15 + 3); /*0x62acab*/
        v45 = *((_DWORD *)v15 + 2); /*0x62acae*/
        v48 = *((int *)v15 + 4); /*0x62acc2*/
        v17 = BSStringT_GetLen((BSStringT *)v15); /*0x62acc6*/
        Actor::InitDialogue(a2, (char *)v48, (int **)this->unk220, v45, v16, v17, 1, 0, a6, 1); /*0x62ace0*/
        this->dialogueResponseTimer = v6; /*0x62ace5*/
        this->unk278 = a5; /*0x62acf2*/
      }
      if ( unk0E4 ) /*0x62acfa*/
        this->unk22C = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36AE8); /*0x62ad0c*/
    }
  }
}
