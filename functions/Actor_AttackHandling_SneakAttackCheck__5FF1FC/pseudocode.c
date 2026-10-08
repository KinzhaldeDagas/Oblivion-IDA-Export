// Oblivion sneak-attack decision. Creatures are excluded as attackers; the attacker must be sneaking; victim detection <= 0 permits the bonus unless combat-awareness logic forces failure. Successful attacks use the attacker's Sneak mastery plus weapon type to select the multiplier, set the Master-tier flag when applicable, show the player message, and pass the multiplier into damage calculation.
void __usercall Actor_EvaluateSneakAttack(
        TESObjectREFR *a1@<edi>,
        TESObjectREFR *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        float a15,
        float a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int string)
{
  int v44; // ebp
  _DWORD *v45; // eax
  unsigned int v46; // eax
  SkillMasteryLevel SkillMasteryLevel; // eax
  int v48; // eax
  const char *v49; // eax
  char *v50; // eax
  char *Name; // [esp-4h] [ebp-Ch]
  int duration; // [esp+4h] [ebp-4h]
  const char *durationa; // [esp+4h] [ebp-4h]
  const char *durationb; // [esp+4h] [ebp-4h]
  int v55; // [esp+40h] [ebp+38h]

  *(float *)&v55 = 1.0; /*0x5ff206*/
  BYTE2(a9) = 0; /*0x5ff20c*/
  if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature ) /*0x5ff217*/
    goto LABEL_16;                              // Oblivion sneak-attack decision. Creatures are excluded as attackers; the attacker must be sneaking; victim detection <= 0 permits the bonus unless combat-awareness logic forces failure. Successful attacks use the attacker's Sneak mastery plus weapon type to select the multiplier, set the Master-tier flag when applicable, show the player message, and pass the multiplier into damage calculation. /*0x5ff217*/
  if ( !Actor_IsSneaking(a1) ) /*0x5ff21f*/
    goto LABEL_16; /*0x5ff21f*/
  v44 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a2[1].vtbl->super.super.InitializeComponent + 0x72))( /*0x5ff23c*/
          a2[1].vtbl,
          a1);
  if ( ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2) /*0x5ff26a*/
    && (v45 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2), sub_613670(v45, (int)a1))
    && v44 > (int)MEMORY[0xB372F0].value )
  {
    v44 = 1; /*0x5ff26c*/
  }
  else if ( v44 <= 0 ) /*0x5ff278*/
  {
    if ( a13 ) /*0x5ff284*/
      v46 = *(char *)(a13 + 0x90); /*0x5ff286*/
    else
      v46 = 0xFFFFFFFF; /*0x5ff28f*/
    duration = v46; /*0x5ff292*/
    SkillMasteryLevel = Actor_GetSkillMasteryLevel((Actor *)a1, kSkillAV_Sneak); /*0x5ff297*/
    *(float *)&v55 = Calc_SneakAttackDamageMultiplier(SkillMasteryLevel, duration); /*0x5ff2a2*/
    if ( *(float *)&v55 > 1.0 && Actor_GetSkillMasteryLevel((Actor *)a1, kSkillAV_Sneak) == kSkillMastery_Master ) /*0x5ff2c2*/
      BYTE2(a9) = 1; /*0x5ff2c4*/
    if ( a1 == (TESObjectREFR *)reference ) /*0x5ff2cf*/
    {
      durationa = MEMORY[0xB38F10].value; /*0x5ff2db*/
      v48 = Double_To_SInt32(*(float *)&v55); /*0x5ff2dc*/
      _sprintf((char *)&string, "%s%d%s", MEMORY[0xB38F08].value, v48, durationa); /*0x5ff2f6*/
      GameUI_QueueMessage((const char *)&string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5ff313*/
    }
  }
  if ( unk_B3B908 )
  {
    v49 = "SUCCESS"; /*0x5ff326*/
    if ( v44 > 0 ) /*0x5ff32b*/
      v49 = "FAILURE"; /*0x5ff32d*/
    durationb = v49; /*0x5ff332*/
    Name = TESObjectREFR_GetName(a2); /*0x5ff33b*/
    v50 = TESObjectREFR_GetName(a1); /*0x5ff33e*/
    Interface_ConsolePrint("%.20s attempts a Sneak Attack on %.20s. Detection: %d, %s", v50, Name, v44, durationb);
    Actor_AttackHandling_::DetermineDamageFormula( /*0x5ff34f*/
      (Actor *)a1,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      v55,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26);
  }
  else
  {
LABEL_16:
    Actor_AttackHandling_::DetermineDamageFormula( /*0x5ff322*/
      (Actor *)a1,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      v55,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26);
  }
}
