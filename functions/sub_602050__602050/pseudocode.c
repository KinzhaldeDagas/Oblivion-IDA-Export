void __userpurge sub_602050(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st2>, TESObjectREFR a5)
{
  TESObjectREFRVtbl *vtbl; // esi
  char *niNode; // edi
  ActorAnimData *AnimData; // ebx
  void *v9; // eax
  CHAR *FormModelPAth; // eax
  int v11; // esi
  TESObjectREFR *v12; // edi
  int v13; // ebx
  NiNode *PlayerNode; // eax
  int vtbl_high; // esi
  NiNode *v16; // eax
  MobileObject *v17; // ecx
  NiNode *v18; // ebx
  bhkCharacterProxy *CharProxy; // eax
  void (__thiscall *Unk_0F)(TESForm *); // [esp+54h] [ebp-30h]
  int v23; // [esp+58h] [ebp-2Ch]
  float *v24; // [esp+5Ch] [ebp-28h]
  float v25; // [esp+64h] [ebp-20h]
  float v26; // [esp+64h] [ebp-20h]
  float v27[7]; // [esp+68h] [ebp-1Ch] BYREF

  vtbl = a5.vtbl;
  if ( a5.vtbl )
  {
    niNode = (char *)this->members.super.super.niNode;
    Unk_0F = a5.vtbl->super.Unk_0F;
    v23 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a5.vtbl->super.super.InitializeComponent + 0x59))(a5.vtbl);
    AnimData = this->vtbl->super.super.GetAnimData(this);
    if ( this == (Actor *)TESDataHandler_g_PlayerRef )
    {
      niNode = (char *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
      AnimData = (ActorAnimData *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
    }
    if ( Unk_0F )
    {
      if ( niNode )
      {
        if ( (*(int (__stdcall **)(const char *))(*(_DWORD *)Unk_0F + 0x58))("ActorParent") )
        {
          v25 = 1.0 / ((double (__thiscall *)(Actor *, int, int))this->vtbl->super.super.GetScale)(this, a3, a2);
          v26 = fabs(v25);
          v24[0x18] = v26;
          ((void (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)(
            this->members.super.process,
            0x400,
            0);
          sub_65AC20(this, 1);
          if ( this->members.super.process )
            ((void (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)(
              this->members.super.process,
              0x30,
              0);
          ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->super.Unk_7A)(this, 0.0);
          qmemcpy(niNode + 0x30, sub_4D7AF0((float *)this, v27), 0x24u);
          *(float *)&AnimData->unk0C = Vector3_InitValue_;
          AnimData->unk10 = *(UInt32 *)(&Vector3_InitValue_ + 1);
          *(float *)&AnimData->unk14 = dword_B3F9B0;
          sub_470FC0(AnimData, 0, 0.0);
          AnimData->unkC4 = 1;
          v11 = (*(int (**)(void))(*(_DWORD *)v24 + 8))();
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 0x84))(v11, v23, 1);
          v12 = (TESObjectREFR *)a5.vtbl;
          *(float *)(v23 + 0x94) = AnimData->unk94;
          sub_5E13D0(v12, 1);
          this->members.super.process->SetSleepState(this->members.super.process, this, 4, 0, 0x7F);
          if ( this == (Actor *)TESDataHandler_g_PlayerRef )
          {
            v13 = *(_DWORD *)v11;
            PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
            (*(void (__thiscall **)(int, NiNode *, int))(v13 + 0x84))(v11, PlayerNode, 1);
            vtbl_high = HIWORD(sub_65ABE0(TESDataHandler_g_PlayerRef, &a5)->vtbl);
            v16 = v12->vtbl->GetNiNode(v12);
            v17 = (MobileObject *)v12;
          }
          else
          {
            vtbl_high = HIWORD(sub_65ABE0(v12, &a5)->vtbl);
            v16 = this->vtbl->super.super.GetNiNode(this);
            v17 = (MobileObject *)this;
          }
          v18 = v16;
          CharProxy = MobileObject_GetCharProxy(v17);
          if ( CharProxy )
          {
            if ( v18 )
            {
              sub_5EA350(CharProxy, vtbl_high);
              sub_88D0E0(v18, vtbl_high, 1, 0);
            }
          }
          sub_470FC0((_DWORD *)v23, 5, 0.0);
          *(_BYTE *)(v23 + 0xC4) = 1;
          if ( !sub_45A500(SaveLoad_CurrentSavegame) )
            Actor_ProcessAction((Actor *)v12, a4, 1.0, 1.0, 1.0, 1.0);
        }
        else
        {
          v9 = (void *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x5C))(vtbl);
          FormModelPAth = GetFormModelPAth(v9);
          PrintError("Missing 'ActorParent' node for horse '%s'.", FormModelPAth);
        }
      }
    }
  }
}
