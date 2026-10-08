int __usercall UpdatePlayerHead@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  TESForm *v3; // eax
  PlayerCharacter *v4; // eax
  TESForm *ActorBaseForm; // eax
  void *AnimDataByPerspective; // eax
  PlayerCharacter *v7; // ecx
  NiNode *PlayerNode; // eax
  NiAVObjectVtbl *vtbl; // ebp
  float v11[9]; // [esp+10h] [ebp-84h] BYREF
  float v12[9]; // [esp+34h] [ebp-60h] BYREF
  IOTask v13[2]; // [esp+58h] [ebp-3Ch] BYREF
  unsigned int v14; // [esp+90h] [ebp-4h]

  v3 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c2f57*/
  sub_550240(v3->member.refID); /*0x5c2f5d*/
  v4 = reference; /*0x5c2f62*/
  MEMORY[0xB33D80] = 1; /*0x5c2f67*/
  v4->super.super.super.process->Unk_17(v4->super.super.super.process); /*0x5c2f79*/
  ((void (__thiscall *)(LowProcess *, int))reference->super.super.super.process->SetUnk16C)( /*0x5c2f8e*/
    reference->super.super.super.process,
    1);
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))reference->super.super.super.process->Unk_C5)( /*0x5c2fa1*/
    reference->super.super.super.process,
    reference);
  if ( !((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)(reference, 0) /*0x5c2fcc*/
    && !((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0) )
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x5c2fd9*/
    sub_437970(v13, (int)ActorBaseForm, 0); /*0x5c2fe5*/
    v14 = 0; /*0x5c2fee*/
    sub_435300(v13); /*0x5c2ff9*/
    (*((void (__thiscall **)(IOTask *))v13[0].vtbl + 0xA))(v13); /*0x5c3009*/
    AnimDataByPerspective = (void *)Actor_GetSkinInfoByPerspective(reference, 0); /*0x5c3013*/
    sub_4353D0((NiNode **)v13, (TESObjectREFR *)reference, AnimDataByPerspective); /*0x5c3024*/
    v14 = 0xFFFFFFFF; /*0x5c302d*/
    QueuedHead::~QueuedHead((QueuedHead *)v13); /*0x5c3038*/
  }
  v7 = reference; /*0x5c303d*/
  MEMORY[0xB33D80] = 0; /*0x5c3045*/
  PlayerNode = PlayerCharacter_GetNodeByPerspective(v7, 1); /*0x5c304c*/
  if ( PlayerNode->members.children.end ) /*0x5c3051*/
    vtbl = PlayerNode->members.children.data->vtbl; /*0x5c3065*/
  else
    vtbl = 0; /*0x5c305b*/
  qmemcpy(v11, &stru_B26AF0[0xA].unk2C, sizeof(v11)); /*0x5c3077*/
  qmemcpy(&vtbl->super.DumpAttributes, sub_4D7C50(reference, v12, v11, 0), 0x24u); /*0x5c3098*/
  return sub_434020(MEMORY[0xB33A10], a1, a2, a3, 5); /*0x5c30a7*/
}
