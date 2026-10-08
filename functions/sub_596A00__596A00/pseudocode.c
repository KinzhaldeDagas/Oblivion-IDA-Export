// Oblivion character-generation class commit. Installs the selected TESClass, rebuilds TESNPC auto stats, clears level/attribute/specialization advancement state, then replays deferred skill use under the new seven-major and specialization classification.
double __usercall ClassMenu_ApplyChosenClass@<st0>(
        int a1@<ebx>,
        int a2@<edi>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st2>,
        double a8@<st1>)
{
  Tile *v8; // eax
  Tile *v9; // esi
  _DWORD *v10; // edi
  double v11; // st7
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v14; // esi
  TESForm *v15; // eax
  TESNPC *v16; // ebp
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // esi
  double result; // st7
  int v21; // [esp+18h] [ebp-Ch]
  _DWORD *v22; // [esp+1Ch] [ebp-8h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x406); /*0x596a15*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x596a1f*/
  v14 = OblivionDynamicCast( /*0x596a2a*/
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ClassMenu `RTTI Type Descriptor',
          0);
  if ( v14 ) /*0x596a35*/
  {
    if ( InterfaceManager_ConsumeMessageButton() == 2 ) /*0x596a42*/
    {
      if ( v14[0xF] ) /*0x596a48*/
      {
        v15 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x596a6f*/
        v16 = (TESNPC *)OblivionDynamicCast( /*0x596a77*/
                          v15,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
        if ( v16 ) /*0x596a7e*/
        {
          v17 = ((int (__thiscall *)(PlayerCharacter *, int))reference->vtbl->super.Unk_9A)(reference, a2); /*0x596a93*/
          v18 = v17; /*0x596a95*/
          if ( v17 ) /*0x596a99*/
          {
            v19 = (_DWORD *)(v17 + 0x3C); /*0x596a9b*/
            if ( v17 != 0xFFFFFFC4 ) /*0x596aa0*/
            {
              do /*0x596abe*/
              {
                if ( !*v19 ) /*0x596aa2*/
                  break; /*0x596aa6*/
                ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.Unk_B8)(reference, *v19); /*0x596ab7*/
                v19 = (_DWORD *)v19[1]; /*0x596ab9*/
              }
              while ( v19 ); /*0x596abe*/
            }
            v14 = v22; /*0x596ac0*/
          }
          MagicTarget_ProcessEffects(&reference->super.super.magicTarget, 0.0); /*0x596ad3*/
          v16->member.npcClass = (TESClass *)v14[0xF]; /*0x596adb*/
          TESNPC_RecalculateAutoStats(v16, 1);  // Class-menu apply invokes TESNPC_RecalculateAutoStats after installing the chosen TESClass, so native starting skills are regenerated from Oblivion class major membership, specialization, level, and race bonuses. /*0x596ae5*/
          reference->majorSkillAdvances = 0;    // Applying a chosen class during character generation resets majorSkillAdvances to zero. /*0x596af0*/
          reference->bCanLevelUp = 0;           // Applying a chosen class clears bCanLevelUp. /*0x596aff*/
          Player_ConsumeOldestAttributeBonusBucket(reference);// Consume/reset the active attribute-bonus bucket before replaying deferred character-generation skill use under the newly chosen class. /*0x596b0c*/
          Player_ClearSpecializationAdvanceCounts(reference);// Clear all three specialization advance counters before deferred character-generation use is replayed. /*0x596b17*/
          if ( v18 ) /*0x596b1e*/
          {
            v14 = (_DWORD *)(v18 + 0x3C); /*0x596b20*/
            if ( v18 != 0xFFFFFFC4 ) /*0x596b25*/
            {
              do /*0x596b43*/
              {
                if ( !*v14 ) /*0x596b27*/
                  break; /*0x596b2b*/
                ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.Unk_B7)(reference, *v14); /*0x596b3c*/
                v14 = (_DWORD *)v14[1]; /*0x596b3e*/
              }
              while ( v14 ); /*0x596b43*/
            }
          }
          Player_ReplayDeferredCharGenSkillUsage(reference);// Replay deferred character-generation skill use after the new class is installed, so required experience and advancement side effects use the new seven-major/specialization classification. /*0x596b4b*/
          UI_RefreshStatsMenuActorValues(); /*0x596b50*/
          sub_5F2530(reference, a1, v18, SLODWORD(fConstant_2)); /*0x596b65*/
          *(float *)&v21 = (float)Actor_GetBaseCalcAVi((int *)reference, a1, v18, (int)v14, 9); /*0x596b88*/
          result = *(float *)&v21; /*0x596b8c*/
          sub_5F25F0(reference, a1, v18, v21, 1); /*0x596b93*/
          sub_6645C0((Actor *)reference); /*0x596b9e*/
          MagicMenu_Create(a7, *(float *)&v21, a8); /*0x596ba3*/
          StatsMenu_Create(a7, *(float *)&v21, a8); /*0x596ba8*/
        }
      }
      v8 = (Tile *)Menu_GetOpenMenuTile(0x406); /*0x596716*/
      v9 = v8; /*0x59671b*/
      if ( v8 ) /*0x596722*/
      {
        v10 = (_DWORD *)Tile_GetParentMenu(v8); /*0x59672c*/
        if ( v10 ) /*0x596730*/
        {
          v11 = fConstant_2; /*0x596732*/
          Tile_SetFloat(v9, 0x1772u, fConstant_2); /*0x596743*/
          return Menu::StartFadeOut(v10, a3, a4, a5, a6, a7, v11); /*0x59674c*/
        }
      }
    }
  }
  return result; /*0x596bb8*/
}
