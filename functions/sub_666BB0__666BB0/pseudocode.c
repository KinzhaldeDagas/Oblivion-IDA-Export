signed int *__usercall sub_666BB0@<eax>(
        char a1@<bpl>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int *a5,
        signed int *a6)
{
  int v7; // esi
  double v8; // st5
  double v9; // st5
  int i; // esi
  TESForm::ModReferenceList *BaseClass; // eax
  PlayerCharacter *v12; // ecx
  PlayerCharacter *v13; // ebp
  char v14; // al
  PlayerCharacter *v15; // ebp
  char v16; // al
  double v17; // st6
  const char *Name; // eax
  double v19; // st5
  double v20; // st5
  double v21; // st5
  UInt8 **attributeBonuses; // ebp
  int v23; // ecx
  UInt8 **j; // eax
  UInt8 *v25; // ebx
  bool v26; // zf
  int k; // esi
  int v28; // eax
  const char *v29; // eax
  double v30; // st5
  double v31; // st5
  double v32; // st5
  double v33; // st5
  int v35; // [esp-4h] [ebp-11Ch]
  UInt32 v36; // [esp+0h] [ebp-118h]
  float v37; // [esp+4h] [ebp-114h]
  float v38; // [esp+4h] [ebp-114h]
  float v39; // [esp+4h] [ebp-114h]
  float v40; // [esp+4h] [ebp-114h]
  float v41; // [esp+4h] [ebp-114h]
  float v42; // [esp+4h] [ebp-114h]
  float v43; // [esp+4h] [ebp-114h]
  float v44; // [esp+4h] [ebp-114h]
  float v45; // [esp+4h] [ebp-114h]
  float v46; // [esp+8h] [ebp-110h]
  float v47; // [esp+8h] [ebp-110h]
  float v48; // [esp+8h] [ebp-110h]
  float v49; // [esp+8h] [ebp-110h]
  float v50; // [esp+8h] [ebp-110h]
  float v51; // [esp+8h] [ebp-110h]
  float v52; // [esp+8h] [ebp-110h]
  float v53; // [esp+8h] [ebp-110h]
  float v54; // [esp+8h] [ebp-110h]
  float v55; // [esp+8h] [ebp-110h]
  float v56; // [esp+8h] [ebp-110h]
  float v57; // [esp+8h] [ebp-110h]
  int v58; // [esp+10h] [ebp-108h]
  int v59; // [esp+24h] [ebp-F4h]
  int v60; // [esp+24h] [ebp-F4h]
  int v61; // [esp+28h] [ebp-F0h]
  int v62; // [esp+2Ch] [ebp-ECh]
  int v63; // [esp+2Ch] [ebp-ECh]
  int v64; // [esp+30h] [ebp-E8h]
  int v65; // [esp+30h] [ebp-E8h]
  int v66; // [esp+30h] [ebp-E8h]
  float v67; // [esp+34h] [ebp-E4h]
  float v68; // [esp+34h] [ebp-E4h]
  int v69; // [esp+34h] [ebp-E4h]
  const char *v70; // [esp+38h] [ebp-E0h]
  float v71; // [esp+38h] [ebp-E0h]
  float v72; // [esp+3Ch] [ebp-DCh]
  int v73; // [esp+3Ch] [ebp-DCh]
  int GroupOffsetFromAV; // [esp+40h] [ebp-D8h]
  char v75[200]; // [esp+4Ch] [ebp-CCh] BYREF

  v7 = *a5;
  v46 = (float)*a5;
  v8 = (double)iDebugTextLeftRightOffset;
  v64 = *a6;
  v37 = v8;
  InterfaceMgr_DebugTextLine(a1, v8, a2, a3, "PLAYER CHARACTER", v37, v46, 1, 0xFFFFFFFF);
  v62 = a4 + v7;
  v47 = (float)(a4 + v7);
  v9 = (double)iDebugTextLeftRightOffset;
  v38 = v9;
  InterfaceMgr_DebugTextLine(a1, v9, a2, a3, "Skill Usage", v38, v47, 1, 0xFFFFFFFF);
  v61 = a4 + a4 + v7;
  v59 = v61;
  for ( i = 0xC; i < 0x21; ++i )
  {
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, i);
    if ( !Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef)
      || (BaseClass = Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef), v70 = "Major, ",
                                                                               !sub_51C090(BaseClass, i)) )
    {
      v70 = EmptyString;
    }
    v12 = TESDataHandler_g_PlayerRef;
    v72 = 1.0;
    v13 = TESDataHandler_g_PlayerRef;
    if ( (unsigned int)(i - 0xC) <= 0x14 )
    {
      v14 = ActorValue_GetGroupOffsetFromAV(2, i);
      v12 = TESDataHandler_g_PlayerRef;
      v72 = v13->requiredSkillExp[v14];
    }
    v67 = 0.0;
    v15 = v12;
    if ( (unsigned int)(i - 0xC) <= 0x14 )
    {
      v16 = ActorValue_GetGroupOffsetFromAV(2, i);
      v12 = TESDataHandler_g_PlayerRef;
      v67 = v15->skillExp[v16];
    }
    v17 = v67;
    v36 = v12->skillAdv[GroupOffsetFromAV];
    v35 = v12->vtbl->super.GetActorValue((Actor *)v12, (AVCode)i);
    Name = (const char *)ActorValue_GetName(i);
    _sprintf(v75, "%s (%s%d): advances: %d, usage %.2f/%.2f", Name, v70, v35, v36, v67, v72);
    v48 = (float)v59;
    v19 = (double)iDebugTextLeftRightOffset;
    v39 = v19;
    InterfaceMgr_DebugTextLine((char)v15, v19, v67, a3, v75, v39, v48, 1, 0xFFFFFFFF);
    v59 += a4;
  }
  _sprintf(v75, "Major Skills Advanced: %d/%d", TESDataHandler_g_PlayerRef->majorSkillAdvances, iLevelUpSkillCount);
  v49 = (float)v59;
  v20 = (double)iDebugTextLeftRightOffset;
  v40 = v20;
  InterfaceMgr_DebugTextLine((char)v15, v20, v17, a3, v75, v40, v49, 1, 0xFFFFFFFF);
  v60 = a4 + v59;
  if ( TESDataHandler_g_PlayerRef->bCanLevelUp )
  {
    v50 = (float)v60;
    v21 = (double)iDebugTextLeftRightOffset;
    v41 = v21;
    InterfaceMgr_DebugTextLine((char)v15, v21, v17, a3, "Ready to Level Up", v41, v50, 1, 0xFFFFFFFF);
    v60 += a4;
  }
  v68 = (float)iDebugTextLeftRightOffset;
  v71 = v68 + ((double)(0x500 - iDebugTextLeftRightOffset) - v68) * dbl_A2FAA0;
  v51 = (float)v62;
  InterfaceMgr_DebugTextLine((char)v15, v71, v17, a3, "Attribute Skill Counts", v71, v51, 2, 0xFFFFFFFF);
  attributeBonuses = TESDataHandler_g_PlayerRef->attributeBonuses;
  v23 = 0;
  v63 = v61;
  for ( j = attributeBonuses; j; j = (UInt8 **)j[1] )
  {
    if ( *j )
      ++v23;
  }
  if ( v23 > 0 )
  {
    v73 = v23;
    v69 = v23;
    do
    {
      v25 = *attributeBonuses;
      v26 = *attributeBonuses == 0;
      attributeBonuses = (UInt8 **)attributeBonuses[1];
      if ( !v26 )
      {
        _sprintf(v75, "Advancement #%d", v73);
        v52 = (float)v63;
        InterfaceMgr_DebugTextLine((char)attributeBonuses, v71, v17, a3, v75, v71, v52, 2, 0xFFFFFFFF);
        v63 += a4;
        for ( k = 0; k < 8; ++k )
        {
          v28 = 0;
          if ( (unsigned int)k <= 7 )
            v28 = (char)v25[ActorValue_GetGroupOffsetFromAV(0, k)];
          v58 = v28;
          v29 = (const char *)ActorValue_GetName(k);
          _sprintf(v75, "%s: %d", v29, v58);
          v53 = (float)v63;
          InterfaceMgr_DebugTextLine((char)attributeBonuses, v71, v17, a3, v75, v71, v53, 2, 0xFFFFFFFF);
          v63 += a4;
        }
      }
      --v73;
      --v69;
    }
    while ( v69 );
  }
  v54 = (float)v64;
  v30 = (double)(0x500 - iDebugTextLeftRightOffset);
  v42 = v30;
  InterfaceMgr_DebugTextLine((char)attributeBonuses, v30, v17, a3, "Specialization Counts", v42, v54, 3, 0xFFFFFFFF);
  _sprintf(v75, "Combat: %d", SLOBYTE(TESDataHandler_g_PlayerRef->unk5B8));
  v55 = (float)(a4 + v64);
  v31 = (double)(0x500 - iDebugTextLeftRightOffset);
  v43 = v31;
  InterfaceMgr_DebugTextLine((char)attributeBonuses, v31, v17, a3, v75, v43, v55, 3, 0xFFFFFFFF);
  v65 = a4 + a4 + v64;
  _sprintf(v75, "Magic: %d", SHIBYTE(TESDataHandler_g_PlayerRef->unk5B8));
  v56 = (float)v65;
  v32 = (double)(0x500 - iDebugTextLeftRightOffset);
  v44 = v32;
  InterfaceMgr_DebugTextLine((char)attributeBonuses, v32, v17, a3, v75, v44, v56, 3, 0xFFFFFFFF);
  v66 = a4 + v65;
  _sprintf(v75, "Stealth: %d", (char)TESDataHandler_g_PlayerRef->unk5BA);
  v57 = (float)v66;
  v33 = (double)(0x500 - iDebugTextLeftRightOffset);
  v45 = v33;
  InterfaceMgr_DebugTextLine((char)attributeBonuses, v33, v17, a3, v75, v45, v57, 3, 0xFFFFFFFF);
  *a5 = v60;
  *a6 = a4 + v66;
  return a6;
}
