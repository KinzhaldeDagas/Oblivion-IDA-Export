// Central ranged combat-option evaluator. Runs while combat mode +0x74 is 3, obtains target distance bounds, independently classifies Staff type 4 and Bow type 5, scores physical ranged attack versus magic, and transitions to attack, spell, or repositioning modes. The sole stack flag is caller-clean semantic padding/unused in this build.
void __thiscall CombatController_EvaluateRangedAttackOptions(void *this, int unusedModeFlag)
{
  Actor *v2; // edi
  int v4; // eax
  TESObjectREFR *v5; // eax
  ActorAnimData *v6; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  ActorAnimData *v8; // eax
  _DWORD **CurrentTarget; // eax
  _DWORD **v10; // eax
  _DWORD **v11; // eax
  int CurrentAction; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int EquippedWeaponForm; // edi
  void **v16; // eax
  char v17; // dl
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  void *v24; // edi
  int *EffectiveCombatStyle; // eax
  int *v26; // ecx
  int v27; // eax
  int *v28; // edi
  int v29; // ebp
  int *v30; // eax
  double v31; // st7
  char v32; // bl
  double v33; // st7
  double v34; // st6
  double v35; // st5
  double v36; // rt1
  double v37; // st5
  int v38; // edi
  double v39; // st7
  double v40; // st5
  int v41; // ebp
  double v42; // st6
  double v43; // st7
  int v44; // edi
  double v45; // st6
  int v46; // eax
  double v47; // st7
  double (__thiscall **v48)(int, int, _DWORD, _DWORD); // edi
  int v49; // eax
  int v50; // eax
  void *v51; // eax
  double v52; // st7
  void *v53; // ecx
  int *v54; // edi
  int *v55; // ebx
  int WeaponSkillLevel; // [esp+0h] [ebp-58h]
  int v57; // [esp+0h] [ebp-58h]
  int v58; // [esp+4h] [ebp-54h]
  int SchoolAV; // [esp+4h] [ebp-54h]
  char v60; // [esp+8h] [ebp-50h]
  float v61; // [esp+Ch] [ebp-4Ch]
  float v62; // [esp+10h] [ebp-48h]
  float surfaceDistance; // [esp+14h] [ebp-44h]
  char maximumDistance; // [esp+18h] [ebp-40h]
  float maximumDistancea; // [esp+18h] [ebp-40h]
  int v66; // [esp+1Ch] [ebp-3Ch]
  int v67; // [esp+24h] [ebp-34h]
  __int16 v68; // [esp+2Eh] [ebp-2Ah]
  char v69; // [esp+30h] [ebp-28h]
  char v70; // [esp+31h] [ebp-27h]
  char v71; // [esp+32h] [ebp-26h]
  char v72; // [esp+33h] [ebp-25h]
  double Charge; // [esp+34h] [ebp-24h]
  float v74; // [esp+34h] [ebp-24h]
  float targetKnockedDown; // [esp+3Ch] [ebp-1Ch]
  float targetKnockedDowna; // [esp+3Ch] [ebp-1Ch]
  float targetKnockedDown_4; // [esp+40h] [ebp-18h]
  float targetKnockedDown_4a; // [esp+40h] [ebp-18h]
  float outMaximumDistance; // [esp+44h] [ebp-14h] BYREF
  double outOptimalDistance; // [esp+48h] [ebp-10h] BYREF
  double targetStaggered; // [esp+50h] [ebp-8h]

  if ( *((_DWORD *)this + 0x1D) == 3 )
  {
    if ( CombatController_GetCurrentTarget((int)this) )
    {
      v4 = *((_DWORD *)this + 0x1B); /*0x6189fd*/
      v67 = (int)v2; /*0x618a03*/
      if ( v4 != 4 && v4 != 0xE && v4 != 0xC && v4 != 7
        || (v2 = *((Actor **)this + 0xF),
            v5 = (TESObjectREFR *)CombatController_GetCurrentTarget((int)this),
            Actor_IsFacingReferenceWithinCombatAngle(v2, v5, 0)) )
      {
        *((_DWORD *)this + 0x14) = 0xFF; /*0x618a35*/
        targetKnockedDown = CombatController_GetCachedTargetSurfaceDistance((int)this, (char)v2); /*0x618a41*/
        *(float *)&outOptimalDistance = 0.0; /*0x618a4c*/
        outMaximumDistance = 0.0; /*0x618a54*/
        CombatController_GetRangedDistanceBounds(this, (float *)&outOptimalDistance, &outMaximumDistance); /*0x618a5b*/
        v6 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0xF) + 0x164))( /*0x618a6d*/
                                *((_DWORD *)this + 0xF),
                                3);
        AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v6, v67); /*0x618a71*/
        AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value); /*0x618a77*/
        v8 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xF) + 0x164))(*((_DWORD *)this + 0xF)); /*0x618a90*/
        ActorAnimData_GetSlotActionState(v8, 3); /*0x618a94*/
        CurrentTarget = (_DWORD **)CombatController_GetCurrentTarget((int)this); /*0x618aa3*/
        BYTE4(outOptimalDistance) = Actor_IsCurrentActionInRange2To5(CurrentTarget); /*0x618ab1*/
        v10 = (_DWORD **)CombatController_GetCurrentTarget((int)this); /*0x618ab5*/
        if ( Actor_GetCurrentAction(v10) == 7 /*0x618adc*/
          || (v11 = (_DWORD **)CombatController_GetCurrentTarget((int)this),
              CurrentAction = Actor_GetCurrentAction(v11),
              LOBYTE(outMaximumDistance) = 0,
              CurrentAction == 8) )
        {
          LOBYTE(outMaximumDistance) = 1; /*0x618ade*/
        }
        v13 = CombatController_GetCurrentTarget((int)this); /*0x618ae6*/
        v71 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x334))(v13, 1); /*0x618afb*/
        v14 = (_DWORD *)CombatController_GetCurrentTarget((int)this); /*0x618aff*/
        LOBYTE(targetStaggered) = Actor_IsBlocking(v14); /*0x618b0d*/
        EquippedWeaponForm = CombatController_GetEquippedWeaponForm(this); /*0x618b16*/
        v68 = 0; /*0x618b1a*/
        v69 = 0; /*0x618b24*/
        if ( EquippedWeaponForm )
        {
          v16 = (void **)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0xEC))( /*0x618b3f*/
                           *(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58),
                           1);
          v17 = *(_BYTE *)(EquippedWeaponForm + 0x90);// Read equipped TESObjectWEAP.type at +0x90. Type 4 enters Staff charge/magic handling; type 5 is Bow. The Starshooting AI bridge's local DL=5 substitution selects native Bow behavior without mutating the WEAP record or entering Staff logic. /*0x618b41*/
          if ( v17 == 4 && (v18 = *(_DWORD *)(EquippedWeaponForm + 0x64)) != 0 )// Weapon type 4 (Staff) is handled first in this ranged-distance branch.
          {
            Charge = EquippedEntryData_GetCharge(v16); /*0x618b5d*/
            if ( ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v18 + 0x24))(v18 + 0x24, 0) > Charge
              || CombatController_GetCurrentTarget((int)this)
              && ((v19 = *(_DWORD *)(EquippedWeaponForm + 0x64)) == 0 ? (v20 = 0) : (v20 = v19 + 0x18),
                  v66 = v20,
                  v21 = CombatController_GetCurrentTarget((int)this),
                  (unsigned __int8)MagicTarget_HasMagicItem((void *)(v21 + 0x68), v66)) )
            {
              LOBYTE(v68) = 1; /*0x618ba6*/
            }
            HIBYTE(v68) = 1; /*0x618bab*/
          }
          else if ( v17 != 5 && v17 != 4 )      // Accept native WEAP type 5 (Bow); the following comparison also accepts type 4 (Staff). Oblivion exposes no native crossbow/throwing type here, so companion classification must be an external bridge after observing this type-5 behavior. /*0x618bba*/
          {
            v69 = 1; /*0x618bbc*/
          }
        }
        if ( CombatController_IsTargetWithinRangedDistance(this, targetKnockedDown, outMaximumDistance, 0) ) /*0x618bd7*/
        {
          v22 = *((_DWORD *)this + 0x1C); /*0x618be6*/
          v74 = 0.0; /*0x618bec*/
          if ( v22 == 2 || v22 == 4 ) /*0x618bfa*/
          {
            if ( EquippedWeaponForm ) /*0x618bfe*/
            {
              if ( !v69 && !(_BYTE)v68 ) /*0x618c0c*/
              {
                v23 = CombatController_GetCurrentTarget((int)this); /*0x618c10*/
                v24 = *((void **)this + 0xF); /*0x618c1b*/
                maximumDistance = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0x19C))( /*0x618c2f*/
                                    v23,
                                    LODWORD(targetStaggered));
                v61 = *((float *)&outOptimalDistance + 1); /*0x618c39*/
                v58 = (*(int (__thiscall **)(void *))(*(_DWORD *)v24 + 0x284))(v24); /*0x618c40*/
                WeaponSkillLevel = CombatController_GetWeaponSkillLevel(this); /*0x618c48*/
                EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(v24); /*0x618c4b*/
                v74 = CombatStyle_CalculateAttackScore( /*0x618c56*/
                        EffectiveCombatStyle,
                        WeaponSkillLevel,
                        v58,
                        7,
                        v61,
                        0.0,
                        targetKnockedDown_4,
                        maximumDistance);
              }
            }
          }
          v26 = *((int **)this + 0x20); /*0x618c5f*/
          targetKnockedDowna = 0.0; /*0x618c67*/
          if ( v26 ) /*0x618c6b*/
          {
            if ( *((float *)this + 0x42) < *((float *)this + 0x11) - *((float *)this + 0x41) ) /*0x618c87*/
            {
              if ( CombatController_CanUseSpellAgainstCurrentTarget(this, v26, 0, 0) ) /*0x618c90*/
              {
                v27 = CombatController_GetCurrentTarget((int)this); /*0x618c9b*/
                v28 = *((int **)this + 0xF); /*0x618ca2*/
                v29 = *v28; /*0x618ca5*/
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 0x19C))(v27, 0); /*0x618cb1*/
                v62 = *(float *)&targetStaggered; /*0x618cc3*/
                v60 = (*(int (__thiscall **)(int *))(*v28 + 0x284))(v28); /*0x618cd2*/
                SchoolAV = EffectItemList_GetSchoolAV(); /*0x618ce1*/
                v57 = (*(int (__thiscall **)(int *))(v29 + 0x284))(v28); /*0x618ce6*/
                v30 = Actor_GetEffectiveCombatStyle(v28); /*0x618ce9*/
                targetKnockedDowna = CombatStyle_CalculateAttackScore( /*0x618cf4*/
                                       v30,
                                       v57,
                                       SchoolAV,
                                       v60,
                                       COERCE_FLOAT(7),
                                       v62,
                                       0.0,
                                       SLOBYTE(targetKnockedDown_4));
              }
            }
          }
          if ( v71 /*0x618d11*/
            || (PlayerCharacter *)CombatController_GetCurrentTarget((int)this) == reference
            || (v74 = v74 + fCostant_100, !*((_DWORD *)this + 0x20)) )
          {
            v31 = 0.0; /*0x618d47*/
          }
          else
          {
            v31 = 0.0; /*0x618d3d*/
            if ( targetKnockedDowna > 0.0 ) /*0x618d39*/
              targetKnockedDowna = fCostant_100 + targetKnockedDowna; /*0x618d3f*/
          }
          if ( v31 < v74 || v31 < targetKnockedDowna ) /*0x618d63*/
            v32 = *((_BYTE *)this + 0x158); /*0x618d6b*/
          else
            v32 = 0; /*0x618d65*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0x2DC))(*(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58)) /*0x618d87*/
            && v32 )
          {
            v33 = 0.0; /*0x618d95*/
          }
          else
          {
            v33 = 0.0; /*0x618d89*/
            v74 = 0.0; /*0x618d8b*/
            targetKnockedDowna = 0.0; /*0x618d8f*/
          }
          v34 = v74; /*0x618d9c*/
          v35 = targetKnockedDowna; /*0x618da0*/
          if ( HIBYTE(v68) ) /*0x618da4*/
          {
            if ( *((float *)this + 0x6D) >= *((float *)this + 0x11) - *((float *)this + 0x6C) ) /*0x618dbc*/
            {
              v74 = v33; /*0x618dc2*/
              v34 = v74; /*0x618dca*/
              v35 = targetKnockedDowna; /*0x618dcc*/
            }
          }
          if ( v35 > v33 ) /*0x618dd5*/
          {
            v36 = v35; /*0x618ddb*/
            v37 = v34; /*0x618ddb*/
            v34 = v36; /*0x618ddb*/
            if ( v37 > v33 ) /*0x618de4*/
            {
              *(float *)&targetStaggered = v34 - v37; /*0x618dee*/
              *(float *)&targetStaggered = fabs(*(float *)&targetStaggered); /*0x618df8*/
              LODWORD(targetStaggered) = Double_To_SInt32(v33); /*0x618e11*/
              v38 = Double_To_SInt32(v33); /*0x618e1e*/
              if ( v38 ) /*0x618e22*/
              {
                if ( v34 <= v37 ) /*0x618e35*/
                {
                  LODWORD(targetStaggered) = Game_RandomLargeInteger(0) % v38; /*0x618e7a*/
                  targetKnockedDowna = (double)SLODWORD(targetStaggered) + targetKnockedDowna; /*0x618e86*/
                  outOptimalDistance = v74; /*0x618e8e*/
                  LODWORD(targetStaggered) = Game_RandomLargeInteger(0) % v38; /*0x618e9d*/
                  v39 = outOptimalDistance - (double)SLODWORD(targetStaggered); /*0x618ea5*/
                }
                else
                {
                  outOptimalDistance = v34; /*0x618e37*/
                  LODWORD(targetStaggered) = Game_RandomLargeInteger(0) % v38; /*0x618e45*/
                  targetKnockedDowna = outOptimalDistance - (double)SLODWORD(targetStaggered); /*0x618e51*/
                  LODWORD(targetStaggered) = Game_RandomLargeInteger(0) % v38; /*0x618e60*/
                  v39 = (double)SLODWORD(targetStaggered) + v74; /*0x618e68*/
                }
                v74 = v39; /*0x618ea9*/
                v34 = targetKnockedDowna; /*0x618eb1*/
                v37 = v74; /*0x618eb7*/
                v33 = 0.0; /*0x618eb7*/
              }
              if ( v37 >= v34 ) /*0x618ec0*/
                v34 = v37; /*0x618ec2*/
            }
          }
          targetKnockedDown_4a = v34; /*0x618ec8*/
          v40 = fCostant_100 - targetKnockedDown_4a; /*0x618ed2*/
          if ( g_GameSettingStringPointers_B36CD8[0x114] >= v40 ) /*0x618ee5*/
            v40 = g_GameSettingStringPointers_B36CD8[0x114]; /*0x618eeb*/
          v41 = 1; /*0x618eed*/
          outMaximumDistance = v40; /*0x618ef2*/
          if ( *((_DWORD *)this + 0x1B) == 1 ) /*0x618ef9*/
            outMaximumDistance = v33; /*0x618efd*/
          if ( v70 ) /*0x618f08*/
          {
            if ( !v72 ) /*0x618f0f*/
              outMaximumDistance = v33; /*0x618f13*/
          }
          if ( *((_DWORD *)this + 0x1E) == 2 ) /*0x618f21*/
          {
            v42 = v33; /*0x618f23*/
            v43 = targetKnockedDown_4a; /*0x618f23*/
            outMaximumDistance = v42; /*0x618f25*/
          }
          else
          {
            v43 = targetKnockedDown_4a; /*0x618f2b*/
          }
          v44 = Double_To_SInt32(v43 + outMaximumDistance); /*0x618f38*/
          if ( v44 <= 0 ) /*0x618f3a*/
            v44 = 0x64; /*0x618f3c*/
          *(float *)&targetStaggered = (float)(Game_RandomLargeInteger(0) % v44); /*0x618f56*/
          v45 = targetKnockedDown_4a; /*0x618f5e*/
          if ( targetKnockedDown_4a <= (double)*(float *)&targetStaggered /*0x618f7e*/
            || (v40 = v74, targetKnockedDowna > (double)v74) )
          {
            if ( v45 <= *(float *)&targetStaggered || v74 >= (double)targetKnockedDowna || v70 ) /*0x619098*/
            {
              if ( *((_DWORD *)this + 0x1E) != 2 ) /*0x619137*/
              {
                v53 = *((void **)this + 0xF); /*0x61913c*/
                *((_DWORD *)this + 0x1E) = *((_DWORD *)this + 0x1D); /*0x61913f*/
                *((_DWORD *)this + 0x1D) = 2; /*0x619142*/
                v54 = Actor_GetEffectiveCombatStyle(v53); /*0x61914d*/
                v55 = Actor_GetEffectiveCombatStyle(*((void **)this + 0xF)); /*0x619154*/
                maximumDistancea = ((double (__thiscall *)(int *))*(_DWORD *)(*v54 + 0x140))(v54); /*0x61916d*/
                surfaceDistance = ((double (__thiscall *)(int *))*(_DWORD *)(*v55 + 0x13C))(v55); /*0x619173*/
                *(float *)&targetStaggered = RandomFloatBetween(surfaceDistance, maximumDistancea); /*0x61917b*/
                *((float *)this + 0x38) = *((float *)this + 0x11); /*0x619185*/
                *((float *)this + 0x39) = *(float *)&targetStaggered; /*0x61918f*/
                *((float *)this + 0x3A) = kTerrainLODQuadRayDirectionZ; /*0x61919b*/
              }
            }
            else
            {
              if ( *((_BYTE *)this + 0x49) ) /*0x61909e*/
              {
                Actor_UpdateBlockingState(*((Actor **)this + 0xF), 0); /*0x6190a9*/
                if ( *((_DWORD *)this + 0x1D) == 1 ) /*0x6190b1*/
                {
                  *((_DWORD *)this + 0x1E) = 1; /*0x6190b3*/
                  *((_DWORD *)this + 0x1D) = 3; /*0x6190b6*/
                }
              }
              v50 = CombatController_GetCurrentTarget((int)this); /*0x6190bf*/
              if ( v50 ) /*0x6190c6*/
                v51 = (void *)(v50 + 0x68); /*0x6190c8*/
              else
                v51 = 0; /*0x6190cd*/
              if ( CombatController_TryUseMagicItem( /*0x6190d9*/
                     (int)this,
                     v40,
                     v74,
                     targetKnockedDowna,
                     *((int **)this + 0x20),
                     v51) )
              {
                v52 = *((float *)this + 0x11); /*0x6190e9*/
                *((_DWORD *)this + 0x1E) = *((_DWORD *)this + 0x1D); /*0x6190ec*/
                *(float *)&targetStaggered = v52; /*0x6190ef*/
                *((_DWORD *)this + 0x1D) = 0; /*0x6190f8*/
                *(float *)&outOptimalDistance = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x184]); /*0x619106*/
                *((float *)this + 0x41) = *(float *)&targetStaggered; /*0x619110*/
                *((float *)this + 0x42) = *(float *)&outOptimalDistance; /*0x61911b*/
                *((float *)this + 0x43) = kTerrainLODQuadRayDirectionZ; /*0x619127*/
              }
            }
          }
          else
          {
            if ( *((_BYTE *)this + 0x49) ) /*0x618f84*/
            {
              Actor_UpdateBlockingState(*((Actor **)this + 0xF), 0); /*0x618f93*/
              if ( *((_DWORD *)this + 0x1D) == 1 ) /*0x618f9b*/
              {
                *((_DWORD *)this + 0x1E) = 1; /*0x618f9d*/
                *((_DWORD *)this + 0x1D) = 3; /*0x618fa0*/
              }
            }
            v46 = CombatController_GetCurrentTarget((int)this); /*0x618fa9*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 0x154))(v46) ) /*0x618fb8*/
            {
              CombatController_ApplySelectedPoisonToWeapon((int)this, 1, v40, v45, targetKnockedDown_4a); /*0x618fc4*/
              LODWORD(targetStaggered) = Game_RandomLargeInteger(0); /*0x618fd0*/
              targetStaggered = (double)SLODWORD(targetStaggered) / dbl_A3D5A8; /*0x618fe6*/
              v47 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x98]); /*0x618fef*/
              if ( v47 >= targetStaggered ) /*0x618ffa*/
              {
                v41 = *((_DWORD *)this + 0xF); /*0x618ffc*/
                v48 = (double (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v41 + 0x308); /*0x619008*/
                v49 = CombatController_GetCurrentTarget((int)this); /*0x61900e*/
                v47 = (*v48)(v41, v49, 0, 0); /*0x619018*/
              }
              CombatController_TryStartAttackAction((int)this, 2, v41, v45, v47, 0x13, 0); /*0x619020*/
              if ( HIBYTE(v68) ) /*0x61902a*/
              {
                *(float *)&targetStaggered = *((float *)this + 0x11); /*0x619038*/
                *(float *)&outOptimalDistance = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xA8]); /*0x619044*/
                *((float *)this + 0x6C) = *(float *)&targetStaggered; /*0x61904e*/
                *((float *)this + 0x6D) = *(float *)&outOptimalDistance; /*0x619058*/
                *((float *)this + 0x6E) = kTerrainLODQuadRayDirectionZ; /*0x619064*/
              }
            }
          }
        }
      }
    }
  }
}
