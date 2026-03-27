PlayerCharacter *__usercall sub_5F0410@<eax>(TESObjectREFR *a1@<ecx>, int a2@<ebp>)
{
  TESObjectREFR *v3; // esi
  bool v4; // zf
  TESObjectREFRVtbl *vtbl; // eax
  PlayerCharacter *result; // eax
  PlayerCharacter *v7; // ebx
  TESObjectREFRVtbl *v8; // ebp
  TESObjectREFRVtbl *v9; // eax
  LowProcess *process; // ecx
  MobileObject *v11; // ecx
  _WORD *niNode; // edi
  bhkCharacterProxy *CharProxy; // eax
  int v14; // ecx
  int v15; // esi
  float *v17; // [esp+30h] [ebp-8h]
  float *AnimData; // [esp+34h] [ebp-4h]
  int retaddr; // [esp+38h] [ebp+0h]

  v3 = 0;
  v4 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) == 0;
  vtbl = a1->vtbl;
  if ( v4 )
  {
    result = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))vtbl[2].super.Unk_0E)(a1);
    if ( !result )
      return result;
    if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature )
      v3 = a1;
    result = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1);
    v7 = result;
  }
  else
  {
    result = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))vtbl[2].super.Unk_0C)(a1);
    v3 = (TESObjectREFR *)result;
    v7 = (PlayerCharacter *)a1;
  }
  if ( v3 )
  {
    if ( v7 )
    {
      v8 = v3[1].vtbl;
      retaddr = ((int (__thiscall *)(TESObjectREFR *, int))v3->vtbl->GetAnimData)(v3, a2);
      AnimData = (float *)v7->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v7);
      if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        AnimData = (float *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl[2].super.Unk_0F)(v3, 0);
      v9 = v3[1].vtbl;
      if ( v9 )
        v9->super.super.CopyFromBase = 0;
      if ( v3[1].vtbl )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD))v3[1].vtbl->super.super.InitializeComponent + 0xB1))(
          v3[1].vtbl,
          0xF,
          0);
      ((void (__thiscall *)(PlayerCharacter *, _DWORD))v7->vtbl->super.Unk_E1)(v7, 0);
      if ( v8 )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, _DWORD, int))v8->super.super.InitializeComponent
         + 0xDC))(
          v8,
          v3,
          0,
          0,
          0x7F);
      process = v7->super.super.super.process;
      if ( process )
        process->SetSleepState(process, (Actor *)v7, 0, 0, 0x7F);
      if ( v17 )
      {
        v17[3] = Vector3_InitValue_;
        v17[4] = *(&Vector3_InitValue_ + 1);
        v17[5] = dword_B3F9B0;
      }
      if ( AnimData )
      {
        AnimData[3] = Vector3_InitValue_;
        AnimData[4] = *(&Vector3_InitValue_ + 1);
        AnimData[5] = dword_B3F9B0;
      }
      sub_5E13D0(v3, 0);
      if ( v7 == TESDataHandler_g_PlayerRef )
      {
        v11 = (MobileObject *)v3;
        TESDataHandler_g_PlayerRef->unk61C = 0.0;
        niNode = v3->member.niNode;
      }
      else
      {
        niNode = v7->super.super.super.super.niNode;
        v11 = (MobileObject *)v7;
      }
      CharProxy = MobileObject_GetCharProxy(v11);
      v14 = (unsigned __int16)(dword_B2EB3C + 1);
      dword_B2EB3C = v14;
      if ( !v14 )
      {
        v14 = 0xA;
        dword_B2EB3C = 0xA;
      }
      v15 = v14;
      if ( CharProxy )
        sub_5EA350(CharProxy, v14);
      sub_88D0E0(niNode, v15, 1, 0);
      return (PlayerCharacter *)sub_65AC20(v7, 0);
    }
  }
  return result;
}
