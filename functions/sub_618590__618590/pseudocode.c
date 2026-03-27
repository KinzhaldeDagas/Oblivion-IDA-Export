// local variable allocation has failed, the output may be wrong!
double __usercall sub_618590@<st0>(int a1@<ebx>, int a2@<edi>, double result@<st0>, Actor *a4, int a5)
{
  TESObjectREFR *v5; // edi
  int v6; // eax
  TESObjectREFRVtbl *vtbl; // edx
  double v8; // st7
  bool (__thiscall *HasFatigue)(TESObjectREFR *); // eax
  double v10; // st7
  void (__thiscall *Unk_37)(TESObjectREFR *); // eax
  int v12; // eax
  TESObjectREFRVtbl *v13; // edx
  double v14; // st7
  void (__thiscall *v15)(TESObjectREFR *); // eax
  int v16; // eax
  int *process; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  void **v21; // eax
  CombatController *(__thiscall *GetCombatController)(Actor *); // edx
  CombatController *v23; // eax
  int *v24; // ebx
  CombatController *v25; // eax
  int *v26; // ebx
  CombatController *(__thiscall *v27)(Actor *); // eax
  int SchoolAV; // eax
  TESObjectREFRVtbl *v29; // edx
  float *v30; // eax
  int v31; // [esp+24h] [ebp-34h]
  float FatigueFraction; // [esp+28h] [ebp-30h]
  char v33; // [esp+2Ch] [ebp-2Ch]
  float v34; // [esp+2Ch] [ebp-2Ch]
  int v35; // [esp+30h] [ebp-28h]
  int v36; // [esp+30h] [ebp-28h]
  double v38; // [esp+3Ch] [ebp-1Ch] BYREF
  float v39; // [esp+44h] [ebp-14h] BYREF
  int v40; // [esp+48h] [ebp-10h]
  int v41; // [esp+4Ch] [ebp-Ch] BYREF
  float v42; // [esp+50h] [ebp-8h]
  int v43; // [esp+54h] [ebp-4h] OVERLAPPED

  if ( a4->vtbl->GetCombatController(a4) )
  {
    v5 = (TESObjectREFR *)a4->vtbl->GetCombatTarget(a4);
    if ( !v5 || v5->vtbl->IsDead(v5, 0) )
    {
      ((void (__thiscall *)(Actor *, TESObjectREFR *))a4->vtbl->Unk_D0)(a4, v5);
      sub_5EAE70(a4, a1, a2, (int)a4);
      return result;
    }
    if ( v5 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      *(float *)&v40 = (fCostant_100 - (double)a4->vtbl->GetActorValue(a4, kActorVal_Luck)) / flt_B36C78;
      result = *(float *)&v40;
      v40 = GetRandomLargeInteger_(0) % 0x64;
      if ( (double)v40 > result )
      {
        v6 = ((int (__thiscall *)(TESObjectREFR *, int, int))v5->vtbl[1].Unk_37)(v5, 0x41, a2);
        vtbl = v5->vtbl;
        v41 = v6;
        v8 = (double)v6;
        HasFatigue = vtbl[1].HasFatigue;
        *(double *)&v43 = v8;
        v10 = ((double (__thiscall *)(TESObjectREFR *))HasFatigue)(v5);
        Unk_37 = v5->vtbl[1].Unk_37;
        v42 = v10 / fCostant_100 * *(double *)&v43;
        v12 = ((int (__thiscall *)(TESObjectREFR *, int))Unk_37)(v5, 2);
        v13 = v5->vtbl;
        v41 = v12;
        v14 = (double)v12;
        v15 = v13[1].Unk_37;
        *(double *)&v43 = v14 * dbl_A70398;
        v16 = ((int (__thiscall *)(TESObjectREFR *, int))v15)(v5, 0x40);
        process = (int *)a4->members.super.process;
        *(float *)&v43 = (double)v16 + *(double *)&v43;
        *(float *)&a5 = 0.0;
        v18 = *process;
        *((float *)&v38 + 1) = 0.0;
        if ( (*(int (__thiscall **)(int *, int))(v18 + 0xEC))(process, 1) )
        {
          v20 = (int)a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1);
          if ( v20 )
          {
            if ( OblivionDynamicCast(
                   *(void **)(v20 + 8),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectWEAP `RTTI Type Descriptor',
                   0) )
            {
              *(float *)&a5 = ((double (__thiscall *)(LowProcess *))a4->members.super.process->GetUnk0F8)(a4->members.super.process);
              if ( *(float *)&a5 <= 0.0 )
              {
                v21 = (void **)a4->members.super.process->GetEquippedWeaponData(a4->members.super.process, 1);
                *(float *)&a5 = sub_612A90(a4, v21);
                ((void (__thiscall *)(LowProcess *, int))a4->members.super.process->SetUnk0F8)(
                  a4->members.super.process,
                  a5);
              }
            }
          }
        }
        else
        {
          *(float *)&v41 = 0.0;
          FatigueFraction = Actor_GetFatigueFraction(a4, a1, (int)v5);
          v33 = ((int (__thiscall *)(Actor *, _DWORD, _DWORD, int))a4->vtbl->GetActorValue)(
                  a4,
                  0,
                  LODWORD(FatigueFraction),
                  1);
          v31 = ((int (__thiscall *)(Actor *))a4->vtbl->GetActorValue)(a4);
          v19 = ((int (__thiscall *)(Actor *))a4->vtbl->GetActorValue)(a4);
          Calc_HandToHandDamage(v19, 0x11, v31, COERCE_FLOAT(7), v33, (float *)&a5, (float *)&v41);
        }
        GetCombatController = a4->vtbl->GetCombatController;
        *(float *)&v40 = *(float *)&a5 / fCostant_100;
        *(float *)&v41 = 0.0;
        v39 = 0.0;
        v35 = *((unsigned __int8 *)GetCombatController(a4) + 0x17C);
        v23 = a4->vtbl->GetCombatController(a4);
        v24 = sub_616980(v23, 0.0, (float *)&v38 + 1, 3, v35);
        *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F) = v24;
        v36 = *((unsigned __int8 *)a4->vtbl->GetCombatController(a4) + 0x17C);
        v25 = a4->vtbl->GetCombatController(a4);
        v26 = sub_616980(v25, 0.0, &v39, 4, v36);
        *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) = v26;
        if ( *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F)
          && !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) )
        {
          a4->vtbl->GetCombatController(a4);
LABEL_24:
          SchoolAV = EffectItemList_GetSchoolAV();
          goto LABEL_25;
        }
        if ( *((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F)
          || !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) )
        {
          if ( !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x1F)
            || !*((_DWORD *)a4->vtbl->GetCombatController(a4) + 0x20) )
          {
            goto LABEL_26;
          }
          v27 = a4->vtbl->GetCombatController;
          if ( *((float *)&v38 + 1) >= (double)v39 )
          {
            v27(a4);
            goto LABEL_24;
          }
          v27(a4);
        }
        else
        {
          a4->vtbl->GetCombatController(a4);
        }
        SchoolAV = EffectItemList_GetSchoolAV();
        *((float *)&v38 + 1) = v39;
LABEL_25:
        *(float *)&v41 = COERCE_FLOAT(a4->vtbl->GetActorValue(a4, (AVCode)SchoolAV));
        *(float *)&v41 = (double)v41 * *((float *)&v38 + 1) / fCostant_100;
LABEL_26:
        v29 = v5->vtbl;
        v42 = *(float *)&v40 - v42;
        *(float *)&v43 = *(float *)&v41 - *(float *)&v43;
        if ( *(float *)&v43 >= (double)v42 )
          result = *((float *)&v38 + 1);
        else
          result = *(float *)&a5;
        v34 = result;
        ((void (__stdcall *)(_DWORD, _DWORD))v29[1].super.Unk_1E)(LODWORD(v34), 0.0);
        if ( v5->vtbl->IsDead(v5, 0) )
        {
          v30 = (float *)a4->vtbl->GetCombatController(a4);
          sub_6162D0(v30, v5);
        }
      }
    }
  }
  return result;
}
