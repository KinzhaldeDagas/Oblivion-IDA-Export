char __userpurge sub_4B5720@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
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
  char GroupOffsetFromAV; // al
  float *TESSkillByCode; // eax
  void (__thiscall *v18)(int, int); // eax

  v10 = 0;
  v11 = (PlayerCharacter *)OblivionDynamicCast(
                             a6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( (*(_BYTE *)(a1 + 0x88) & 1) != 0 )
    v10 = *(_DWORD *)(a1 + 0x64) != 0;
  if ( ((unsigned __int8 (__usercall *)@<al>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))v11->vtbl->super.IsInCombat)(
         v11,
         1,
         a4,
         a3,
         a2) )
  {
    goto LABEL_6;
  }
  v12 = TESDataHandler_g_PlayerRef;
  if ( v11 == TESDataHandler_g_PlayerRef )
  {
    if ( !v12->vtbl->super.IsInCombat((Actor *)v12, 1) )
    {
LABEL_8:
      v12 = TESDataHandler_g_PlayerRef;
      goto LABEL_9;
    }
LABEL_6:
    if ( !InterfaceManager_IsMenuMode() )
    {
      GameUI_QueueMessage((const char *)dword_B38A68, 0, 1u, flt_A30634);
      return 1;
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( a6 != v12 || v12->pad10D[0] || v10 )
  {
    if ( (*(_BYTE *)(a1 + 0x88) & 2) == 0 )
    {
      sub_4B28E0(a1, (char)a6, a2, a3, a5, a6, a7, a8, a9);
      TESDataHandler_g_PlayerRef->pad10D[0] = 0;
    }
    return 1;
  }
  sub_57B740(0, (char)a6, a2, a3, a4, a1, a5);
  if ( v11 != TESDataHandler_g_PlayerRef )
    return 1;
  ++TESDataHandler_g_PlayerRef->miscStats[0x11];
  if ( sub_4B52D0((char *)a1) == 0xFFFFFFFF )
    return 1;
  v14 = sub_4B52D0((char *)a1);
  if ( (int)Actor_GetBaseCalcAVi(v14) >= 0x64 )
    return 1;
  ++TESDataHandler_g_PlayerRef->miscStats[0x12];
  v15 = sub_4B52D0((char *)a1);
  GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, v15);
  TESSkillByCode = (float *)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
  if ( TESSkillByCode )
    Player_SkillLevelIncrease(TESDataHandler_g_PlayerRef, v10, a2, a3, a4, TESSkillByCode, 1, 1);
  v18 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x40);
  *(_BYTE *)(a1 + 0x89) = 0xFF;
  v18(a1, 4);
  return 1;
}
