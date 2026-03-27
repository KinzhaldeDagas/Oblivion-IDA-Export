void __usercall Cmd_ModPCSkill(
        double st5_0@<st2>,
        double a2@<st1>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a10)
{
  char GroupOffsetFromAV; // al
  char *TESSkillByCode; // esi
  int SkillMasteryLevel; // eax
  UInt32 majorSkillAdvances; // ebx
  int i; // ebp
  float *v15; // ecx
  double v16; // st7
  int v17; // edx
  float *v18; // ecx
  int v19; // edi
  int BaseCalcAVi; // eax
  float *v21; // eax
  _DWORD *BaseClass; // eax
  _DWORD *v23; // edi
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  signed int v26; // eax
  char *v27; // edi
  const char *v28; // eax
  double v29; // st7
  _DWORD *v30; // ecx
  const char *v31; // eax
  _DWORD *sound; // ecx
  CHAR *MasteryDescription; // eax
  int v34; // ecx
  int v35; // esi
  _DWORD *AnimData; // esi
  _DWORD *v37; // esi
  const char *v38; // [esp-4h] [ebp-224h]
  const char *v39; // [esp-4h] [ebp-224h]
  int duration; // [esp+0h] [ebp-220h]
  const char *durationa; // [esp+0h] [ebp-220h]
  const char *durationb; // [esp+0h] [ebp-220h]
  int v43; // [esp+14h] [ebp-20Ch] BYREF
  UInt32 *a3[2]; // [esp+18h] [ebp-208h]
  UInt16 v45[2]; // [esp+20h] [ebp-200h] BYREF
  int v46; // [esp+24h] [ebp-1FCh]
  char string[500]; // [esp+28h] [ebp-1F8h] BYREF

  a3[0] = a10;
  *(_DWORD *)v45 = 0;
  v43 = 0;
  if ( Script_ExtractArgs(a1, arg4, a10, a4, a6, a7, l, v45, &v43) )
  {
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, v45[0]);
    TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
    if ( TESSkillByCode )
    {
      SkillMasteryLevel = Actor_GetSkillMasteryLevel(*((_DWORD *)TESSkillByCode + 0xB));
      majorSkillAdvances = TESDataHandler_g_PlayerRef->majorSkillAdvances;
      v46 = SkillMasteryLevel;
      for ( i = SkillMasteryLevel; v43; --v43 )
      {
        *(float *)a3 = sub_65FA90((float *)TESDataHandler_g_PlayerRef, *((_DWORD *)TESSkillByCode + 0xB));
        v15 = (float *)TESDataHandler_g_PlayerRef;
        *(double *)a3 = *(float *)a3;
        v16 = sub_65FAD0(v15, (int)TESSkillByCode);
        v17 = *((_DWORD *)TESSkillByCode + 0xB);
        v18 = (float *)TESDataHandler_g_PlayerRef;
        *(float *)a3 = *(double *)a3 - v16;
        sub_65FA40(v18, v17, *(float *)a3);
        v19 = *((_DWORD *)TESSkillByCode + 0xB);
        BaseCalcAVi = Actor_GetBaseCalcAVi(v19);
        Player_Actor_SetAViBase(v19, BaseCalcAVi + 1);
        i = Actor_GetSkillMasteryLevel(*((_DWORD *)TESSkillByCode + 0xB));
        v21 = &TESDataHandler_g_PlayerRef->skillExp[*((_DWORD *)TESSkillByCode + 0xB) + 0xA];
        ++*(_DWORD *)v21;
        sub_65D5F0(TESDataHandler_g_PlayerRef, *((_DWORD *)TESSkillByCode + 0xD));
        sub_6648D0(TESDataHandler_g_PlayerRef, *((_DWORD *)TESSkillByCode + 0xC));
        duration = *((_DWORD *)TESSkillByCode + 0xB);
        BaseClass = (_DWORD *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
        if ( sub_51C090(BaseClass, duration) )
          ++TESDataHandler_g_PlayerRef->majorSkillAdvances;
      }
      v23 = 0;
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
      if ( OpenMenuTile )
      {
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
        v23 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &HUDMainMenu `RTTI Type Descriptor',
                0);
      }
      v26 = TESDataHandler_g_PlayerRef->majorSkillAdvances;
      if ( majorSkillAdvances == v26 || v26 < 0xA || sub_5A56C0(v23) )
      {
        v27 = (char *)sYour;
        durationb = (const char *)SGameSetting_SkillIncreased;
        v31 = (const char *)sub_52EA90(TESSkillByCode);
        _sprintf(string, "%s %s %s.", v27, v31, durationb);
        sound = OSGlobals->sound;
        if ( sound )
        {
          v27 = (char *)PlaySound___(sound, "UIStatsSkillUp", 0x121, 1);
          sub_6B7190((int *)v27, 0);
          if ( v27 )
          {
            sub_6B73E0(v27);
            FormHeapFree((unsigned int)v27);
          }
        }
        v29 = flt_A30634;
        GameUI_QueueMessage(string, 0, 1u, flt_A30634);
      }
      else
      {
        v27 = (char *)sYour;
        durationa = (const char *)sGameSetting_Meditate;
        v38 = (const char *)SGameSetting_SkillIncreased;
        v28 = (const char *)sub_52EA90(TESSkillByCode);
        _sprintf(string, "%s %s %s.  %s", v27, v28, v38, durationa);
        v29 = flt_A46B10;
        GameUI_QueueMessage(string, 0, 1u, flt_A46B10);
        v30 = OSGlobals->sound;
        if ( v30 )
        {
          v27 = (char *)PlaySound___(v30, "UIStatsSkillUp", 0x121, 1);
          sub_6B7190((int *)v27, 0);
          if ( v27 )
          {
            sub_6B73E0(v27);
            FormHeapFree((unsigned int)v27);
          }
        }
        TESDataHandler_g_PlayerRef->bCanLevelUp = 1;
      }
      if ( i != v46 )
      {
        v39 = (const char *)sOk;
        MasteryDescription = TESSKill_GetMasteryDescription(TESSkillByCode, i);
        ShowUIMessageBox(v34, i, st5_0, a2, v29, MasteryDescription, 0, 1, v39, 0);
        v35 = *((_DWORD *)TESSkillByCode + 0xB);
        if ( v35 == 0xE || (unsigned int)(v35 - 0x10) <= 1 )
        {
          AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
          sub_471990(AnimData);
          sub_476410(AnimData, (int)v27, st5_0, a2, v29, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
          v37 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
          sub_471990(v37);
          sub_476410(v37, (int)v27, st5_0, a2, v29, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
        }
      }
      sub_57A7D0(i, st5_0, a2, v29);
    }
  }
}
