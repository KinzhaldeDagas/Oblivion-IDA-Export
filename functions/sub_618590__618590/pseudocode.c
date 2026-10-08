// local variable allocation has failed, the output may be wrong!
double __usercall sub_618590@<st0>(int a1@<ebx>, int a2@<edi>, double result@<st0>, Actor *a4, int a5)
{
  TESObjectREFR *v5; // edi
  double v6; // st6
  int v7; // eax
  TESObjectREFRVtbl *vtbl; // edx
  double v9; // st7
  bool (__thiscall *HasFatigue)(TESObjectREFR *); // eax
  double v11; // st7
  void (__thiscall *Unk_37)(TESObjectREFR *); // eax
  int v13; // eax
  TESObjectREFRVtbl *v14; // edx
  double v15; // st7
  void (__thiscall *v16)(TESObjectREFR *); // eax
  int v17; // eax
  LowProcess *process; // ecx
  LowProcess_vtbl *v19; // edx
  int v20; // eax
  EntryData *v21; // eax
  EntryData *v22; // eax
  CombatController *(__thiscall *GetCombatController)(Actor *); // edx
  CombatController *v24; // eax
  double v25; // st7
  int v26; // eax
  CombatController *v27; // eax
  int v28; // eax
  CombatController *(__thiscall *v29)(Actor *); // eax
  AVCode SchoolAV; // eax
  TESObjectREFRVtbl *v31; // edx
  float *v32; // eax
  int v33; // [esp+24h] [ebp-34h]
  float FatigueFraction; // [esp+28h] [ebp-30h]
  char v35; // [esp+2Ch] [ebp-2Ch]
  float v36; // [esp+2Ch] [ebp-2Ch]
  int v37; // [esp+30h] [ebp-28h]
  int v38; // [esp+30h] [ebp-28h]
  double v40; // [esp+3Ch] [ebp-1Ch] BYREF
  float v41; // [esp+44h] [ebp-14h] BYREF
  int v42; // [esp+48h] [ebp-10h]
  int v43; // [esp+4Ch] [ebp-Ch] BYREF
  float v44; // [esp+50h] [ebp-8h]
  int v45; // [esp+54h] [ebp-4h] OVERLAPPED

  if ( a4->vtbl->GetCombatController(a4) ) /*0x6185a2*/
  {
    v5 = (TESObjectREFR *)a4->vtbl->GetCombatTarget(a4); /*0x6185b9*/
    if ( !v5 || v5->vtbl->IsDead(v5, 0) ) /*0x6185cf*/
    {
      ((void (__usercall *)(Actor *@<ecx>, TESObjectREFR *, double@<st0>))a4->vtbl->Unk_D0)(a4, v5, result); /*0x6189cb*/
      sub_5EAE70(a4, a1, a2, (int)a4); /*0x6189d4*/
      return result; /*0x6189d4*/
    }
    if ( v5 != (TESObjectREFR *)reference ) /*0x6185df*/
    {
      result = (fCostant_100 /*0x618603*/
              - (double)((int (__usercall *)@<eax>(Actor *@<ecx>, int, double@<st0>))a4->vtbl->GetActorValue)(
                          a4,
                          7,
                          result))
             / unk_B36C78;
      *(float *)&v42 = result; /*0x618609*/
      v6 = *(float *)&v42; /*0x618612*/
      v42 = Game_RandomLargeInteger(0) % 0x64; /*0x61862e*/
      if ( (double)v42 > v6 ) /*0x618640*/
      {
        v7 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, int, double@<st0>))v5->vtbl[1].Unk_37)( /*0x618652*/
               v5,
               0x41,
               a2,
               result);
        vtbl = v5->vtbl; /*0x618654*/
        v43 = v7; /*0x618656*/
        v9 = (double)v7; /*0x61865a*/
        HasFatigue = vtbl[1].HasFatigue; /*0x61865e*/
        *(double *)&v45 = v9; /*0x618666*/
        v11 = ((double (__thiscall *)(TESObjectREFR *))HasFatigue)(v5); /*0x61866a*/
        Unk_37 = v5->vtbl[1].Unk_37; /*0x618674*/
        v44 = v11 / fCostant_100 * *(double *)&v45; /*0x618682*/
        v13 = ((int (__thiscall *)(TESObjectREFR *, int))Unk_37)(v5, 2); /*0x618686*/
        v14 = v5->vtbl; /*0x618688*/
        v43 = v13; /*0x61868a*/
        v15 = (double)v13; /*0x61868e*/
        v16 = v14[1].Unk_37; /*0x618692*/
        *(double *)&v45 = v15 * dbl_A70398; /*0x6186a2*/
        v17 = ((int (__thiscall *)(TESObjectREFR *, int))v16)(v5, 0x40); /*0x6186a6*/
        process = a4->members.super.process; /*0x6186a8*/
        *(float *)&v45 = (double)v17 + *(double *)&v45; /*0x6186b9*/
        *(float *)&a5 = 0.0; /*0x6186bf*/
        v19 = process->__vftable; /*0x6186c3*/
        *((float *)&v40 + 1) = 0.0; /*0x6186c5*/
        if ( v19->GetEquippedWeaponData(process, 1) ) /*0x6186cf*/
        {
          v21 = a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1); /*0x618739*/
          if ( v21 ) /*0x61873d*/
          {
            if ( OblivionDynamicCast( /*0x618751*/
                   v21->type,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectWEAP `RTTI Type Descriptor',
                   0) )
            {
              *(float *)&a5 = ((double (__thiscall *)(LowProcess *))a4->members.super.process->GetUnk0F8)(a4->members.super.process); /*0x61876a*/
              if ( *(float *)&a5 <= 0.0 ) /*0x618779*/
              {
                v22 = a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1); /*0x618788*/
                *(float *)&a5 = sub_612A90(a4, (void **)&v22->extendData); /*0x618791*/
                ((void (__thiscall *)(LowProcess *, int))a4->members.super.process->SetUnk0F8)( /*0x6187ab*/
                  a4->members.super.process,
                  a5);
              }
            }
          }
        }
        else
        {
          *(float *)&v43 = 0.0; /*0x6186dc*/
          FatigueFraction = Actor_GetFatigueFraction(a4, a1, (int)v5); /*0x6186f7*/
          v35 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD, int))a4->vtbl->GetActorValue)( /*0x618700*/
                  a4,
                  0,
                  LODWORD(FatigueFraction),
                  1);
          v33 = ((int (__thiscall *)(Actor *))a4->vtbl->GetActorValue)(a4); /*0x61870f*/
          v20 = ((int (__thiscall *)(Actor *))a4->vtbl->GetActorValue)(a4); /*0x61871c*/
          Calc_HandToHandDamage(v20, 0x11, v33, COERCE_FLOAT(7), v35, (float *)&a5, (float *)&v43); /*0x61871f*/
        }
        GetCombatController = a4->vtbl->GetCombatController; /*0x6187b9*/
        *(float *)&v42 = *(float *)&a5 / fCostant_100; /*0x6187c2*/
        *(float *)&v43 = 0.0; /*0x6187c8*/
        v41 = 0.0; /*0x6187cc*/
        v37 = *((unsigned __int8 *)GetCombatController(a4) + 0x17C); /*0x6187db*/
        v24 = a4->vtbl->GetCombatController(a4); /*0x6187eb*/
        v25 = CombatController_SelectAttackSpellByMode(v24, 0.0, v6, (float *)&v40 + 1, 3, v37); /*0x6187ef*/
        *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F) = v26; /*0x618802*/
        v38 = *((unsigned __int8 *)a4->vtbl->GetCombatController(a4) + 0x17C); /*0x61881a*/
        v27 = a4->vtbl->GetCombatController(a4); /*0x61882a*/
        CombatController_SelectAttackSpellByMode(v27, v25, v6, &v41, 4, v38); /*0x61882e*/
        *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) = v28; /*0x618841*/
        if ( *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F) /*0x618866*/
          && !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) )
        {
          a4->vtbl->GetCombatController(a4); /*0x618879*/
LABEL_24:
          SchoolAV = EffectItemList_GetSchoolAV(); /*0x61891d*/
          goto LABEL_25; /*0x618920*/
        }
        if ( *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F) /*0x6188a3*/
          || !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) )
        {
          if ( !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F) /*0x6188d6*/
            || !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) )
          {
            goto LABEL_26; /*0x6188dd*/
          }
          v29 = a4->vtbl->GetCombatController; /*0x6188f2*/
          if ( *((float *)&v40 + 1) >= (double)v41 ) /*0x6188f8*/
          {
            v29(a4); /*0x618916*/
            goto LABEL_24; /*0x618916*/
          }
          v29(a4); /*0x6188fa*/
        }
        else
        {
          a4->vtbl->GetCombatController(a4); /*0x6188b6*/
        }
        SchoolAV = EffectItemList_GetSchoolAV(); /*0x618907*/
        *((float *)&v40 + 1) = v41; /*0x618910*/
LABEL_25:
        *(float *)&v43 = COERCE_FLOAT(a4->vtbl->GetActorValue(a4, SchoolAV)); /*0x618925*/
        *(float *)&v43 = (double)v43 * *((float *)&v40 + 1) / fCostant_100; /*0x618944*/
LABEL_26:
        v31 = v5->vtbl; /*0x618948*/
        v44 = *(float *)&v42 - v44; /*0x618958*/
        *(float *)&v45 = *(float *)&v43 - *(float *)&v45; /*0x618968*/
        if ( *(float *)&v45 >= (double)v44 ) /*0x618983*/
          result = *((float *)&v40 + 1); /*0x61898b*/
        else
          result = *(float *)&a5; /*0x618985*/
        v36 = result; /*0x61898f*/
        ((void (__stdcall *)(_DWORD, _DWORD))v31[1].super.Unk_1E)(LODWORD(v36), 0.0); /*0x618992*/
        if ( v5->vtbl->IsDead(v5, 0) ) /*0x6189a0*/
        {
          v32 = (float *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))a4->vtbl->GetCombatController)( /*0x6189b1*/
                           a4,
                           result);
          CombatController_RemoveTarget(v32, v5); /*0x6189b5*/
        }
      }
    }
  }
  return result; /*0x6189bb*/
}
