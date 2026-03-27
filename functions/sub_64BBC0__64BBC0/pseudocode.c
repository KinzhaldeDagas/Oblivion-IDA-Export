char __userpurge sub_64BBC0@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        Actor *a5,
        Actor *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13,
        int a14)
{
  int v14; // edi
  Actor *v15; // ebp
  Actor *v16; // esi
  int ProcessLevel; // ebx
  int v18; // edx
  Actor *v19; // eax
  int v20; // edx
  CombatController *v21; // eax
  int v22; // edx
  float v23; // eax
  int *SafeFloatPointer; // eax
  TESObjectCELL *(__thiscall *GetChildCell)(TESChildCELL *); // ebx
  bool IsSwimming; // bl
  float *v28; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  int v30; // eax
  char *v31; // ecx
  Actor *ExtraPackage; // ebx
  int v33; // eax
  double v34; // st7
  PlayerCharacter *v35; // ebx
  char x_low; // al
  float *v37; // eax
  CombatController *v38; // eax
  CombatController *v39; // eax
  int v40; // eax
  ActorVtbl *vtbl; // edx
  CombatController *v42; // eax
  CombatController *v43; // eax
  Actor *v44; // ebx
  int **v45; // edi
  int **v46; // eax
  int ***v47; // ebx
  float v48; // eax
  int v49; // edi
  char v50; // bl
  unsigned int v51; // edi
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // [esp-Ch] [ebp-68h]
  float *v56; // [esp-4h] [ebp-60h]
  PlayerCharacter *v57; // [esp-4h] [ebp-60h]
  float v59[3]; // [esp+18h] [ebp-44h] BYREF
  int v60[11]; // [esp+24h] [ebp-38h] BYREF
  int v61; // [esp+58h] [ebp-4h]

  v14 = a1;
  v15 = a6;
  if ( !a6 )
    return 0;
  v16 = a5;
  ProcessLevel = Actor::GetProcessLevel(a5);
  if ( Actor::GetProcessLevel(v15) != ProcessLevel && !v16->vtbl->super.super.GetNiNode((TESObjectREFR *)v16) )
    sub_646020(v14, v16, (int)v15, a7, a8, a9, a10, a11, SLODWORD(a13), 0, 1);
  v18 = *(_DWORD *)v14;
  LOBYTE(a11) = a10;
  v19 = (Actor *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(v18 + 0x184))(
                   v14,
                   a4,
                   a3,
                   a2);
  v20 = *(_DWORD *)v14;
  a6 = v19;
  (*(void (__thiscall **)(int))(v20 + 0x350))(v14);
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v16) == (struct Concurrency::details::ScheduleGroupBase *)5 )
    return 0;
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v16) == (struct Concurrency::details::ScheduleGroupBase *)3 )
    return 0;
  if ( ((int (__thiscall *)(Actor *))v16->vtbl->Unk_E2)(v16) )
    return 0;
  if ( v16->vtbl->GetCombatController(v16) )
  {
    v21 = v16->vtbl->GetCombatController(v16);
    if ( sub_613670(v21, (int)v15) )
      return 0;
  }
  if ( v16->vtbl->GetCombatController(v16)
    || (_BYTE)a12
    || (v22 = *(_DWORD *)v14,
        *(float *)&a5 = 0.0,
        v23 = COERCE_FLOAT(
                (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(v22 + 0xEC))(
                  v14,
                  1,
                  a4,
                  a3,
                  a2)),
        sub_621B40(v14, a3, a4, v16, v23, (TESObjectREFR *)v15, (float *)&a5, 0, 1) != 7)
    || (SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37038),
        *(float *)SafeFloatPointer >= (double)*(float *)&a5) )
  {
    if ( v15 == (Actor *)TESDataHandler_g_PlayerRef && !(_BYTE)a12 )
    {
      if ( sub_660530(TESDataHandler_g_PlayerRef) >= dword_B36A78 )
        return 0;
      ++TESDataHandler_g_PlayerRef->unk760[0x10];
    }
    IsSwimming = Actor_IsSwimming(v15);
    if ( !Actor_CanFightInWater(v16) && IsSwimming )
      return 0;
    if ( !sub_5E1E90(v16) )
      goto LABEL_36;
    if ( IsSwimming )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14) )
      {
        v56 = (float *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v15->vtbl->super.super.GetPos)(
                         v15,
                         a4,
                         a3,
                         a2);
        v28 = v16->vtbl->super.super.GetPos((TESObjectREFR *)v16);
        if ( !sub_689230((TESObjectREFR *)v16, v28, v56) )
        {
          sub_67D760(v60);
          GetPos = v15->vtbl->super.super.GetPos;
          v61 = 0;
          v55 = (int)GetPos((TESObjectREFR *)v15);
          v30 = (int)v16->vtbl->super.super.GetPos((TESObjectREFR *)v16);
          if ( sub_67EB60((float *)v60, v30, v55, (int)v16, 0.0) && !sub_67D650((int)v60, (int)v16) )
          {
            v61 = 0xFFFFFFFF;
            TESTexture::ClearComponentReferences(v60);
            return 0;
          }
          v61 = 0xFFFFFFFF;
          TESTexture::ClearComponentReferences(v60);
        }
      }
