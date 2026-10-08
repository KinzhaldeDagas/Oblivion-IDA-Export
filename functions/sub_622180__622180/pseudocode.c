// Executes the live combat mode. Mode 3 validates selected touch/melee spell at +0x7C; mode 4 validates selected ranged spell at +0x80; invalid choices transition to mode 0xD.
void __usercall CombatController_UpdateActiveMode(
        int a1@<ecx>,
        char a2@<bpl>,
        unsigned int *a3@<edi>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>)
{
  EntryData *v12; // ebx
  double v13; // st7
  char *Name; // eax
  TESObjectREFR *v15; // ebp
  TESObjectREFR *CurrentTarget; // eax
  _DWORD *v17; // eax
  Actor *v18; // ebp
  TESObjectREFR *v19; // eax
  int v20; // edx
  int *EffectiveCombatStyle; // eax
  int v22; // eax
  _BYTE *v23; // eax
  int v24; // eax
  double (__thiscall ***v25)(_DWORD, _DWORD); // ebp
  int v26; // ebx
  char *v27; // eax
  TESObjectREFR *v28; // ebp
  TESObjectREFR *v29; // eax
  Actor *v30; // ebp
  TESObjectREFR *v31; // eax
  int v32; // ebp
  int v33; // edx
  Actor *v34; // ecx
  _DWORD **v35; // ecx
  int v36; // eax
  void *v37; // eax
  _BYTE *v38; // edi
  Actor *v39; // ecx
  int v40; // edi
  int v41; // eax
  void *v42; // eax
  int *v43; // eax
  bool v44; // zf
  int *v45; // eax
  char v46; // [esp-8h] [ebp-30h]
  char v47; // [esp-8h] [ebp-30h]
  bool v48; // [esp-4h] [ebp-2Ch]
  bool v49; // [esp-4h] [ebp-2Ch]
  double Charge; // [esp+14h] [ebp-14h]
  double v51; // [esp+14h] [ebp-14h]

  v12 = (EntryData *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))( /*0x6221bd*/
                       *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                       1,
                       a11,
                       a10,
                       a9,
                       a8,
                       a7,
                       a6,
                       a5,
                       a4);
  if ( !sub_613880(a1, a2, (unsigned __int8)a3, a9) && *(_DWORD *)(a1 + 0x6C) != 7 ) /*0x6221d2*/
  {
    v13 = sub_61FF40(a1); /*0x6221da*/
    if ( !v12 ) /*0x6221e1*/
    {
      a3 = *(unsigned int **)(a1 + 0x70); /*0x6221e7*/
      if ( a3 == (unsigned int *)1 || a3 == (unsigned int *)2 || a3 == (unsigned int *)0xD ) /*0x6221fb*/
      {
        if ( *(_DWORD *)(a1 + 0xA8) ) /*0x622208*/
        {
          if ( *(_DWORD *)(a1 + 0x98) ) /*0x622215*/
          {
            if ( unk_B3B908 ) /*0x622227*/
            {
              Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x622238*/
              Interface_ConsolePrint("%.20s is going to %s!", Name, "attempt to Yield"); /*0x622243*/
            }
            v13 = kTerrainLODQuadRayDirectionZ; /*0x62224b*/
            *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x622251*/
            v15 = *(TESObjectREFR **)(a1 + 0x3C); /*0x622257*/
            *(_DWORD *)(a1 + 0x70) = 5; /*0x62225c*/
            CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x622263*/
            *(_DWORD *)(a1 + 0xC8) = TESIdleForm_FindIdleForActor( /*0x622278*/
                                       (TESObjectREFR *)dword_B361CC[0x3D],
                                       v15,
                                       CurrentTarget);
            CombatController_SetCombatMode(a1, (int)a3); /*0x62227e*/
            v17 = (_DWORD *)FormHeapAlloc(0xCu); /*0x622285*/
            a3 = 0; /*0x622291*/
            if ( v17 ) /*0x622299*/
              a3 = ContainerEntryExtraData_constr(v17, *(_DWORD *)(a1 + 0xA8), 0); /*0x6222aa*/
            v18 = *(Actor **)(a1 + 0x3C); /*0x6222b7*/
            v48 = *(_DWORD *)(a1 + 0xC8) != 0; /*0x6222c7*/
            v46 = *(_BYTE *)(a1 + 0x4D); /*0x6222c8*/
            v19 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x6222cb*/
            CombatSelection_EvaluateWeaponVsHandToHand(v18, (EntryData *)a3, v19, 0, v46, v48); /*0x6222d3*/
            if ( a3 ) /*0x6222dd*/
            {
              ContainerEntryExtraData_DestroyDataTable(a3, v20); /*0x6222e1*/
              FormHeapFree((unsigned int)a3); /*0x6222e7*/
            }
          }
        }
        if ( *(_DWORD *)(a1 + 0x6C) == 7 ) /*0x6222f8*/
          return; /*0x6222f8*/
        if ( !*(_BYTE *)(a1 + 0x48) && sub_5E1CF0(*(void **)(a1 + 0x3C)) ) /*0x62230b*/
        {
          EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x62231b*/
          if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*EffectiveCombatStyle + 0x168))(EffectiveCombatStyle, 1) ) /*0x62232c*/
          {
            v22 = sub_5E0A90(*(_DWORD ***)(a1 + 0x3C), 0xD); /*0x62233a*/
            a3 = (unsigned int *)v22; /*0x62233f*/
            if ( v22 ) /*0x622343*/
            {
              v23 = OblivionDynamicCast( /*0x62235b*/
                      *(void **)(v22 + 8),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
              if ( !v23 /*0x62239d*/
                || v23[0x90] != 4
                || (v24 = *((_DWORD *)v23 + 0x19)) != 0
                && (v25 = (double (__thiscall ***)(_DWORD, _DWORD))(v24 + 0x24),
                    Charge = EquippedEntryData_GetCharge((EntryData *)a3),
                    v13 = (**v25)(v25, 0),
                    v13 <= Charge) )
              {
                v26 = *(_DWORD *)(a1 + 0x70); /*0x6223a3*/
                if ( v26 != 5 ) /*0x6223a9*/
                {
                  if ( unk_B3B908 ) /*0x6223ab*/
                  {
                    v27 = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x6223bc*/
                    Interface_ConsolePrint("%.20s is going to %s!", v27, "attempt to Yield"); /*0x6223c7*/
                  }
                  *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x6223d5*/
                }
                v28 = *(TESObjectREFR **)(a1 + 0x3C); /*0x6223db*/
                *(_DWORD *)(a1 + 0x70) = 5; /*0x6223e0*/
                v29 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x6223e7*/
                *(_DWORD *)(a1 + 0xC8) = TESIdleForm_FindIdleForActor((TESObjectREFR *)dword_B361CC[0x3D], v28, v29); /*0x6223fc*/
                CombatController_SetCombatMode(a1, v26); /*0x622402*/
                v30 = *(Actor **)(a1 + 0x3C); /*0x622412*/
                v49 = *(_DWORD *)(a1 + 0xC8) != 0; /*0x622418*/
                v47 = *(_BYTE *)(a1 + 0x4D); /*0x622419*/
                v31 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x62241e*/
                v32 = CombatSelection_EvaluateWeaponVsHandToHand(v30, (EntryData *)a3, v31, 0, v47, v49); /*0x622430*/
                ContainerEntryExtraData_DestroyDataTable(a3, v33); /*0x622432*/
                FormHeapFree((unsigned int)a3); /*0x622438*/
                if ( v32 == 1 || v32 == 2 ) /*0x622448*/
                {
                  sub_619920(a1, 7); /*0x622472*/
                  if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x62247f*/
                    *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x622487*/
                  v34 = *(Actor **)(a1 + 0x3C); /*0x62248d*/
                  *(_DWORD *)(a1 + 0x70) = 0xD; /*0x622494*/
                  sub_5F5170(v34, 0, 1); /*0x622497*/
                  *(_BYTE *)(a1 + 0x48) = 1; /*0x62249c*/
                }
                else
                {
                  CombatController_SetCombatMode(a1, v32); /*0x62244d*/
                  sub_5E0A70(*(_DWORD ***)(a1 + 0x3C)); /*0x622455*/
                }
                return; /*0x62246d*/
              }
            }
            v35 = *(_DWORD ***)(a1 + 0x3C); /*0x6224b9*/
            *(_BYTE *)(a1 + 0x48) = 1; /*0x6224bc*/
            sub_5E0A70(v35); /*0x6224c0*/
          }
        }
      }
    }
    switch ( *(_DWORD *)(a1 + 0x70) ) /*0x6224d8*/
    {
      case 0: /*0x6224d8*/
        if ( !*(_BYTE *)(a1 + 0x1BC) /*0x6224fa*/
          || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) )
        {
          goto LABEL_74; /*0x6224fe*/
        }
        goto LABEL_42; /*0x6224fe*/
      case 1: /*0x6224d8*/
        if ( v12 && ContainerEntryExtraData_GetHealth((void **)&v12->extendData, 0) > *(float *)&SrcStr ) /*0x62253a*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) ) /*0x62254a*/
            goto LABEL_74; /*0x62254e*/
          goto LABEL_42; /*0x62254e*/
        }
        if ( *(_BYTE *)(a1 + 0x131) ) /*0x622572*/
          goto LABEL_60; /*0x622579*/
        v36 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x2B8))(*(_DWORD *)(a1 + 0x3C), 5); /*0x62258c*/
        if ( v36 /*0x6225a3*/
          || (v36 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x2B8))(*(_DWORD *)(a1 + 0x3C), 4)) != 0 )
        {
          v37 = OblivionDynamicCast( /*0x6225b7*/
                  *(void **)(v36 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectWEAP `RTTI Type Descriptor',
                  0);
          sub_61C680(a1, (int)v37); /*0x6225c2*/
        }
        *(_BYTE *)(a1 + 0x130) = 1; /*0x6225c7*/
        return; /*0x6225e1*/
      case 2: /*0x6224d8*/
        if ( v12 ) /*0x6225e4*/
        {
          v38 = OblivionDynamicCast( /*0x622601*/
                  v12->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectWEAP `RTTI Type Descriptor',
                  0);
          if ( v38 ) /*0x622608*/
          {
            if ( ContainerEntryExtraData_GetHealth((void **)&v12->extendData, 0) > *(float *)&SrcStr ) /*0x622622*/
            {
              if ( v38[0x90] == 5 /*0x622641*/
                && !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xF4))(
                      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                      1) )
              {
                sub_619920(a1, 7); /*0x62264b*/
                if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x622653*/
                  *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x62265b*/
                v39 = *(Actor **)(a1 + 0x3C); /*0x622661*/
                *(_DWORD *)(a1 + 0x70) = 0xD; /*0x622668*/
                sub_5F5170(v39, 1, 5); /*0x62266b*/
                return; /*0x622683*/
              }
              if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) ) /*0x622696*/
              {
LABEL_42:
                sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 1); /*0x622554*/
                return; /*0x622571*/
              }
              if ( v38[0x90] != 4 /*0x6226d0*/
                || (v40 = *((_DWORD *)v38 + 0x19)) != 0
                && (v51 = EquippedEntryData_GetCharge(v12),
                    ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v40 + 0x24))(v40 + 0x24, 0) <= v51) )
              {
LABEL_74:
                if ( *(_DWORD *)(a1 + 0x6C) != 0xC ) /*0x62278c*/
                  CombatController_UpdateCombatModeState((void *)a1); /*0x622790*/
                return; /*0x622790*/
              }
