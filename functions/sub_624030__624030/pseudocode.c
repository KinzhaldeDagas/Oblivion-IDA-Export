// Refreshes detection/allies tactical state; allied controllers in active modes 2 (ranged weapon) and 4 (ranged spell) are counted as ranged roles.
double __userpurge sub_624030@<st0>(int a1@<ecx>, Actor *a2@<edi>, double result@<st0>, char a4)
{
  double v5; // st6
  double v6; // st5
  bool v7; // zf
  TESObjectREFR *v8; // eax
  int *v9; // eax
  int v10; // eax
  TESObjectREFR *v11; // eax
  char v12; // al
  char v13; // al
  int v14; // eax
  TESObjectREFR *v15; // edi
  bool v16; // bl
  TESObjectREFR *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  signed int v21; // eax
  TESObjectREFR *v22; // eax
  int *v23; // ecx
  int v24; // ebx
  _DWORD *v25; // edi
  int **v26; // ebp
  int *v27; // edx
  int v28; // eax
  PlayerCharacter *v29; // [esp+0h] [ebp-18h]
  char v30; // [esp+4h] [ebp-14h]
  char v31; // [esp+8h] [ebp-10h]
  float v32; // [esp+14h] [ebp-4h]
  _DWORD *v33; // [esp+1Ch] [ebp+4h]
  float v34; // [esp+1Ch] [ebp+4h]

  if ( *(_DWORD *)(a1 + 0x3C) && CombatController_GetCurrentTarget(a1) ) /*0x62403e*/
  {
    v5 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0x140); /*0x62404f*/
    v31 = (char)a2; /*0x624055*/
    v6 = *(float *)(a1 + 0x144); /*0x624056*/
    if ( v6 >= v5 && !a4 && *(char *)(a1 + 0x1AC) < 0 ) /*0x624073*/
      goto LABEL_47; /*0x624073*/
    v7 = *(_BYTE *)(a1 + 0x1AC) == 0; /*0x624079*/
    if ( *(char *)(a1 + 0x1AC) < 0 ) /*0x624080*/
    {
      *(_BYTE *)(a1 + 0x1AC) = 0; /*0x624082*/
      v7 = *(_BYTE *)(a1 + 0x1AC) == 0; /*0x624089*/
    }
    if ( v7 ) /*0x624090*/
    {
      a2 = *(Actor **)(a1 + 0x3C); /*0x624092*/
      v8 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x62409d*/
      *(_BYTE *)(a1 + 0x158) = Actor_LineOfSight(a2, result, 0, v8, 0, 0, 0); /*0x6240ac*/
    }
    if ( *(_BYTE *)(a1 + 0x1AC) == 1 ) /*0x6240b9*/
    {
      v5 = kTerrainLODQuadRayDirectionZ; /*0x6240bb*/
      a2 = *(Actor **)(a1 + 0x3C); /*0x6240c1*/
      v9 = (int *)CombatController_GetCurrentTarget(a1); /*0x6240ce*/
      *(_BYTE *)(a1 + 0x159) = Actor_CheckAlliesBlockingRangedTarget((PlayerCharacter *)a2, v9, 1) != 0;// Refresh phase 1 checks firing-lane allies using actor,currentTarget,requireInCombat=1; nonzero result stored as CombatController+0x159. /*0x6240e2*/
    }
    if ( *(_BYTE *)(a1 + 0x1AC) == 2 ) /*0x6240ef*/
    {
      if ( a4 /*0x62410a*/
        || *(_DWORD *)(a1 + 0x70) == 0xD
        || (v10 = *(_DWORD *)(a1 + 0x6C), v10 != 4) && v10 && *(_DWORD *)(a1 + 0x74) )
      {
        a2 = *(Actor **)(a1 + 0x3C); /*0x624120*/
        v30 = *(_BYTE *)(a1 + 0x158); /*0x624123*/
        v11 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x624126*/
        *(_BYTE *)(a1 + 0x174) = sub_617590((TESChildCELL *)a2, v11, v30); /*0x624135*/
      }
      else
      {
        *(_BYTE *)(a1 + 0x1AC) = 3; /*0x624110*/
      }
    }
    v12 = *(_BYTE *)(a1 + 0x1AC); /*0x62413b*/
    if ( v12 == 3 || v12 == 4 || v12 == 5 || v12 == 6 ) /*0x62414f*/
    {
      do /*0x624171*/
      {
        v13 = *(_BYTE *)(a1 + 0x1AC); /*0x624151*/
        if ( v13 >= 7 ) /*0x624159*/
          break; /*0x624159*/
        result = sub_614550(a1, *(float *)&a2, result, v5, v13 - 3); /*0x624164*/
        *(_BYTE *)(a1 + 0x1AC) += v14; /*0x624169*/
      }
      while ( v14 > 0 ); /*0x624171*/
    }
    if ( *(_BYTE *)(a1 + 0x191) ) /*0x624173*/
    {
      if ( *(_BYTE *)(a1 + 0x1AC) != 7 ) /*0x624183*/
      {
LABEL_37:
        if ( (char)++*(_BYTE *)(a1 + 0x1AC) > 7 ) /*0x624251*/
        {
          if ( *(_BYTE *)(a1 + 0x1BD) ) /*0x624257*/
            *(_BYTE *)(a1 + 0x1BD) = 0; /*0x624260*/
          *(_BYTE *)(a1 + 0x1AC) = 0xFF; /*0x624269*/
          v22 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x624270*/
          if ( Actor_IsPlayer(v22) ) /*0x624277*/
          {
            if ( unk_B3B914 > dword_B14B94 ) /*0x62428b*/
              v23 = (int *)&unk_B14BA4; /*0x624294*/
            else
              v23 = (int *)&unk_B14B9C; /*0x62428d*/
          }
          else
          {
            v23 = (int *)&unk_B14BBC; /*0x6242a7*/
            if ( unk_B3B914 > dword_B14BB4 ) /*0x6242ac*/
              v23 = (int *)&unk_B14BC4; /*0x6242ae*/
          }
          v32 = *(float *)GameSetting_GetSafeFloatPointer(v23); /*0x6242ba*/
          *(float *)(a1 + 0x140) = *(float *)(a1 + 0x44); /*0x6242c1*/
          *(float *)(a1 + 0x144) = v32; /*0x6242cb*/
          *(float *)(a1 + 0x148) = kTerrainLODQuadRayDirectionZ; /*0x6242d7*/
        }
LABEL_47:
        if ( *(float *)(a1 + 0x150) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x14C) || a4 ) /*0x6242fa*/
        {
          BSSimpleList_Clear((_DWORD *)(a1 + 0x15C)); /*0x624306*/
          v24 = 0; /*0x62430e*/
          v29 = *(PlayerCharacter **)(a1 + 0x3C); /*0x624311*/
          *(_DWORD *)(a1 + 0x178) = 0; /*0x624317*/
          *(_BYTE *)(a1 + 0x17C) = 0; /*0x62431d*/
          v25 = CombatGroupManager_BuildFriendlyEntryList((int *)&qword_B3BB2C[0xA1], v29, 0); /*0x624328*/
          v33 = v25; /*0x62432c*/
          if ( !v25 ) /*0x624330*/
            goto LABEL_57; /*0x624330*/
          do /*0x624377*/
          {
            v26 = (int **)*v25; /*0x624333*/
            v27 = *(int **)*v25; /*0x624335*/
            v25 = (_DWORD *)v25[1]; /*0x624338*/
            if ( CombatController_CacheAlly(a1, v24, v27) ) /*0x62433e*/
            {
              if ( (*(int (__thiscall **)(int *))(**v26 + 0x330))(*v26) ) /*0x624352*/
              {
                v28 = *(_DWORD *)((*(int (__thiscall **)(int *))(**v26 + 0x330))(*v26) + 0x70); /*0x624365*/
                if ( v28 == 2 || v28 == 4 ) /*0x624370*/
                  ++v24; /*0x624372*/
              }
            }
          }
          while ( v25 ); /*0x624377*/
          BSSimpleList_Clear(v33); /*0x62437f*/
          FormHeapFree((unsigned int)v33); /*0x624385*/
          if ( !v24 ) /*0x624390*/
LABEL_57:
            *(_BYTE *)(a1 + 0x15A) = 0; /*0x624392*/
          v34 = g_GameSettingStringPointers_B36CD8[0x16A];// Cached allies refresh interval is live game setting fCombatCollectAlliesTimer (default 1.0 s). /*0x62439f*/
          *(float *)(a1 + 0x14C) = *(float *)(a1 + 0x44); /*0x6243a6*/
          *(float *)(a1 + 0x150) = v34; /*0x6243b0*/
          *(float *)(a1 + 0x154) = kTerrainLODQuadRayDirectionZ; /*0x6243bc*/
        }
        return result; /*0x6243bc*/
      }
      *(_BYTE *)(a1 + 0x191) = 0; /*0x624189*/
    }
    if ( *(_BYTE *)(a1 + 0x1AC) == 7 ) /*0x624197*/
    {
      v15 = *(TESObjectREFR **)(a1 + 0x3C); /*0x6241a9*/
      v16 = *(_DWORD *)(a1 + 0x1A8) < SLODWORD(g_GameSettingStringPointers_B36CD8[0x186]); /*0x6241bb*/
      v17 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x6241be*/
      Actor_GetDetectionLevelAgainstActor(v15, (int)v15, v6, v5, result, 0, v17, (_BYTE *)(a1 + 0x158), 1, 0, 0, v31); /*0x6241c8*/
      *(_DWORD *)(a1 + 0x1A8) = v18; /*0x6241cf*/
      if ( v16 && v18 >= SLODWORD(g_GameSettingStringPointers_B36CD8[0x186]) ) /*0x6241dd*/
      {
        v19 = *(_DWORD *)(a1 + 0x6C); /*0x6241df*/
        if ( v19 == 0xF || v19 == 0xA || v19 == 0xB || v19 == 0xC ) /*0x6241f4*/
        {
          v20 = TESTopic::GetTopic(4, 1); /*0x6241fa*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0xE4) = reference; /*0x62420d*/
          result = ((double (__thiscall *)(_DWORD, _DWORD, int, _DWORD, _DWORD, int))*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) /*0x624227*/
                                                                                               + 0x1A4))(
                     *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                     *(_DWORD *)(a1 + 0x3C),
                     v20,
                     0,
                     0,
                     1);
          v21 = sub_6239D0(a1, v6, v5, result, 0, 0); /*0x62422f*/
          CombatController_SetCombatMode(a1, v21); /*0x624237*/
          sub_61D320(a1); /*0x62423e*/
        }
      }
    }
    goto LABEL_37; /*0x62423e*/
  }
  return result; /*0x6243c4*/
}
