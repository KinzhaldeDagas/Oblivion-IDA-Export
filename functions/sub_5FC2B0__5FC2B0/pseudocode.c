// ODismemberment combat decode: block-side disarm perk attempt. Uses block/weapon skill mastery and iPerkBlockDisarmChance to make the blocker disarm the attacker.
char __userpurge Actor_AttemptBlockDisarmPerkOnHit@<al>(int *a1@<ecx>, int a2@<edi>, TESObjectREFR *a3)
{
  int v8; // ebx
  int v9; // ecx
  SInt32 BaseCalcAVi; // eax
  int v11; // ecx
  SInt32 v12; // eax
  _BYTE *v13; // eax
  int v14; // edi
  TESChildCELL *v15; // eax
  int CurrentAction; // eax
  int v17; // eax

  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 0x170))(a1) + 4) == 0x24 ) /*0x5fc2c2*/
    return 0; /*0x5fc2c7*/
  v8 = sub_5E4A80(a3); /*0x5fc2d7*/
  if ( !v8 ) /*0x5fc2db*/
    return 0; /*0x5fc2db*/
  v9 = a1[0x16]; /*0x5fc2dd*/
  if ( v9 /*0x5fc301*/
    && ((*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1)
     || (*(int (__thiscall **)(int, int))(*(_DWORD *)a1[0x16] + 0xF8))(a1[0x16], 1)) )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a1, v8, a2, (int)a3, 0xF); /*0x5fc30b*/
    if ( Calc_MasteryFromSkill(BaseCalcAVi) < kSkillMastery_Master ) /*0x5fc31c*/
      return 0; /*0x5fc31c*/
    v11 = a1[0x16]; /*0x5fc31e*/
    if ( !v11 || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0xF8))(v11, 1) ) /*0x5fc32f*/
      return 0; /*0x5fc333*/
  }
  else
  {
    v12 = Actor_GetBaseCalcAVi(a1, v8, a2, (int)a3, 0x11); /*0x5fc341*/
    if ( Calc_MasteryFromSkill(v12) < kSkillMastery_Master ) /*0x5fc352*/
      return 0; /*0x5fc33a*/
  }
  if ( Game_RandomLargeInteger(0) % 0x64 > (int)MEMORY[0xB37230].value ) /*0x5fc36c*/
    return 0; /*0x5fc36c*/
  v13 = *(_BYTE **)(v8 + 8); /*0x5fc36e*/
  v14 = 0; /*0x5fc372*/
  if ( v13 ) /*0x5fc376*/
  {
    if ( v13[4] == 0x21 ) /*0x5fc37c*/
    {
      v14 = *(_DWORD *)(v8 + 8); /*0x5fc37e*/
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v13 + 0x78))(v13) /*0x5fc38f*/
        || !Actor_IsWeaponOut((_DWORD **)a1) )
      {
        return 0; /*0x5fc39b*/
      }
    }
  }
  v15 = (TESChildCELL *)((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int, _DWORD, _DWORD))a3->vtbl[1].Unk_48)( /*0x5fc3b7*/
                          a3,
                          v14,
                          **(_DWORD **)v8,
                          1,
                          0,
                          0);
  sub_4DC000((int)a3, v15); /*0x5fc3bb*/
  CurrentAction = Actor_GetCurrentAction(a3); /*0x5fc3c5*/
  if ( CurrentAction >= 0 /*0x5fc3f2*/
    && (CurrentAction <= 5
     || CurrentAction == 6
     && v14
     && !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a3[1].vtbl->super.super.InitializeComponent + 0x3E))(
           a3[1].vtbl,
           1)
     && !Actor_UpdateBlockingState((Actor *)a3, 0)) )
  {
    Actor_SetCurrentActionWithBowVisualCleanup((Actor *)a3, kActorCurrentAction_None, 0); /*0x5fc401*/
  }
  if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) ) /*0x5fc410*/
  {
    v17 = ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3); /*0x5fc421*/
    sub_61DD10(v17, (int)a1); /*0x5fc425*/
  }
  return 1; /*0x5fc2c6*/
}
