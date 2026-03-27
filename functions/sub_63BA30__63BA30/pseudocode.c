void __userpurge sub_63BA30(
        HighProcess *a1@<ecx>,
        double a2@<st4>,
        double st4_0@<st3>,
        double a4@<st2>,
        double unk260@<st1>,
        double a6@<st7>,
        double a7@<st6>,
        Actor *a8,
        UInt32 a9)
{
  double v11; // st2
  MiddleHighProcess_vtbl *v12; // edx
  TESPackage *v13; // ebp
  Actor *v14; // edi
  double GameDay; // st7
  void (__thiscall *Unk_61)(BaseProcess *__hidden, UInt32); // eax
  char v17; // al
  Creature *v18; // eax
  char v19; // al
  Actor *v20; // eax
  TESPackage *v21; // eax
  TESPackage *v22; // ebp
  int procedureArrayIndex; // ebx
  Actor *follow; // ecx
  int v25; // eax
  double v26; // st7
  char v27; // al
  char *location; // ebp
  int v29; // eax
  double z; // st2
  TESPackage *v31; // ebx
  UInt32 v32; // ebp
  UInt32 v33; // ecx
  char v34; // al
  LocationData *v35; // ecx
  double v36; // st7
  TESPackage *v37; // eax
  char v38; // al
  void (__thiscall **p_Unk_105)(BaseProcess *__hidden); // ebx
  int v40; // eax
  char v41; // al
  int v42; // eax
  TESObjectCELL *ParentCell; // eax
  float *v44; // eax
  TESObjectCELL *v45; // eax
  char *v46; // ecx
  int v47; // eax
  int *v48; // ebx
  int v49; // eax
  Actor *v50; // eax
  UInt8 type; // al
  char v52; // al
  bool v53; // zf
  TESPackage *currentPackage; // ecx
  char *editorPackage; // ebx
  LowProcess *process; // ebx
  LowProcess *v57; // ebx
  void (__thiscall **p_SetUnk02C)(LowProcess *, BSExtraData *); // ebx
  BSExtraData *v59; // eax
  void (__thiscall **p_Unk_5F)(TESObjectREFR *); // ebx
  int v61; // eax
  void (__thiscall **p_SetUnk01C)(LowProcess *, int); // ebx
  int v63; // eax
  TESPackage *v64; // ecx
  UInt32 *p_unk03C; // ebx
  int v66; // ebp
  float *v67; // [esp+2Ch] [ebp-70h]
  float *v68; // [esp+2Ch] [ebp-70h]
  float a3; // [esp+30h] [ebp-6Ch]
  float a3a; // [esp+30h] [ebp-6Ch]
  TESObjectCELL *v71; // [esp+34h] [ebp-68h]
  float *v72; // [esp+34h] [ebp-68h]
  float *v73; // [esp+34h] [ebp-68h]
  TESWorldSpace *a5; // [esp+38h] [ebp-64h]
  float a5a; // [esp+38h] [ebp-64h]
  float a5b; // [esp+38h] [ebp-64h]
  float v77; // [esp+3Ch] [ebp-60h]
  float v78; // [esp+40h] [ebp-5Ch]
  float v79; // [esp+40h] [ebp-5Ch]
  char v80; // [esp+57h] [ebp-45h]
  char v81; // [esp+58h] [ebp-44h]
  float v82; // [esp+58h] [ebp-44h]
  TESObjectREFR *unk030; // [esp+58h] [ebp-44h]
  float GameHour; // [esp+5Ch] [ebp-40h]
  float v85; // [esp+5Ch] [ebp-40h]
  float v86; // [esp+5Ch] [ebp-40h]
  float v87; // [esp+5Ch] [ebp-40h]
  char *v88; // [esp+5Ch] [ebp-40h]
  int v89[3]; // [esp+60h] [ebp-3Ch] BYREF
  int v90[3]; // [esp+6Ch] [ebp-30h] BYREF
  int v91[3]; // [esp+78h] [ebp-24h] BYREF
  float v92[3]; // [esp+84h] [ebp-18h] BYREF
  float v93[3]; // [esp+90h] [ebp-Ch] BYREF
  float v94; // [esp+A4h] [ebp+8h]
  LowProcess *v95; // [esp+A4h] [ebp+8h]
  LowProcess *v96; // [esp+A4h] [ebp+8h]

  if ( a8 )
  {
    a1->unk228 = 0;
    a1->unk22C = 0.0;
    v11 = flt_A30634;
    a1->unk0BC = flt_A30634;
    sub_6AC3D0((_DWORD *)OSGlobals->sound);
    v12 = a1->__vftable;
    a1->unk1D8 = 0.0;
    v13 = v12->GetCurrentPackage(a1);
    v14 = 0;
    if ( a8->vtbl->super.super.IsActor((TESObjectREFR *)a8) )
      v14 = a8;
    if ( v14->vtbl->super.IsDead((MobileObject *)v14) )
    {
      sub_5E9E70((TESObjectREFR *)v14);
      ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_8E)(a1, v14);
    }
    else
    {
      ((void (__thiscall *)(HighProcess *, _DWORD))a1->SetUnk22C)(a1, 0.0);
    }
    sub_65DA10(TESDataHandler_g_PlayerRef);
    GameDay = 0.0;
    v80 = 1;
    v81 = 0;
    if ( 0.0 != a1->unk260 )
    {
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      v85 = GameHour - a1->unk00C;
      v86 = fabs(v85);
      v87 = v86 * fCostant_100;
      GameDay = v87;
      unk260 = a1->unk260;
      if ( unk260 <= v87 )
      {
        Unk_61 = a1->Unk_61;
        a1->unk1AC = 0.0;
        v81 = 1;
        ((void (__thiscall *)(HighProcess *, Actor *, int))Unk_61)(a1, v14, 3);
        GameDay = Script_AddEventToExtraScript(v13, &v14->members.super.super.baseExtraList, 0x400);
        if ( v13 )
        {
          if ( sub_565DF0(v13) )
          {
            GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
            sub_41FFC0(&v14->members.super.super.baseExtraList, (int)v13, v17);
          }
        }
      }
    }
    if ( a1->Unk_06(a1, (UInt32)v14, v81)
      && v14->vtbl->GetMountedHorse(v14)
      && (a1->editorPackage->members.packageFlags & 0x800000) == 0 )
    {
      v18 = v14->vtbl->GetMountedHorse(v14);
      sub_5E9A60(v18, GameDay);
      if ( !v19 )
      {
        v20 = (Actor *)v14->vtbl->GetMountedHorse(v14);
        sub_5F80D0(v20);
        a1->unk1A8 = 0.0;
      }
      v14->vtbl->SetPackageDismount(v14);
      return;
    }
    a1->Unk_15C(a1);
    v21 = a1->GetCurrentPackage(a1);
    if ( v21 && v21->members.procedureArrayIndex != 0xFFFFFFFF )
    {
      while ( 2 )
      {
        v22 = a1->GetCurrentPackage(a1);
        if ( !v22 )
          break;
        procedureArrayIndex = v22->members.procedureArrayIndex;
        switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * a1->GetCurrentPackProcedure(a1)) )
        {
          case 0:
            st4_0 = sub_566DC0(v22, GameDay, unk260, v14, 0, flt_A30634);
            if ( v27 )
            {
              ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1);
              location = (char *)v22->members.location;
              if ( location && sub_569740(location) == 3 && !sub_64ADA0((Actor *)a1) )
              {
                v29 = ((int (__thiscall *)(Actor *, int *))v14->vtbl->super.super.GetStartingAngle)(v14, v90);
                goto LABEL_61;
              }
            }
            else
            {
              v35 = v22->members.location;
              unk030 = 0;
              if ( v35 )
                unk030 = (TESObjectREFR *)sub_5697E0(v35);
              if ( a1->unk030 )
              {
                if ( !a1->currentPackage )
                  unk030 = a1->unk030;
              }
              if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))a1->GetSitSleepState)(
                     a1,
                     GameDay,
                     unk260,
                     a4,
                     st4_0,
                     a2) )
              {
                v36 = flt_A30634;
                v78 = flt_A30634;
                v37 = sub_5E0380(v14);
                GameDay = sub_566DC0(v37, v36, unk260, v14, 0, v78);
                if ( !v38 )
                  GameDay = ((double (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
              }
              p_Unk_105 = &a1->Unk_105;
              v79 = sub_5677B0(v22, GameDay, (TESObjectREFR *)v14, 1);
              GameDay = *(float *)&a9;
              a5 = sub_566940(v22, v14);
              v71 = sub_566A40((char **)v22, v14);
              v40 = sub_566B30(v22, (int)v91, v14);
              ((void (__thiscall *)(HighProcess *, Actor *, int, TESObjectCELL *, TESWorldSpace *, UInt32, _DWORD))*p_Unk_105)(
                a1,
                v14,
                v40,
                v71,
                a5,
                a9,
                LODWORD(v79));
              if ( !v14->members.super.process->GetProcessLevel(v14->members.super.process) )
              {
                st4_0 = sub_566DC0(v22, GameDay, unk260, v14, 0, flt_A30634);
                if ( v41 )
                {
                  if ( !a1->unk084 )
                  {
                    if ( sub_565DD0(v22) )
                    {
                      a5a = flt_A5B6C0;
                      v42 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))v14->vtbl->super.super.GetPos)(
                              v14,
                              GameDay,
                              unk260,
                              a4,
                              st4_0,
                              a2);
                      GameDay = flt_A5B6C0;
                      v72 = (float *)v42;
                      a3 = flt_A5B6C0;
                      v67 = v14->vtbl->super.super.GetPos(v14);
                      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v14);
                      sub_446B90(
                        ParentCell,
                        v67,
                        a3,
                        v72,
                        a5a,
                        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30,
                        (int)v14);
                    }
                    a1->unk084 = 1;
                  }
                  if ( sub_565DE0(v22) )
                  {
                    a5b = flt_A5B6C0;
                    v44 = v14->vtbl->super.super.GetPos(v14);
                    GameDay = flt_A5B6C0;
                    v73 = v44;
                    a3a = flt_A5B6C0;
                    v68 = v14->vtbl->super.super.GetPos(v14);
                    v45 = TESObjectREFR_GetParentCell((TESObjectREFR *)v14);
                    sub_446B90(
                      v45,
                      v68,
                      a3a,
                      v73,
                      a5b,
                      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0,
                      (int)v14);
                  }
                  ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1);
                  if ( (unk030 && unk030->vtbl->GetBaseForm(unk030) == (TESForm *)TESDataHandler_g_XMarkerHeading
                     || (v46 = (char *)v22->members.location) != 0 && sub_569740(v46) == 3)
                    && !sub_64ADA0((Actor *)a1) )
                  {
                    if ( unk030 )
                    {
                      z = unk030->member.rot.z;
                      goto LABEL_62;
                    }
                    v29 = ((int (__thiscall *)(Actor *, float *))v14->vtbl->super.super.GetStartingAngle)(v14, v92);
LABEL_61:
                    z = *(float *)(v29 + 8);
LABEL_62:
                    v94 = z;
                    ((void (__thiscall *)(Actor *, _DWORD))v14->vtbl->super.Unk_7A)(v14, LODWORD(v94));
                    break;
                  }
                  sub_566DB0(v22);
                  if ( v47 )
                  {
                    v48 = (int *)sub_566B30(v22, (int)v93, v14);
                    sub_566DB0(v22);
                    GameDay = (double)v49;
                    if ( v49 < 0 )
                      GameDay = GameDay + flt_A2FC78;
                    v77 = GameDay;
                    if ( sub_635D60((TESObjectREFR *)v14, *v48, v48[1], v48[2], v77, (int)v89) )
                      ((void (__thiscall *)(Actor *, int *))v14->vtbl->super.Unk_73)(v14, v89);
                  }
                }
              }
            }
            break;
          case 1:
            sub_631050((int *)a1, unk260, GameDay, (TESObjectREFR *)v14, *(float *)&a9);
            break;
          case 2:
            v11 = *(float *)&a9;
            v80 = a1->Unk_1B(a1, (UInt32)v14, a9);
            goto LABEL_54;
          case 3:
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))a1->GetSitSleepState)(
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) )
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
            }
            sub_6440B0((char ***)a1, v14);
            break;
          case 4:
            v11 = *(float *)&a9;
            v80 = sub_6284B0((int *)a1, unk260, v14, a9);
            goto LABEL_54;
          case 5:
            v11 = *(float *)&a9;
            v80 = sub_628520((int *)a1, unk260, v14, a9);
            goto LABEL_54;
          case 6:
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))a1->GetSitSleepState)(
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) )
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
            }
            GameDay = *(float *)&a9;
            v80 = sub_630D40((float *)a1, *(float *)&a9, unk260, (TESForm *)v14, a9, 1);
            goto LABEL_54;
          case 7:
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))a1->GetSitSleepState)(
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) )
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
            }
            GameDay = *(float *)&a9;
            v80 = sub_630400(
                    a1,
                    procedureArrayIndex,
                    (int)v22,
                    (int)v14,
                    a6,
                    a7,
                    v11,
                    a2,
                    st4_0,
                    a4,
                    unk260,
                    (TESChildCELL *)v14,
                    a9);
            goto LABEL_54;
          case 8:
            if ( ((int (__thiscall *)(HighProcess *))a1->GetSitSleepState)(a1) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) )
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
            }
            break;
          case 9:
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))a1->GetSitSleepState)(
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2) )
            {
              ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
            }
            GameDay = *(float *)&a9;
            v80 = ((int (__thiscall *)(HighProcess *, Actor *, UInt32))a1->Unk_15A)(a1, v14, a9);
            goto LABEL_54;
          case 0xD:
            if ( !a1->follow )
              a1->Unk_155(a1, (TESChildCELL *)v14);
            follow = a1->follow;
            if ( !follow )
              goto LABEL_53;
            if ( v22->members.type == 1 )
            {
              if ( sub_663A00() >= dword_B36A80 )
                break;
            }
            else
            {
              if ( (follow->members.super.super.super.flags & 0x20) != 0
                || (follow->members.super.super.super.flags & 0x800) != 0 )
              {
                v50 = a1->follow;
                if ( (v50->members.super.super.super.flags & 0x20) != 0 )
                  sub_566870((TargetData **)v22, (TESForm *)v50, 1);
                ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1);
                return;
              }
              if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))follow->vtbl->super.super.IsDead)(
                     follow,
                     1,
                     GameDay,
                     unk260,
                     a4,
                     st4_0,
                     a2) )
              {
                sub_566870((TargetData **)v22, (TESForm *)a1->follow, 1);
                ((void (__thiscall *)(Actor *, Actor *))v14->vtbl->Unk_BE)(v14, a1->follow);
                return;
              }
              sub_566DB0(v22);
              v26 = (double)v25;
              if ( v25 < 0 )
                v26 = v26 + flt_A2FC78;
              v82 = v26;
              if ( v82 < 1.0 )
                v82 = flt_A57A64;
              GameDay = TesObjectREF_GetDistance((TESObjectREFR *)v14, (TESObjectREFR *)a1->follow, 0);
              a7 = v82;
              if ( v82 < v11 )
                break;
            }
