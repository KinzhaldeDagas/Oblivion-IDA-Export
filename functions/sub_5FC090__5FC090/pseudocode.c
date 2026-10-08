// ODismemberment combat decode: attack-side disarm perk attempt after damage. Requires attack animation group 0x19/0x1A, relevant skill mastery, iPerkAttackDisarmChance, and valid target equipped item.
char __userpurge Actor_AttemptAttackDisarmPerkOnHit@<al>(
        int *a1@<ecx>,
        int a2@<ebx>,
        int a3@<esi>,
        TESObjectREFR *a4,
        int a5,
        int a6)
{
  ActorAnimData *v11; // eax
  unsigned __int8 AnimGroupFromField8Value; // al
  int GroupID; // eax
  int v15; // ebp
  SInt32 BaseCalcAVi; // eax
  _BYTE *v17; // eax
  TESObjectREFRVtbl *vtbl; // edi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // edx
  TESChildCELL *v24; // eax
  int CurrentAction; // eax
  int v26; // eax
  int v30; // [esp+28h] [ebp-10h] BYREF
  int v31; // [esp+2Ch] [ebp-Ch] BYREF
  float v32[2]; // [esp+30h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]
  Actor *v34; // [esp+3Ch] [ebp+4h]

  if ( *(_BYTE *)((*(int (__fastcall **)(int *))(*a1 + 0x170))(a1) + 4) == 0x24 ) /*0x5fc0a8*/
    return 0; /*0x5fc0a8*/
  if ( !(*(int (__thiscall **)(int *))(*a1 + 0x164))(a1) ) /*0x5fc0bd*/
    return 0; /*0x5fc0bd*/
  v11 = (ActorAnimData *)(*(int (__thiscall **)(int *))(*a1 + 0x164))(a1); /*0x5fc0cf*/
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v11, 3); /*0x5fc0d3*/
  GroupID = AnimKey_GetGroupID(AnimGroupFromField8Value); /*0x5fc0d9*/
  if ( GroupID != 0x19 && GroupID != 0x1A ) /*0x5fc0e9*/
    return 0; /*0x5fc0aa*/
  v15 = sub_5E4A80(a4); /*0x5fc0f8*/
  if ( !v15 ) /*0x5fc0fc*/
    return 0; /*0x5fc0fc*/
  if ( (unsigned int)(a5 - 0xC) > 0x14 ) /*0x5fc108*/
    return 0; /*0x5fc108*/
  BaseCalcAVi = Actor_GetBaseCalcAVi(a1, a2, (int)a1, (int)a4, a5); /*0x5fc10d*/
  if ( Calc_MasteryFromSkill(BaseCalcAVi) < kSkillMastery_Journeyman ) /*0x5fc11e*/
    return 0; /*0x5fc11e*/
  if ( Game_RandomLargeInteger(0) % 0x64 > (int)MEMORY[0xB37228].value ) /*0x5fc138*/
    return 0; /*0x5fc138*/
  v17 = *(_BYTE **)(v15 + 8); /*0x5fc13a*/
  v34 = 0; /*0x5fc13f*/
  if ( v17 ) /*0x5fc147*/
  {
    if ( v17[4] == 0x21 ) /*0x5fc14d*/
    {
      v34 = *(Actor **)(v15 + 8); /*0x5fc151*/
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 0x78))(v17) /*0x5fc162*/
        || !Actor_IsWeaponOut((_DWORD **)a1) )
      {
        return 0; /*0x5fc162*/
      }
    }
  }
  vtbl = a4[1].vtbl; /*0x5fc16b*/
  if ( !vtbl ) /*0x5fc170*/
    return 0; /*0x5fc174*/
  InitializeComponent = vtbl->super.super.InitializeComponent; /*0x5fc188*/
  if ( *(_BYTE *)(*(_DWORD *)(v15 + 8) + 0x90) == 5 ) /*0x5fc18c*/
  {
    v20 = ((int (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl->GetActiveSkinInfo)(a4, a2, a3); /*0x5fc19c*/
    v21 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x47))(vtbl, v20); /*0x5fc1a3*/
  }
  else
  {
    v22 = ((int (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl->GetActiveSkinInfo)(a4, a2, a3); /*0x5fc1b5*/
    v21 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x46))(vtbl, v22); /*0x5fc1bc*/
  }
  if ( v21 ) /*0x5fc1c1*/
  {
    v23 = *(void **)(v21 + 0x8C); /*0x5fc1c9*/
    v32[1] = *(float *)(v21 + 0x88); /*0x5fc1cf*/
    retaddr = v23; /*0x5fc1d9*/
    v34 = *(Actor **)(v21 + 0x90); /*0x5fc1dd*/
    sub_711300((float *)(v21 + 0x64), (float *)&v30, (float *)&v31, v32); /*0x5fc1f3*/
  }
  v24 = (TESChildCELL *)((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a4->vtbl[1].Unk_48)( /*0x5fc21f*/
                          a4,
                          a6,
                          **(_DWORD **)v15,
                          1);
  sub_4DC000((int)a4, v24); /*0x5fc223*/
  CurrentAction = Actor_GetCurrentAction(a4); /*0x5fc22d*/
  if ( CurrentAction >= 0 /*0x5fc25d*/
    && (CurrentAction <= 5
     || CurrentAction == 6
     && v34
     && !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a4[1].vtbl->super.super.InitializeComponent + 0x3E))(
           a4[1].vtbl,
           1)
     && !Actor_UpdateBlockingState((Actor *)a4, 0)) )
  {
    Actor_SetCurrentActionWithBowVisualCleanup((Actor *)a4, kActorCurrentAction_None, 0); /*0x5fc26c*/
  }
  if ( ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].IsMobileObject)(a4) ) /*0x5fc27b*/
  {
    v26 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].IsMobileObject)(a4); /*0x5fc290*/
    sub_61DD10(v26, (int)a1); /*0x5fc294*/
  }
  return 1; /*0x5fc0ac*/
}
