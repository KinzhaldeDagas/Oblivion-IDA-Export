char __userpurge sub_4B5720@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *reference,
        PlayerCharacter *a6,
        int a7,
        int a8,
        int a9)
{
  bool v10; // bl
  PlayerCharacter *v11; // edi
  PlayerCharacter *v12; // ecx
  int v14; // eax
  char v15; // al
  UInt8 GroupOffsetFromAV; // al
  TESSkill_RecordView *TESSkillByCode; // eax
  void (__thiscall *v18)(int, int); // eax

  v10 = 0; /*0x4b5741*/
  v11 = (PlayerCharacter *)OblivionDynamicCast( /*0x4b574a*/
                             a6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( (*(_BYTE *)(a1 + 0x88) & 1) != 0 ) /*0x4b574c*/
    v10 = *(_DWORD *)(a1 + 0x64) != 0; /*0x4b5754*/
  if ( ((unsigned __int8 (__usercall *)@<al>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))v11->vtbl->super.IsInCombat)( /*0x4b5762*/
         v11,
         1,
         a4,
         a3,
         a2) )
  {
    goto LABEL_6; /*0x4b5766*/
  }
  v12 = ::reference; /*0x4b5768*/
  if ( v11 == ::reference ) /*0x4b5770*/
  {
    if ( !v12->vtbl->super.IsInCombat((Actor *)v12, 1) ) /*0x4b5780*/
    {
LABEL_8:
      v12 = ::reference; /*0x4b57b0*/
      goto LABEL_9; /*0x4b57b0*/
    }
LABEL_6:
    if ( !InterfaceManager_IsMenuMode() ) /*0x4b5782*/
    {
      GameUI_QueueMessage(stru_B38A68.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x4b579f*/
      return 1; /*0x4b57ad*/
    }
    goto LABEL_8; /*0x4b5789*/
  }
LABEL_9:
  if ( a6 != v12 || v12->pad10D[0] || v10 ) /*0x4b57cd*/
  {
    if ( (*(_BYTE *)(a1 + 0x88) & 2) == 0 ) /*0x4b5882*/
    {
      TESBoundObject_ActivatePickup((TESObjectTREE_OblivionLayout_080_NiTArrayVerified *)a1, reference, (int)a6); /*0x4b589b*/
      ::reference->pad10D[0] = 0; /*0x4b58a6*/
    }
    return 1; /*0x4b58a6*/
  }
  sub_57B740(0, a2, a3, a4, a1, (int)reference); /*0x4b57d9*/
  if ( v11 != ::reference ) /*0x4b57e8*/
    return 1; /*0x4b57e8*/
  ++::reference->miscStats[0x11]; /*0x4b57f3*/
  if ( sub_4B52D0((char *)a1) == 0xFFFFFFFF ) /*0x4b5803*/
    return 1; /*0x4b5803*/
  v14 = sub_4B52D0((char *)a1); /*0x4b580b*/
  if ( Actor_GetBaseCalcAVi((int *)::reference, v10, 1, a1, v14) >= 0x64 ) /*0x4b581f*/
    return 1; /*0x4b58b0*/
  ++::reference->miscStats[0x12]; /*0x4b582a*/
  v15 = sub_4B52D0((char *)a1); /*0x4b5832*/
  GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, v15); /*0x4b583a*/
  TESSkillByCode = TESDataHandler_GetTESSkillByCode(g_TESDataHandler, GroupOffsetFromAV); /*0x4b5849*/
  if ( TESSkillByCode ) /*0x4b5850*/
    Player_SkillLevelIncrease(::reference, TESSkillByCode, 1, 1);// Reading a skill book grants one native skill level through the shared Player_SkillLevelIncrease path; whether it advances the player-level counter is decided by TESClass_IsMajorSkillAV inside that routine. /*0x4b585b*/
  v18 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x40); /*0x4b5862*/
  *(_BYTE *)(a1 + 0x89) = 0xFF; /*0x4b5869*/
  v18(a1, 4); /*0x4b5870*/
  return 1; /*0x4b57a7*/
}