LABEL_36:
      v31 = *(char **)(v14 + 8);
      if ( v31 && sub_567770(v31) )
      {
        ExtraPackage = (Actor *)ExtraDataList::GetExtraPackage(&v16->members.super.super.baseExtraList);
        a6 = ExtraPackage;
      }
      else
      {
        ExtraPackage = a6;
      }
      (*(void (__usercall **)(int@<ecx>, float *, Actor *, _DWORD, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v14 + 0x70))(
        v14,
        v59,
        v16,
        0,
        a4,
        a3,
        a2);
      if ( !ExtraPackage
        || ((int)ExtraPackage->members.super.super.baseForm & 0x400000) == 0
        || (_BYTE)a12
        || LOBYTE(a13) )
      {
        v40 = (int)v16->vtbl->GetCombatController(v16);
        vtbl = v16->vtbl;
        if ( v40 )
        {
          v43 = vtbl->GetCombatController(v16);
          if ( sub_613670(v43, (int)v15) )
            return 1;
        }
        else
        {
          vtbl->Unk_C3(v16);
          *(_DWORD *)(v14 + 0x48) = *(_DWORD *)(v14 + 0x44);
          *(_DWORD *)(v14 + 0x44) = 0;
          if ( sub_5E6C60(v16)
            || v15->vtbl->IsInCombat(v15, 1)
            && v15->vtbl->GetCombatController(v15)
            && (v42 = v15->vtbl->GetCombatController(v15), sub_613670(v42, (int)v16)) )
          {
            LOBYTE(a11) = 0;
          }
        }
      }
      else
      {
        sub_566DB0(ExtraPackage);
        a13 = *(float *)&v33;
        v34 = (double)v33;
        if ( v33 < 0 )
          v34 = v34 + flt_A2FC78;
        a13 = v34;
        if ( a13 < 1.0 )
          a13 = flt_A57FB8;
        v35 = (PlayerCharacter *)OblivionDynamicCast(
                                   *(void **)(v14 + 0x2C),
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
        x_low = LOBYTE(a6->members.super.super.rot.x);
        if ( x_low == 1 || x_low == 2 || x_low == 7 )
        {
          if ( *(_BYTE *)(v14 + 0xD0) )
          {
            v37 = v16->vtbl->super.super.GetPos((TESObjectREFR *)v16);
            v59[0] = *v37;
            v59[1] = v37[1];
            v59[2] = v37[2];
          }
        }
        a4 = sub_4D7E30((float *)v15, v59);
        a3 = a13;
        if ( a13 < a4 )
        {
          if ( !v35
            || !v35->vtbl->super.GetCombatController((Actor *)v35)
            || (v38 = v35->vtbl->super.GetCombatController((Actor *)v35), !sub_613670(v38, (int)v15)) )
          {
            if ( v35 != TESDataHandler_g_PlayerRef
              || !v15->vtbl->GetCombatController(v15)
              || (v57 = TESDataHandler_g_PlayerRef, v39 = v15->vtbl->GetCombatController(v15),
                                                    !sub_613670(v39, (int)v57)) )
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x8C))(v14, 1);
              return 0;
            }
          }
        }
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x8C))(v14, 0);
        v16->vtbl->Unk_C3(v16);
        *(_DWORD *)(v14 + 0x48) = *(_DWORD *)(v14 + 0x44);
        *(_DWORD *)(v14 + 0x44) = 0;
      }
      (*(void (__usercall **)(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v14 + 0x14C))(
        v14,
        a10,
        a4,
        a3,
        a2);
      if ( !byte_B333B8 )
      {
        *(float *)&v44 = COERCE_FLOAT(sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v15));
        v45 = 0;
        a6 = v44;
        if ( *(float *)&v44 == 0.0 )
          goto LABEL_81;
        do
        {
          v46 = (int **)v44->vtbl;
          if ( !v44->vtbl )
            break;
          v44 = *(Actor **)&v44->members.super.super.super.type;
          v45 = v46;
          a13 = *(float *)&v44;
          if ( *(_BYTE *)(sub_67B6B0(v46, (int)v15, 0) + 4) || (_BYTE)a10 )
          {
            sub_67CDB0(v45, (int)v16, a10, 0xFFFFFFFF);
          }
          else
          {
            v47 = (int ***)sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v16);
            v45 = *v47;
            if ( *v47 )
              sub_67CDB0(v45, (int)v15, 1, 0xFFFFFFFF);
            else
              v45 = 0;
            BSSimpleList_Clear(v47);
            FormHeapFree((unsigned int)v47);
            *(float *)&v44 = a13;
          }
        }
        while ( *(float *)&v44 != 0.0 );
        if ( !v45 )
        {
LABEL_81:
          v48 = COERCE_FLOAT(FormHeapAlloc(0x24u));
          a13 = v48;
          v61 = 1;
          if ( v48 == 0.0 )
            v49 = 0;
          else
            v49 = sub_67CBC0((void *)LODWORD(v48));
          v61 = 0xFFFFFFFF;
          *(_DWORD *)(v49 + 0xC) = 0xC;
          sub_67BF80(&dword_B3BDB0, v49);
          v50 = a10;
          sub_67CDB0((int **)v49, (int)v16, a10, 0xFFFFFFFF);
          sub_67CDB0((int **)v49, (int)v15, v50 == 0, 0xFFFFFFFF);
        }
        v51 = (unsigned int)a6;
        BSSimpleList_Clear(a6);
        FormHeapFree(v51);
        v14 = a1;
      }
      v52 = 0;
      if ( (_BYTE)a12 )
        v52 = 0xC8;
      v53 = *(_DWORD *)(v14 + 8);
      LOBYTE(a10) = 0;
      if ( v53 )
      {
        if ( *(_BYTE *)(v53 + 0x20) == 4
          || (v54 = *(_DWORD *)(v53 + 0x1C), (v54 & 0x200000) != 0)
          || (v54 & 0x100000) != 0 )
        {
          LOBYTE(a10) = 1;
        }
      }
      ((void (__thiscall *)(Actor *, Actor *, int, int, int, int, int))v16->vtbl->Unk_CB)(
        v16,
        v15,
        a12,
        a11,
        a8,
        v52,
        a14);
      if ( v15 == (Actor *)TESDataHandler_g_PlayerRef )
        sub_65DF40(TESDataHandler_g_PlayerRef, (int)v16);
      if ( (_BYTE)a10 )
        (*(void (__thiscall **)(int, Actor *, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x588))(v14, v16, 0, 0);
      return 1;
    }
    return 0;
  }
  if ( v16->vtbl->GetMountedHorse(v16) || ((int (__thiscall *)(Actor *))v16->vtbl->Unk_E2)(v16) )
  {
    if ( sub_5E0380(v16) )
    {
      GetChildCell = a6->members.super.super.childCell.GetChildCell;
      if ( !*(_DWORD *)(*(_DWORD *)(4 * (_DWORD)GetChildCell + 0xB152B0)
                      + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x180))(v14)) )
        return 0;
    }
  }
  ((void (__thiscall *)(Actor *, Actor *, int, int, _DWORD, _DWORD))v16->vtbl->Unk_C6)(v16, v15, 1, 1, 0, 0);
  if ( v15 == (Actor *)TESDataHandler_g_PlayerRef )
    sub_65DF40(TESDataHandler_g_PlayerRef, (int)v16);
  return 1;
}
