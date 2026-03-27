void __usercall Actor_AttackHandling_::SneakAttackCheck(
        int a1@<ebx>,
        PlayerCharacter *a2@<edi>,
        TESObjectREFR *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        float a16,
        float a17,
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
        int a43,
        int string)
{
  int v44; // ebp
  _DWORD *v45; // eax
  unsigned int v46; // eax
  int SkillMasteryLevel; // eax
  int v48; // eax
  const char *v49; // eax
  char *v50; // eax
  char *Name; // [esp-4h] [ebp-Ch]
  int duration; // [esp+4h] [ebp-4h]
  const char *durationa; // [esp+4h] [ebp-4h]
  const char *durationb; // [esp+4h] [ebp-4h]
  int v55; // [esp+40h] [ebp+38h]

  *(float *)&v55 = 1.0;
  BYTE2(a10) = 0;
  if ( a2->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)a2)->member.type == kFormType_Creature )
    goto LABEL_16;
  if ( !Actor_IsSneaking(a2) )
    goto LABEL_16;
  v44 = (*((int (__thiscall **)(TESObjectREFRVtbl *, PlayerCharacter *))a3[1].vtbl->super.super.InitializeComponent
         + 0x72))(
          a3[1].vtbl,
          a2);
  if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3)
    && (v45 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3), sub_613670(v45, (int)a2))
    && v44 > iAICombatMinDetection )
  {
    v44 = 1;
  }
  else if ( v44 <= 0 )
  {
    if ( a14 )
      v46 = *(char *)(a14 + 0x90);
    else
      v46 = 0xFFFFFFFF;
    duration = v46;
    SkillMasteryLevel = Actor_GetSkillMasteryLevel((int *)a2, a1, (int)a2, 0x1F);
    *(float *)&v55 = Calc_SneakAttackMultiplier(SkillMasteryLevel, duration);
    if ( *(float *)&v55 > 1.0 && Actor_GetSkillMasteryLevel((int *)a2, a1, (int)a2, 0x1F) == 4 )
      BYTE2(a10) = 1;
    if ( a2 == TESDataHandler_g_PlayerRef )
    {
      durationa = (const char *)sSuccessfulSneakAttackEnd;
      v48 = Double_To_SInt32(*(float *)&v55);
      _sprintf((char *)&string, "%s%d%s", (const char *)sSuccessfulSneakAttackMain, v48, durationa);
      GameUI_QueueMessage((const char *)&string, 0, 1u, flt_A30634);
    }
  }
  if ( byte_B3B908 )
  {
    v49 = "SUCCESS";
    if ( v44 > 0 )
      v49 = "FAILURE";
    durationb = v49;
    Name = TESObjectREFR_GetName(a3);
    v50 = TESObjectREFR_GetName((TESObjectREFR *)a2);
    Interface_ConsolePrint("%.20s attempts a Sneak Attack on %.20s. Detection: %d, %s", v50, Name, v44, durationb);
    Actor_AttackHandling_::DetermineDamageFormula(
      a2,
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
      a16,
      v55,
      a18,
      a19,
      a20,
      a21,
      a22);
  }
  else
  {
LABEL_16:
    Actor_AttackHandling_::DetermineDamageFormula(
      a2,
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
      a16,
      v55,
      a18,
      a19,
      a20,
      a21,
      a22);
  }
}
