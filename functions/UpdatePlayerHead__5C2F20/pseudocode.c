unsigned int __usercall UpdatePlayerHead@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  TESForm *v3; // eax
  PlayerCharacter *v4; // eax
  TESForm *ActorBaseForm; // eax
  void *v6; // eax
  PlayerCharacter *v7; // ecx
  NiNode *PlayerNode; // eax
  NiAVObjectVtbl *vtbl; // ebp
  float v11[9]; // [esp+10h] [ebp-84h] BYREF
  float v12[9]; // [esp+34h] [ebp-60h] BYREF
  IOTask v13[2]; // [esp+58h] [ebp-3Ch] BYREF
  unsigned int v14; // [esp+90h] [ebp-4h]

  v3 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  sub_550240(v3->member.refID);
  v4 = TESDataHandler_g_PlayerRef;
  g_bUpdatePlayerModel = 1;
  v4->super.super.super.process->Unk_17(v4->super.super.super.process);
  ((void (__thiscall *)(LowProcess *, int))TESDataHandler_g_PlayerRef->super.super.super.process->SetUnk16C)(
    TESDataHandler_g_PlayerRef->super.super.super.process,
    1);
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_C5)(
    TESDataHandler_g_PlayerRef->super.super.super.process,
    TESDataHandler_g_PlayerRef);
  if ( !((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4D)(
          TESDataHandler_g_PlayerRef,
          0)
    && !((int (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_4C)(
          TESDataHandler_g_PlayerRef,
          0) )
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
    sub_437970(v13, (int)ActorBaseForm, 0);
    v14 = 0;
    sub_435300(v13);
    (*((void (__thiscall **)(IOTask *))v13[0].vtbl + 0xA))(v13);
    v6 = (void *)sub_6600D0(TESDataHandler_g_PlayerRef, 0);
    sub_4353D0((NiNode **)v13, (TESObjectREFR *)TESDataHandler_g_PlayerRef, v6);
    v14 = 0xFFFFFFFF;
    QueuedHead::~QueuedHead((QueuedHead *)v13);
  }
  v7 = TESDataHandler_g_PlayerRef;
  g_bUpdatePlayerModel = 0;
  PlayerNode = PlayerCharacter_GetPlayerNode(v7, 1);
  if ( PlayerNode->members.children.end )
    vtbl = PlayerNode->members.children.data->vtbl;
  else
    vtbl = 0;
  qmemcpy(v11, &stru_B26AF0[0xA].unk2C, sizeof(v11));
  qmemcpy(&vtbl->super.DumpAttributes, sub_4D7C50(TESDataHandler_g_PlayerRef, v12, v11, 0), 0x24u);
  return sub_434020(ioManager, a1, a2, a3, 5);
}
