// Oblivion player-progression debug panel: enumerates all 21 native skills, labels only strict TESClass matches as 'Major', and prints each value, per-skill advance count, usage/required usage, aggregate major advances, readiness, attribute-bonus buckets, and specialization counters. Non-majors receive no separate 'Minor' label.
signed int *__cdecl DebugOverlay_DrawPlayerSkillProgression(int a1, int *a2, signed int *a3)
{
  int v6; // esi
  SkillActorValue i; // esi
  TESClass *BaseClass; // eax
  PlayerCharacter *v9; // ecx
  PlayerCharacter *v10; // ebp
  char v11; // al
  PlayerCharacter *v12; // ebp
  char v13; // al
  const char *Name; // eax
  UInt8 **attributeBonuses; // ebp
  int v16; // ecx
  UInt8 **j; // eax
  UInt8 *v18; // ebx
  bool v19; // zf
  int k; // esi
  int v21; // eax
  const char *v22; // eax
  int v24; // [esp-4h] [ebp-11Ch]
  UInt32 v25; // [esp+0h] [ebp-118h]
  float v26; // [esp+4h] [ebp-114h]
  float v27; // [esp+4h] [ebp-114h]
  float v28; // [esp+4h] [ebp-114h]
  float v29; // [esp+4h] [ebp-114h]
  float v30; // [esp+4h] [ebp-114h]
  float v31; // [esp+4h] [ebp-114h]
  float v32; // [esp+4h] [ebp-114h]
  float v33; // [esp+4h] [ebp-114h]
  float v34; // [esp+4h] [ebp-114h]
  float v35; // [esp+8h] [ebp-110h]
  float v36; // [esp+8h] [ebp-110h]
  float v37; // [esp+8h] [ebp-110h]
  float v38; // [esp+8h] [ebp-110h]
  float v39; // [esp+8h] [ebp-110h]
  float v40; // [esp+8h] [ebp-110h]
  float v41; // [esp+8h] [ebp-110h]
  float v42; // [esp+8h] [ebp-110h]
  float v43; // [esp+8h] [ebp-110h]
  float v44; // [esp+8h] [ebp-110h]
  float v45; // [esp+8h] [ebp-110h]
  float v46; // [esp+8h] [ebp-110h]
  int v47; // [esp+10h] [ebp-108h]
  int v48; // [esp+24h] [ebp-F4h]
  int v49; // [esp+24h] [ebp-F4h]
  int v50; // [esp+28h] [ebp-F0h]
  int v51; // [esp+2Ch] [ebp-ECh]
  int v52; // [esp+2Ch] [ebp-ECh]
  int v53; // [esp+30h] [ebp-E8h]
  int v54; // [esp+30h] [ebp-E8h]
  int v55; // [esp+30h] [ebp-E8h]
  float v56; // [esp+34h] [ebp-E4h]
  float v57; // [esp+34h] [ebp-E4h]
  int v58; // [esp+34h] [ebp-E4h]
  const char *v59; // [esp+38h] [ebp-E0h]
  float v60; // [esp+38h] [ebp-E0h]
  float v61; // [esp+3Ch] [ebp-DCh]
  int v62; // [esp+3Ch] [ebp-DCh]
  int GroupOffsetFromAV; // [esp+40h] [ebp-D8h]
  char v64[200]; // [esp+4Ch] [ebp-CCh] BYREF

  v6 = *a2; /*0x666bd5*/
  v35 = (float)*a2; /*0x666bed*/
  v53 = *a3; /*0x666bfb*/
  v26 = (float)iDebugTextLeftRightOffset; /*0x666bff*/
  InterfaceMgr_DebugTextLine("PLAYER CHARACTER", v26, v35, 1, 0xFFFFFFFF); /*0x666c07*/
  v51 = a1 + v6; /*0x666c27*/
  v36 = (float)(a1 + v6); /*0x666c2b*/
  v27 = (float)iDebugTextLeftRightOffset; /*0x666c35*/
  InterfaceMgr_DebugTextLine("Skill Usage", v27, v36, 1, 0xFFFFFFFF); /*0x666c3d*/
  v50 = a1 + a1 + v6; /*0x666c47*/
  v48 = v50; /*0x666c4b*/
  for ( i = kSkillAV_Armorer; i < 0x21; ++i )
  {
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, i);// Oblivion group 2 converts the native SkillActorValue to its 0..20 array index. /*0x666c5f*/
    if ( !Actor_GetBaseClass((Actor *)reference) /*0x666c83*/
      || (BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)reference),
          v59 = "Major, ",
          !TESClass_IsMajorSkillAV(BaseClass, i)) )// Use the strict seven-slot TESClass predicate solely to choose the literal 'Major, ' prefix. False or absent class leaves the skill unlabeled/non-major.
    {
      v59 = EmptyString; /*0x666c94*/
    }
    v9 = reference; /*0x666c9e*/
    v61 = 1.0; /*0x666ca7*/
    v10 = reference; /*0x666cae*/
    if ( (unsigned int)(i - 0xC) <= 0x14 ) /*0x666cb0*/
    {
      v11 = ActorValue_GetGroupOffsetFromAV(2, i);// Map this native skill to its group-2 index and read PlayerCharacter::requiredSkillExp[index]. /*0x666cb5*/
      v9 = reference; /*0x666cba*/
      v61 = v10->requiredSkillExp[v11]; /*0x666ccd*/
    }
    v56 = 0.0; /*0x666cd6*/
    v12 = v9; /*0x666cda*/
    if ( (unsigned int)(i - 0xC) <= 0x14 ) /*0x666cdc*/
    {
      v13 = ActorValue_GetGroupOffsetFromAV(2, i);// Map this native skill to its group-2 index and read PlayerCharacter::skillExp[index]. /*0x666ce1*/
      v9 = reference; /*0x666ce6*/
      v56 = v12->skillExp[v13]; /*0x666cf9*/
    }
    v25 = v9->skillAdv[GroupOffsetFromAV];      // Read PlayerCharacter::skillAdv[group2Index], the per-skill advance count shown independently of major membership. /*0x666d1c*/
    v24 = v9->vtbl->super.GetActorValue((Actor *)v9, (AVCode)i); /*0x666d2a*/
    Name = (const char *)ActorValue_GetName(i); /*0x666d2d*/
    _sprintf(v64, "%s (%s%d): advances: %d, usage %.2f/%.2f", Name, v59, v24, v25, v56, v61);// Format each native skill as name, optional 'Major, ' prefix, current value, advance count, and current/required usage.
    v37 = (float)v48; /*0x666d53*/
    v28 = (float)iDebugTextLeftRightOffset; /*0x666d61*/
    InterfaceMgr_DebugTextLine(v64, v28, v37, 1, 0xFFFFFFFF); /*0x666d65*/
    v48 += a1; /*0x666d6a*/
  }
  _sprintf(v64, "Major Skills Advanced: %d/%d", reference->majorSkillAdvances, g_iLevelUpSkillCount.value);// Report PlayerCharacter::majorSkillAdvances against g_iLevelUpSkillCount.value after the 21 per-skill rows.
  v38 = (float)v48; /*0x666db2*/
  v29 = (float)iDebugTextLeftRightOffset; /*0x666dc0*/
  InterfaceMgr_DebugTextLine(v64, v29, v38, 1, 0xFFFFFFFF); /*0x666dc4*/
  v49 = a1 + v48; /*0x666dce*/
  if ( reference->bCanLevelUp )                 // PlayerCharacter::bCanLevelUp independently controls the 'Ready to Level Up' diagnostic line. /*0x666dd5*/
  {
    v39 = (float)v49; /*0x666de8*/
    v30 = (float)iDebugTextLeftRightOffset; /*0x666df2*/
    InterfaceMgr_DebugTextLine("Ready to Level Up", v30, v39, 1, 0xFFFFFFFF); /*0x666dfa*/
    v49 += a1; /*0x666e02*/
  }
  v57 = (float)iDebugTextLeftRightOffset; /*0x666e19*/
  v60 = v57 + ((double)(0x500 - iDebugTextLeftRightOffset) - v57) * dbl_A2FAA0; /*0x666e3c*/
  v40 = (float)v51; /*0x666e44*/
  InterfaceMgr_DebugTextLine("Attribute Skill Counts", v60, v40, 2, 0xFFFFFFFF);// Dump every retained attribute-bonus bucket; these counts include all skill increases, while only major increases roll the bucket boundary. /*0x666e54*/
  attributeBonuses = reference->attributeBonuses; /*0x666e5e*/
  v16 = 0; /*0x666e6b*/
  v52 = v50; /*0x666e6f*/
  for ( j = attributeBonuses; j; j = (UInt8 **)j[1] ) /*0x666e75*/
  {
    if ( *j ) /*0x666e77*/
      ++v16; /*0x666e7c*/
  }
  if ( v16 > 0 )
  {
    v62 = v16; /*0x666e8d*/
    v58 = v16; /*0x666e91*/
    do
    {
      v18 = *attributeBonuses; /*0x666e95*/
      v19 = *attributeBonuses == 0; /*0x666e98*/
      attributeBonuses = (UInt8 **)attributeBonuses[1]; /*0x666e9a*/
      if ( !v19 )
      {
        _sprintf(v64, "Advancement #%d", v62); /*0x666eb2*/
        v41 = (float)v52; /*0x666ec5*/
        InterfaceMgr_DebugTextLine(v64, v60, v41, 2, 0xFFFFFFFF); /*0x666ed5*/
        v52 += a1; /*0x666eda*/
        for ( k = 0; k < 8; ++k )
        {
          v21 = 0; /*0x666ee3*/
          if ( (unsigned int)k <= 7 ) /*0x666ee8*/
            v21 = (char)v18[ActorValue_GetGroupOffsetFromAV(0, k)]; /*0x666ef4*/
          v47 = v21; /*0x666efb*/
          v22 = (const char *)ActorValue_GetName(k); /*0x666efd*/
          _sprintf(v64, "%s: %d", v22, v47);
          v42 = (float)v52; /*0x666f23*/
          InterfaceMgr_DebugTextLine(v64, v60, v42, 2, 0xFFFFFFFF); /*0x666f33*/
          v52 += a1; /*0x666f38*/
        }
      }
      --v62; /*0x666f4c*/
      --v58; /*0x666f50*/
    }
    while ( v58 );
  }
  v43 = (float)v53; /*0x666f70*/
  v31 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x666f7c*/
  InterfaceMgr_DebugTextLine("Specialization Counts", v31, v43, 3, 0xFFFFFFFF);// Dump Combat/Magic/Stealth advancement counters accumulated from every skill increase according to that skill's specialization. /*0x666f84*/
  _sprintf(v64, "Combat: %d", SLOBYTE(reference->combatAndMagicAdvanceCounts));
  v44 = (float)(a1 + v53); /*0x666fcd*/
  v32 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x666fd9*/
  InterfaceMgr_DebugTextLine(v64, v32, v44, 3, 0xFFFFFFFF); /*0x666fdd*/
  v54 = a1 + a1 + v53; /*0x666ffb*/
  _sprintf(v64, "Magic: %d", SHIBYTE(reference->combatAndMagicAdvanceCounts));
  v45 = (float)v54; /*0x667021*/
  v33 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x66702d*/
  InterfaceMgr_DebugTextLine(v64, v33, v45, 3, 0xFFFFFFFF); /*0x667031*/
  v55 = a1 + v54; /*0x667050*/
  _sprintf(v64, "Stealth: %d", (char)reference->stealthAdvanceCount);
  v46 = (float)v55; /*0x667072*/
  v34 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x667082*/
  InterfaceMgr_DebugTextLine(v64, v34, v46, 3, 0xFFFFFFFF); /*0x667086*/
  *a2 = v49; /*0x66709c*/
  *a3 = a1 + v55; /*0x6670a6*/
  return a3; /*0x66709e*/
}