LABEL_53:
            ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1);
LABEL_54:
            if ( !v80 )
              break;
            continue;
          case 0xE:
            if ( !a1->follow )
            {
              a1->Unk_155(a1, (TESChildCELL *)v14);
              if ( !a1->follow )
              {
                ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1);
                if ( !a1->unk0D0 )
                  ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, v14);
              }
            }
            a1->Unk_1B(a1, (UInt32)v14, a9);
            goto LABEL_63;
          case 0xF:
            sub_646200(v14, 0, 1, 0xFFFFFFFF);
            goto LABEL_63;
          case 0x11:
            a1->Unk_21(a1, (UInt32)v14, (UInt32)v22, 1);
            goto LABEL_53;
          case 0x16:
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14);
            goto LABEL_53;
          case 0x1D:
            sub_6358E0((float *)a1, unk260, (TESForm *)v14, a9);
            goto LABEL_63;
          case 0x1F:
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_149)(a1, v14);
            goto LABEL_63;
          case 0x20:
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_14A)(a1, v14);
            goto LABEL_63;
          case 0x25:
            a1->RemoveWornItems(a1, v14, 1, 0);
            goto LABEL_63;
          case 0x29:
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_14E)(a1, v14);
            goto LABEL_63;
          default:
            goto LABEL_63;
        }
        break;
      }
    }
