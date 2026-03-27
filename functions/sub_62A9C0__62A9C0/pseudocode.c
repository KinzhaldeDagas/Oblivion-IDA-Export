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
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  Unk1C *v18; // ecx
  Unk1C *DialogueInfo; // ebx
  Unk1C *v20; // ecx
  BSStringT *v21; // eax
  BSStringT *v22; // edi
  UInt32 *unk220; // ebx
  unsigned int Len; // eax
  UInt32 v25; // ebx
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
  UInt32 unk258; // [esp+28h] [ebp-128h]
  float v40; // [esp+28h] [ebp-128h]
  Unk1C *v41; // [esp+28h] [ebp-128h]
  UInt32 procedureArrayIndex; // [esp+2Ch] [ebp-124h]
  float v43; // [esp+2Ch] [ebp-124h]
  float v44; // [esp+30h] [ebp-120h]
  int v45; // [esp+30h] [ebp-120h]
  unsigned int v46; // [esp+30h] [ebp-120h]
  double Distance; // [esp+30h] [ebp-120h]
  int v48; // [esp+38h] [ebp-118h] BYREF
  float v49[3]; // [esp+3Ch] [ebp-114h] BYREF
  char v50[260]; // [esp+48h] [ebp-108h] BYREF

  unk0E4 = a2->members.unk0E4;
  v38 = 0;
  unk258 = (UInt32)unk0E4;
  a2->members.unk0E4 = 0;
  if ( !unk0E4 )
  {
    unk258 = this->unk258;
    unk0E4 = (Actor *)unk258;
  }
  if ( !a3 )
  {
    if ( this->unk2B8 )
    {
LABEL_28:
      this->unk278 = a5;
      return;
    }
    if ( !a6 || !this->unk2B4 )
    {
      unk250 = this->unk250;
      if ( unk250 )
      {
        sub_6B81D0(this->unk250->unk00);
        FormHeapFree((unsigned int)unk250);
        this->unk250 = 0;
      }
      if ( this->unk21C <= 0.0 )
        v38 = 1;
      else
        this->unk21C = this->unk21C - flt_B33E9C;
      if ( unk0E4 )
      {
        v10 = this->GetCurrentPackage(this);
        if ( v10 )
        {
          procedureArrayIndex = v10->members.procedureArrayIndex;
          if ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * this->GetCurrentPackProcedure(this)) == 1 )
            sub_5E02B0(a2);
        }
        if ( !this->pathing && !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) )
        {
          if ( !v10 || (type = v10->members.type, type != 6) && type != 8 )
          {
            if ( !((unsigned __int8 (__thiscall *)(HighProcess *))this->Unk_136)(this) )
            {
              ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_120)(this, unk0E4);
              duration = a2->vtbl->super.super.GetPos(a2);
              v12 = unk0E4->vtbl->super.super.GetPos((TESObjectREFR *)unk0E4);
              sub_4121A0(v12, v49, duration);
              v43 = sub_683CB0(v49);
              *(float *)&v48 = 0.0;
              sub_683D80((int)a2, v43, (int)&v48);
              v40 = (double)iActorTurnDegree * dbl_A31C78;
              if ( sub_5E0590(a2) )
                v40 = (double)iActorKeepTurnDegree * dbl_A31C78;
              v44 = fabs(v43);
              if ( v40 >= (double)v44 )
                sub_5E05F0(a2, 0x30);
              else
                sub_685530(a2, v43, 1);
            }
          }
        }
      }