LABEL_60:
              if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x6226d9*/
                *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x6226e1*/
              *(_DWORD *)(a1 + 0x70) = 0xD; /*0x6226e7*/
              return; /*0x6226fd*/
            }
          }
        }
        if ( *(_BYTE *)(a1 + 0x130) ) /*0x6226fe*/
          goto LABEL_60; /*0x622705*/
        v41 = sub_612960((_DWORD **)a1, 1); /*0x62270b*/
        if ( v41 ) /*0x622712*/
        {
          v42 = OblivionDynamicCast( /*0x622726*/
                  *(void **)(v41 + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectWEAP `RTTI Type Descriptor',
                  0);
          sub_61C680(a1, (int)v42); /*0x622731*/
        }
        *(_BYTE *)(a1 + 0x131) = 1; /*0x622736*/
        break; /*0x622750*/
      case 3: /*0x6224d8*/
        v43 = *(int **)(a1 + 0x7C); /*0x622751*/
        if ( v43 /*0x62276c*/
          && !CombatController_CanUseSpellAgainstCurrentTarget((_DWORD *)a1, v43, *(unsigned __int8 *)(a1 + 0x17C), 1) )
        {
          goto LABEL_71; /*0x62276c*/
        }
        v44 = *(_DWORD *)(a1 + 0x7C) == 0; /*0x62276e*/
        goto LABEL_70; /*0x62276e*/
      case 4: /*0x6224d8*/
        v45 = *(int **)(a1 + 0x80); /*0x6227a9*/
        if ( v45 /*0x6227c7*/
          && !CombatController_CanUseSpellAgainstCurrentTarget((_DWORD *)a1, v45, *(unsigned __int8 *)(a1 + 0x17C), 1) )
        {
          goto LABEL_71; /*0x6227c7*/
        }
        v44 = *(_DWORD *)(a1 + 0x80) == 0; /*0x6227c9*/
LABEL_70:
        if ( v44 ) /*0x622772*/
        {
LABEL_71:
          if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x622777*/
            *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x62277f*/
          *(_DWORD *)(a1 + 0x70) = 0xD; /*0x622785*/
        }
        goto LABEL_74; /*0x622785*/
      case 8: /*0x6224d8*/
        sub_61D7E0(a1, (char)a3, a9, v13, a10, a8); /*0x6227dd*/
        return; /*0x6227dd*/
      case 9: /*0x6224d8*/
        sub_619810(a1, v13); /*0x6227d4*/
        goto LABEL_74; /*0x6227d9*/
      default:
        goto LABEL_74;
    }
  }
}