LABEL_63:
    if ( !Actor::GetProcessLevel(v14) )
    {
      v31 = a1->GetCurrentPackage(a1);
      if ( v31 )
      {
        v32 = v31->members.procedureArrayIndex;
        if ( *(_DWORD *)(*(_DWORD *)(4 * v32 + 0xB152B0) + 4 * a1->GetCurrentPackProcedure(a1)) == 0x2C )
        {
          if ( !a1->currentPackage )
            a1->unk260 = 0.0;
          v33 = v31->members.procedureArrayIndex;
          if ( !v33 )
            goto LABEL_69;
          if ( v33 == 3 )
            goto LABEL_70;
          type = v31->members.type;
          if ( type == 3 || type == 4 )
            goto LABEL_70;
          if ( v33 == 7 )
          {
LABEL_69:
            st4_0 = sub_566DC0(v31, GameDay, unk260, v14, 0, flt_A30634);
            if ( !v34 )
            {
LABEL_70:
              ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))a1->Unk_61)(a1, v14, 0xFFFFFFFF);
              return;
            }
          }
          ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, v14);
          if ( a1->unk25C )
          {
            ((void (__usercall *)(HighProcess *@<ecx>, Actor *, unsigned int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))a1->Unk_61)(
              a1,
              v14,
              0xFFFFFFFF,
              GameDay,
              unk260,
              a4,
              st4_0,
              a2);
            a1->Unk_2E(a1, 0);
            return;
          }
          Script_AddEventToExtraScript(v31, &v14->members.super.super.baseExtraList, 0x400);
          if ( sub_565DF0(v31) )
          {
            TimeGlobals_GetGameDay(&TimeGlobals);
            sub_41FFC0(&v14->members.super.super.baseExtraList, (int)v31, v52);
          }
          if ( !v31->members.time.duration )
          {
            v53 = a1->currentPackage == 0;
            a1->follow = 0;
            if ( v53 || ((unsigned __int8 (__thiscall *)(HighProcess *))a1->GetUnk25C)(a1) )
            {
              if ( sub_5660A0(a1->editorPackage) )
              {
                editorPackage = (char *)a1->editorPackage;
                v88 = editorPackage;
                if ( sub_567770(editorPackage) )
                {
                  ((void (__usercall *)(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))v14->vtbl->super.super.super.ClearModified)(
                    v14,
                    0x30000,
                    GameDay,
                    unk260,
                    a4,
                    st4_0,
                    a2);
                  if ( ExtraDataList::GetExtraPackage(&v14->members.super.super.baseExtraList) )
                  {
                    process = v14->members.super.process;
                    process->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&v14->members.super.super.baseExtraList);
                    sub_5E8DE0(v14, v14->members.super.process->editorPackage);
                    v57 = v14->members.super.process;
                    v57->editorPackProcedure = sub_41FB40(&v14->members.super.super.baseExtraList);
                    v95 = v14->members.super.process;
                    p_SetUnk02C = (void (__thiscall **)(LowProcess *, BSExtraData *))&v95->SetUnk02C;
                    v59 = sub_41FB60(&v14->members.super.super.baseExtraList);
                    (*p_SetUnk02C)(v95, v59);
                    p_Unk_5F = &v14->vtbl->super.super.Unk_5F;
                    LOBYTE(v61) = sub_41FB80(&v14->members.super.super.baseExtraList);
                    ((void (__thiscall *)(Actor *, int))*p_Unk_5F)(v14, v61);
                    v96 = v14->members.super.process;
                    p_SetUnk01C = (void (__thiscall **)(LowProcess *, int))&v96->SetUnk01C;
                    LOBYTE(v63) = sub_41FBA0(&v14->members.super.super.baseExtraList);
                    (*p_SetUnk01C)(v96, v63);
                    sub_4246D0(&v14->members.super.super.baseExtraList);
                    editorPackage = v88;
                  }
                  else
                  {
                    v14->members.super.process->editorPackage = 0;
                    v14->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
                    v14->members.super.process->SetUnk02C(v14->members.super.process, 0);
                    ((void (__thiscall *)(Actor *, _DWORD))v14->vtbl->super.super.Unk_5F)(v14, 0);
                    v14->members.super.process->SetUnk01C(v14->members.super.process, 0);
                    v14->members.super.process->Unk_06(v14->members.super.process, (UInt32)v14, 0);
                  }
                }
                else
                {
                  a1->editorPackage = 0;
                }
                if ( editorPackage )
                  (*(void (__thiscall **)(char *, int))(*(_DWORD *)editorPackage + 0x10))(editorPackage, 1);
                if ( !a1->unk0D0 )
                  ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, v14);
              }
            }
            else
            {
              currentPackage = a1->currentPackage;
              if ( currentPackage )
                currentPackage->__vftable->super.Destroy((TESForm *)currentPackage, 1);
              a1->currentPackage = 0;
            }
            v64 = a1->editorPackage;
            if ( v64 )
            {
              if ( sub_565DF0(v64)
                || (a1->editorPackage->members.packageFlags & 2) != 0
                || (a1->editorPackage->members.packageFlags & 4) != 0 )
              {
                a1->unk1AC = 0.0;
              }
            }
            if ( a1->unk044 )
              FormHeapFree(a1->unk044);
            a1->unk044 = 0;
            a1->usedItem = 0;
            p_unk03C = &a1->unk03C;
            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&a1->unk03C) )
            {
              v66 = *p_unk03C;
              if ( *p_unk03C )
                FormHeapFree(*p_unk03C);
              BSSimpleList_Remove(&a1->unk03C, v66);
            }
            a1->unk198 = 0.0;
            a1->unk030 = 0;
            BSSimpleList_Clear(&a1->unk04C);
          }
        }
      }
    }
    if ( !byte_B15800 || !dword_B3BF80 || !sub_6825C0(v14) )
      a8->members.super.process->Unk_08(a8->members.super.process);
  }
}