LABEL_75:
      if ( v38 )
      {
        if ( !this->unk2B8 )
        {
          v30 = (int *)this->unk220[0];
          if ( !v30 || !sub_6B7260(v30) )
          {
            v31 = this->unk250;
            if ( v31 )
            {
              sub_6B81D0(this->unk250->unk00);
              FormHeapFree((unsigned int)v31);
            }
            v32 = this->__vftable;
            this->unk250 = 0;
            this->unk258 = 0;
            ((void (__thiscall *)(HighProcess *, _DWORD))v32->StopSoundITMTorchHeldLP)(this, 0);
            this->unk278 = 0;
            this->unk228 = 0;
            sub_65DA10(TESDataHandler_g_PlayerRef);
            this->Unk_126(this);
            v33 = sub_5E6830(a2);
            v34 = v33;
            if ( v33 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 0x190))(v33) )
              {
                v35 = *(_DWORD *)(v34 + 0x58);
                if ( v35 )
                  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v35 + 0x338))(v35, 0);
              }
            }
            sub_5E05F0(a2, 0x30);
          }
        }
      }
      return;
    }
  }
  if ( this->unk2B8 )
    goto LABEL_28;
  if ( !a6 || this->unk2B4 )
  {
    ((void (__thiscall *)(HighProcess *, _DWORD))this->StopSoundITMTorchHeldLP)(this, 0);
    if ( a6 )
    {
      DialogueInfo = this->unk250;
    }
    else
    {
      v18 = this->unk250;
      v46 = (unsigned int)v18;
      if ( v18 )
      {
        sub_6B81D0(v18->unk00);
        FormHeapFree(v46);
        this->unk250 = 0;
      }
      DialogueInfo = TESTopic::CreateDialogueInfo(a3, a2, (TESObjectREFR *)unk0E4, 0, 0);
      this->unk250 = DialogueInfo;
    }
    v20 = this->unk250;
    if ( v20 )
      sub_6B7C30((int)v20);
    if ( DialogueInfo )
    {
      if ( unk0E4 )
      {
        if ( (unk0E4->members.super.super.super.flags & 0x800) == 0 )
          ((void (__thiscall *)(LowProcess *, Actor *))unk0E4->members.super.process->SetUnk218)(
            unk0E4->members.super.process,
            a2);
      }
      sub_6B7BA0(DialogueInfo);
      v21 = (BSStringT *)sub_6B7C20(DialogueInfo);
      v22 = v21;
      if ( v21 )
      {
        this->unk278 = a5;
        unk220 = this->unk220;
        Len = BSStringT_GetLen(v21);
        Actor::InitDialogue(
          a2,
          v22[2].m_data,
          (int **)this->unk220,
          (int)v22[1].m_data,
          *(_DWORD *)&v22[1].m_dataLen,
          Len,
          1,
          0,
          0,
          1);
        this->unk21C = v6;
        this->Unk_12(this, (UInt32)a2);
        if ( this->unk21C > 0.0 )
        {
          if ( this->unk278 )
            ((void (__thiscall *)(HighProcess *, Actor *))this->Unk_64)(this, a2);
          if ( byte_B13208 )
          {
            if ( v22->m_data )
            {
              if ( a4
                || (Distance = TesObjectREF_GetDistance(
                                 (TESObjectREFR *)a2,
                                 (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                                 0),
                    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36AD8),
                    *(float *)SafeFloatPointer + *(float *)SafeFloatPointer >= Distance) )
              {
                if ( sub_579400() )
                {
                  durationa = v22->m_data;
                  Name = TESObjectREFR_GetName((TESObjectREFR *)a2);
                  _sprintf(v50, "'%s' :%s", Name, durationa);
                  GameUI_QueueMessage(v50, *unk220, 0, flt_A30634);
                }
                else
                {
                  GameUI_QueueMessage(v22->m_data, *unk220, 0, flt_A30634);
                }
              }
            }
          }
          v25 = unk258;
          this->unk228 = 1;
          if ( unk258 )
            LOBYTE(TESDataHandler_g_PlayerRef->unk600) = 1;
        }
        else
        {
          v25 = unk258;
          v38 = 1;
        }
        v28 = this->GetCurrentPackage(this);
        if ( v28 )
        {
          v29 = v28->members.procedureArrayIndex;
          if ( *(_DWORD *)(*(_DWORD *)(4 * v29 + 0xB152B0) + 4 * this->GetCurrentPackProcedure(this)) == 1 )
            sub_5E02B0(a2);
        }
        if ( !this->pathing && !((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) )
        {
          if ( v25 )
          {
            ((void (__thiscall *)(HighProcess *, UInt32))this->Unk_120)(this, v25);
            ((void (__thiscall *)(HighProcess *, int))this->Unk_135)(this, 1);
          }
        }
        this->unk21C = this->unk21C - flt_B33E9C;
        if ( v25 )
          this->unk22C = flt_B36AE8;
        goto LABEL_75;
      }
    }
  }
  else
  {
    v13 = TESTopic::CreateDialogueInfo(a3, a2, (TESObjectREFR *)unk0E4, 0, 0);
    v14 = this->unk250;
    v41 = v13;
    if ( v14 )
    {
      sub_6B81D0(v14->unk00);
      FormHeapFree((unsigned int)v14);
      v13 = v41;
      this->unk250 = 0;
    }
    this->unk250 = v13;
    this->unk258 = (UInt32)unk0E4;
    if ( v13 )
    {
      if ( unk0E4 )
      {
        if ( (unk0E4->members.super.super.super.flags & 0x800) == 0 )
        {
          ((void (__thiscall *)(LowProcess *, Actor *))unk0E4->members.super.process->SetUnk218)(
            unk0E4->members.super.process,
            a2);
          v13 = v41;
        }
      }
      this->unk228 = 1;
      sub_6B7BA0(v13);
      v15 = sub_6B7C20(v41);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 0xC);
        v45 = *(_DWORD *)(v15 + 8);
        v48 = *(int *)(v15 + 0x10);
        v17 = BSStringT_GetLen((BSStringT *)v15);
        Actor::InitDialogue(a2, (char *)v48, (int **)this->unk220, v45, v16, v17, 1, 0, a6, 1);
        this->unk21C = v6;
        this->unk278 = a5;
      }
      if ( unk0E4 )
        this->unk22C = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36AE8);
    }
  }
}
