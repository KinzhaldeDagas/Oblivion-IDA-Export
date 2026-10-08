// ODismemberment combat decode: blocked-hit handler. Target block item/fatigue handling; console prints block percent; damages shield/weapon and may trigger break response. Called from attack tail before final health damage is applied.
void __userpurge Actor_HandleBlockedHitDamage(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        float a6,
        TESObjectREFR *a7,
        MobileObject *a8)
{
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  char *v13; // eax
  SInt32 BaseCalcAVi; // eax
  SkillMasteryLevel v15; // eax
  int v16; // eax
  const char *v17; // edi
  char *v18; // eax
  double v19; // [esp+14h] [ebp-1Ch]
  char *Name; // [esp+1Ch] [ebp-14h]
  float v21; // [esp+1Ch] [ebp-14h]
  float v22; // [esp+34h] [ebp+4h]
  float v23; // [esp+3Ch] [ebp+Ch]

  v10 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a7[1].vtbl->super.super.InitializeComponent /*0x5f5b87*/
         + 0x3E))(
          a7[1].vtbl,
          1,
          a4,
          a3,
          a2);
  v11 = v10; /*0x5f5b89*/
  if ( v10 ) /*0x5f5b8d*/
    v12 = v10; /*0x5f5b8f*/
  else
    v12 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent + 0x3B))( /*0x5f5ba2*/
            a7[1].vtbl,
            1);
  v23 = *(float *)&a5 * a6; /*0x5f5bb3*/
  if ( unk_B3B908 ) /*0x5f5ba4*/
  {
    Name = TESObjectREFR_GetName(a1); /*0x5f5bca*/
    v19 = a6 * fCostant_100; /*0x5f5bd0*/
    v13 = TESObjectREFR_GetName(a7); /*0x5f5bd3*/
    Interface_ConsolePrint("%.20s blocks %.0f%% of %.20s's blow!", v13, v19, Name); /*0x5f5bde*/
  }
  if ( a6 > 0.0 || !v12 ) /*0x5f5bf5*/
    ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD))a7->vtbl[2].super.GetSaveSize)(a7, 0xF, 0, 0.0);// Qualifying blocked hit: Block (0x0F), useValue0, event-derived float scale. /*0x5f5c09*/
  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a7, v11, v12, (int)a7, 0xF); /*0x5f5c13*/
  v15 = Calc_MasteryFromSkill(BaseCalcAVi); /*0x5f5c19*/
  if ( v15 ) /*0x5f5c23*/
  {
    if ( v15 > kSkillMastery_Apprentice ) /*0x5f5c67*/
      goto LABEL_18; /*0x5f5c67*/
  }
  else
  {
    v16 = ((int (__thiscall *)(TESObjectREFR *, int))a7->vtbl[1].Unk_37)(a7, 0xF); /*0x5f5c43*/
    v22 = Calc_BlockFatigueDamage(v16, a5, a6); /*0x5f5c4b*/
    v21 = -v22; /*0x5f5c5a*/
    Actor_ApplyNegativeFatigueDeltaClamped(a7, v21); /*0x5f5c5d*/
  }
  if ( v12 ) /*0x5f5c6b*/
  {
    if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD))a7->vtbl[1].Unk_47)( /*0x5f5c82*/
           a7,
           v12,
           LODWORD(v23),
           0) )
    {
      Actor_UpdateBlockingState((Actor *)a7, a2, a3, v23, 0); /*0x5f5c8c*/
      if ( unk_B3B908 ) /*0x5f5c91*/
      {
        v17 = "shield"; /*0x5f5c9c*/
        if ( !v11 ) /*0x5f5ca1*/
          v17 = "weapon"; /*0x5f5ca3*/
        TESObjectREFR_GetName(a1); /*0x5f5caa*/
        v18 = TESObjectREFR_GetName(a7); /*0x5f5cc3*/
        Interface_ConsolePrint("%.20s's %s shatters under the blow and is now useless!", v18, v17); /*0x5f5cce*/
      }
    }
  }
LABEL_18:
  if ( a8 ) /*0x5f5ce0*/
  {
    if ( g_GameSettingStringPointers_B36CD8[0xE2] <= (double)a6 ) /*0x5f5cf3*/
      ArrowProjectile_SetFreeImpactState3(a8, (int)&g_zeroNiPoint3, (int)&g_zeroNiPoint3); /*0x5f5cff*/
  }
}
