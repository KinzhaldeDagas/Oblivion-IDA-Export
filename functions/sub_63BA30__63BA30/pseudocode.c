void __userpurge sub_63BA30(
        HighProcess *a1@<ecx>,
        double a2@<st4>,
        double st4_0@<st3>,
        double a4@<st2>,
        double unk260@<st1>,
        double a6@<st7>,
        double a7@<st5>,
        Actor *a8,
        UInt32 a9)
{
  double v11; // st1
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
  double z; // st1
  TESPackage *v31; // ebx
  UInt32 v32; // ebp
  UInt32 v33; // ecx
  char v34; // al
  LocationData *v35; // ecx
  double v36; // st7
  TESPackage *CurrentPackage; // eax
  char v38; // al
  void (__thiscall **p_Unk_105)(BaseProcess *__hidden); // ebx
  float *v40; // eax
  char v41; // al
  int v42; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  float *v44; // eax
  TESObjectCELL *v45; // eax
  char *v46; // ecx
  int v47; // eax
  int *v48; // ebx
  int v49; // eax
  Actor *v50; // eax
  TESPackageType type; // al
  char v52; // al
  bool v53; // zf
  TESPackage *v54; // ecx
  TESPackage *editorPackage; // ebx
  LowProcess *process; // ebx
  LowProcess *v57; // ebx
  void (__thiscall **p_SetUnk02C)(LowProcess *, BSExtraData *); // ebx
  BSExtraData *PackageExtraTarget; // eax
  void (__thiscall **p_SetProcedureCompleted)(TESObjectREFR *, bool); // ebx
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
  BSExtraDataVtbl *v71; // [esp+34h] [ebp-68h]
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
  TESPackage *v88; // [esp+5Ch] [ebp-40h]
  NiPoint3 v89; // [esp+60h] [ebp-3Ch] BYREF
  int v90[3]; // [esp+6Ch] [ebp-30h] BYREF
  int v91[3]; // [esp+78h] [ebp-24h] BYREF
  float v92[3]; // [esp+84h] [ebp-18h] BYREF
  float v93[3]; // [esp+90h] [ebp-Ch] BYREF
  float v94; // [esp+A4h] [ebp+8h]
  LowProcess *v95; // [esp+A4h] [ebp+8h]
  LowProcess *v96; // [esp+A4h] [ebp+8h]

  if ( a8 ) /*0x63ba3f*/
  {
    a1->dialogueActive = 0; /*0x63ba47*/
    a1->unk22C = 0.0; /*0x63ba4e*/
    v11 = kTerrainLODQuadRayDirectionZ; /*0x63ba54*/
    a1->unk0BC = kTerrainLODQuadRayDirectionZ; /*0x63ba5a*/
    sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x63ba68*/
    v12 = a1->__vftable; /*0x63ba6f*/
    a1->unk1D8 = 0.0; /*0x63ba71*/
    v13 = v12->GetCurrentPackage(a1); /*0x63ba83*/
    v14 = 0; /*0x63ba8d*/
    if ( a8->vtbl->super.super.IsActor((TESObjectREFR *)a8) ) /*0x63ba8f*/
      v14 = a8; /*0x63ba95*/
    if ( v14->vtbl->super.IsDead((MobileObject *)v14) ) /*0x63baa1*/
    {
      sub_5E9E70((TESObjectREFR *)v14); /*0x63bab9*/
      ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_8E)(a1, v14); /*0x63bac9*/
    }
    else
    {
      ((void (__thiscall *)(HighProcess *, _DWORD))a1->SetUnk22C)(a1, 0.0); /*0x63bab5*/
    }
    sub_65DA10(reference); /*0x63bad1*/
    GameDay = 0.0; /*0x63bad6*/
    v80 = 1; /*0x63bade*/
    v81 = 0; /*0x63bae3*/
    if ( 0.0 != a1->unk260 ) /*0x63baed*/
    {
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x63bafd*/
      v85 = GameHour - a1->unk00C; /*0x63bb08*/
      v86 = fabs(v85); /*0x63bb12*/
      v87 = v86 * fCostant_100; /*0x63bb20*/
      GameDay = v87; /*0x63bb24*/
      unk260 = a1->unk260; /*0x63bb28*/
      if ( unk260 <= v87 ) /*0x63bb35*/
      {
        Unk_61 = a1->Unk_61; /*0x63bb3b*/
        a1->unk1AC = 0.0; /*0x63bb41*/
        v81 = 1; /*0x63bb4c*/
        ((void (__thiscall *)(HighProcess *, Actor *, int))Unk_61)(a1, v14, 3); /*0x63bb51*/
        GameDay = Script_AddEventToExtraScript(v13, &v14->members.super.super.baseExtraList, 0x400); /*0x63bb5d*/
        if ( v13 ) /*0x63bb67*/
        {
          if ( sub_565DF0(v13) ) /*0x63bb6b*/
          {
            GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x63bb79*/
            ExtraDataList_SetRunOnceExtraPackage(&v14->members.super.super.baseExtraList, (int)v13, v17); /*0x63bb82*/
          }
        }
      }
    }
    if ( a1->Unk_06(a1, (UInt32)v14, v81) /*0x63bbb6*/
      && v14->vtbl->GetMountedHorse(v14)
      && (a1->editorPackage->members.packageFlags & 0x800000) == 0 )
    {
      v18 = v14->vtbl->GetMountedHorse(v14); /*0x63bbc2*/
      sub_5E9A60(v18, GameDay); /*0x63bbc6*/
      if ( !v19 ) /*0x63bbcd*/
      {
        v20 = (Actor *)v14->vtbl->GetMountedHorse(v14); /*0x63bbd9*/
        sub_5F80D0(v20); /*0x63bbdd*/
        a1->conversationScanCooldown = 0.0; /*0x63bbe4*/
      }
      v14->vtbl->SetPackageDismount(v14); /*0x63bbf4*/
      return; /*0x63bbfd*/
    }
    a1->Unk_15C(a1); /*0x63bc0a*/
    v21 = a1->GetCurrentPackage(a1); /*0x63bc16*/
    if ( v21 && v21->members.procedureArrayIndex != 0xFFFFFFFF ) /*0x63bc24*/
    {
      while ( 2 ) /*0x63bc30*/
      {
        v22 = a1->GetCurrentPackage(a1); /*0x63bc30*/
        if ( !v22 ) /*0x63bc40*/
          break; /*0x63bc40*/
        procedureArrayIndex = v22->members.procedureArrayIndex; /*0x63bc4e*/
        switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * a1->GetCurrentPackProcedure(a1)) ) /*0x63bc6f*/
        {
          case 0: /*0x63bc6f*/
            st4_0 = sub_566DC0(v22, GameDay, unk260, a4, v14, 0, kTerrainLODQuadRayDirectionZ); /*0x63beb9*/
            if ( v27 ) /*0x63bec0*/
            {
              ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1); /*0x63bed3*/
              location = (char *)v22->members.location; /*0x63bed5*/
              if ( location && sub_569740(location) == 3 && !sub_64ADA0((Actor *)a1) ) /*0x63beea*/
              {
                v29 = ((int (__thiscall *)(Actor *, int *))v14->vtbl->super.super.GetStartingAngle)(v14, v90); /*0x63bf02*/
                goto LABEL_61; /*0x63bf02*/
              }
            }
            else
            {
              v35 = v22->members.location; /*0x63bfb5*/
              unk030 = 0; /*0x63bfba*/
              if ( v35 ) /*0x63bfc2*/
                unk030 = (TESObjectREFR *)sub_5697E0(v35); /*0x63bfc9*/
              if ( a1->unk030 ) /*0x63bfcd*/
              {
                if ( !a1->currentPackage ) /*0x63bfd4*/
                  unk030 = a1->unk030; /*0x63bfdd*/
              }
              if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a1->GetSitSleepState)( /*0x63bfeb*/
                     a1,
                     GameDay,
                     unk260,
                     a4,
                     st4_0,
                     a2,
                     a7) )
              {
                v36 = kTerrainLODQuadRayDirectionZ; /*0x63bff1*/
                v78 = kTerrainLODQuadRayDirectionZ; /*0x63bff8*/
                CurrentPackage = Actor::GetCurrentPackage(v14); /*0x63c000*/
                GameDay = sub_566DC0(CurrentPackage, v36, unk260, a4, v14, 0, v78); /*0x63c007*/
                if ( !v38 ) /*0x63c00e*/
                  GameDay = ((double (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63c01b*/
              }
              p_Unk_105 = &a1->Unk_105; /*0x63c024*/
              v79 = sub_5677B0(v22, GameDay, (TESObjectREFR *)v14, 1); /*0x63c032*/
              GameDay = *(float *)&a9; /*0x63c038*/
              a5 = sub_566940(v22, v14); /*0x63c045*/
              v71 = sub_566A40((char **)v22, v14); /*0x63c04e*/
              v40 = sub_566B30(v22, (float *)v91, v14); /*0x63c057*/
              ((void (__thiscall *)(HighProcess *, Actor *, float *, BSExtraDataVtbl *, TESWorldSpace *, UInt32, _DWORD))*p_Unk_105)( /*0x63c062*/
                a1,
                v14,
                v40,
                v71,
                a5,
                a9,
                LODWORD(v79));
              if ( !v14->members.super.process->GetProcessLevel(v14->members.super.process) ) /*0x63c06c*/
              {
                st4_0 = sub_566DC0(v22, GameDay, unk260, a4, v14, 0, kTerrainLODQuadRayDirectionZ); /*0x63c084*/
                if ( v41 ) /*0x63c08b*/
                {
                  if ( !a1->unk084 ) /*0x63c091*/
                  {
                    if ( sub_565DD0(v22) ) /*0x63c09c*/
                    {
                      a5a = flt_A5B6C0; /*0x63c0bc*/
                      v42 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))v14->vtbl->super.super.GetPos)( /*0x63c0bf*/
                              v14,
                              GameDay,
                              unk260,
                              a4,
                              st4_0,
                              a2,
                              a7);
                      GameDay = flt_A5B6C0; /*0x63c0c1*/
                      v72 = (float *)v42; /*0x63c0c7*/
                      a3 = flt_A5B6C0; /*0x63c0d3*/
                      v67 = v14->vtbl->super.super.GetPos(v14); /*0x63c0d8*/
                      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v14); /*0x63c0db*/
                      sub_446B90( /*0x63c0e7*/
                        DwordAtOffset40,
                        v67,
                        a3,
                        v72,
                        a5a,
                        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
                        (int)v14);
                    }
                    a1->unk084 = 1; /*0x63c0ec*/
                  }
                  if ( sub_565DE0(v22) ) /*0x63c0f5*/
                  {
                    a5b = flt_A5B6C0; /*0x63c115*/
                    v44 = v14->vtbl->super.super.GetPos(v14); /*0x63c118*/
                    GameDay = flt_A5B6C0; /*0x63c11a*/
                    v73 = v44; /*0x63c120*/
                    a3a = flt_A5B6C0; /*0x63c12c*/
                    v68 = v14->vtbl->super.super.GetPos(v14); /*0x63c131*/
                    v45 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v14); /*0x63c134*/
                    sub_446B90( /*0x63c140*/
                      v45,
                      v68,
                      a3a,
                      v73,
                      a5b,
                      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
                      (int)v14);
                  }
                  ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1); /*0x63c152*/
                  if ( (unk030 && unk030->vtbl->GetBaseForm(unk030) == (TESForm *)MEMORY[0xB35EB0] /*0x63c183*/
                     || (v46 = (char *)v22->members.location) != 0 && sub_569740(v46) == 3)
                    && !sub_64ADA0((Actor *)a1) )
                  {
                    if ( unk030 ) /*0x63c18e*/
                    {
                      z = unk030->member.rot.z; /*0x63c190*/
                      goto LABEL_62; /*0x63c193*/
                    }
                    v29 = ((int (__thiscall *)(Actor *, float *))v14->vtbl->super.super.GetStartingAngle)(v14, v92); /*0x63c1a5*/
LABEL_61:
                    z = *(float *)(v29 + 8); /*0x63bf04*/
LABEL_62:
                    v94 = z; /*0x63bf07*/
                    ((void (__thiscall *)(Actor *, _DWORD))v14->vtbl->super.Unk_7A)(v14, LODWORD(v94)); /*0x63bf1d*/
                    break; /*0x63bf1d*/
                  }
                  sub_566DB0(v22); /*0x63c1ac*/
                  if ( v47 ) /*0x63c1b3*/
                  {
                    v48 = (int *)sub_566B30(v22, v93, v14); /*0x63c1cd*/
                    sub_566DB0(v22); /*0x63c1cf*/
                    GameDay = (double)v49; /*0x63c1da*/
                    if ( v49 < 0 ) /*0x63c1de*/
                      GameDay = GameDay + flt_A2FC78; /*0x63c1e0*/
                    v77 = GameDay; /*0x63c1f0*/
                    if ( sub_635D60((TESObjectREFR *)v14, *v48, v48[1], v48[2], v77, &v89) ) /*0x63c200*/
                      ((void (__thiscall *)(Actor *, NiPoint3 *))v14->vtbl->super.Unk_73)(v14, &v89); /*0x63c21f*/
                  }
                }
              }
            }
            break; /*0x63bf02*/
          case 1: /*0x63bc6f*/
            sub_631050((int *)a1, unk260, GameDay, a4, (TESObjectREFR *)v14, *(float *)&a9); /*0x63c32c*/
            break; /*0x63c331*/
          case 2: /*0x63bc6f*/
            v11 = *(float *)&a9; /*0x63bc78*/
            v80 = a1->Unk_1B(a1, (UInt32)v14, a9); /*0x63bc88*/
            goto LABEL_54; /*0x63bc8c*/
          case 3: /*0x63bc6f*/
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a1->GetSitSleepState)( /*0x63c27c*/
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2,
                   a7) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) ) /*0x63c28c*/
                GameDay = ((double (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63c29d*/
            }
            GameDay = sub_6440B0((char ***)a1, unk260, GameDay, v14); /*0x63c2a2*/
            break; /*0x63c2a7*/
          case 4: /*0x63bc6f*/
            v11 = *(float *)&a9; /*0x63bd8c*/
            v80 = sub_6284B0((int *)a1, unk260, a4, GameDay, v14, a9); /*0x63bd9c*/
            goto LABEL_54; /*0x63bda0*/
          case 5: /*0x63bc6f*/
            v11 = *(float *)&a9; /*0x63bda5*/
            v80 = sub_628520((int *)a1, unk260, a4, GameDay, v14, a9); /*0x63bdb5*/
            goto LABEL_54; /*0x63bdb9*/
          case 6: /*0x63bc6f*/
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a1->GetSitSleepState)( /*0x63bdc8*/
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2,
                   a7) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) ) /*0x63bdd8*/
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63bde9*/
            }
            GameDay = *(float *)&a9; /*0x63bdeb*/
            v80 = sub_630D40((float *)a1, *(float *)&a9, unk260, a4, (TESForm *)v14, a9, 1); /*0x63bdfd*/
            goto LABEL_54; /*0x63be01*/
          case 7: /*0x63bc6f*/
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a1->GetSitSleepState)( /*0x63be10*/
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2,
                   a7) )
            {
              if ( !v14->vtbl->GetMountedHorse(v14) ) /*0x63be20*/
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63be31*/
            }
            GameDay = *(float *)&a9; /*0x63be33*/
            v80 = sub_630400( /*0x63be43*/
                    a1,
                    procedureArrayIndex,
                    (int)v22,
                    (int)v14,
                    a6,
                    v11,
                    a7,
                    a2,
                    st4_0,
                    a4,
                    unk260,
                    *(float *)&a9,
                    (TESChildCELL *)v14,
                    a9);
            goto LABEL_54; /*0x63be47*/
          case 8: /*0x63bc6f*/
            if ( ((int (__thiscall *)(HighProcess *))a1->GetSitSleepState)(a1) ) /*0x63c340*/
            {
              if ( !v14->vtbl->GetMountedHorse(v14) ) /*0x63c354*/
                ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63c369*/
            }
            break; /*0x63c369*/
          case 9: /*0x63bc6f*/
            if ( ((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a1->GetSitSleepState)( /*0x63be53*/
                   a1,
                   GameDay,
                   unk260,
                   a4,
                   st4_0,
                   a2,
                   a7) )
            {
              ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63be64*/
            }
            GameDay = *(float *)&a9; /*0x63be68*/
            v80 = ((int (__thiscall *)(HighProcess *, Actor *, UInt32))a1->Unk_15A)(a1, v14, a9); /*0x63be7b*/
            goto LABEL_54; /*0x63be7f*/
          case 0xD: /*0x63bc6f*/
            if ( !a1->follow ) /*0x63bc91*/
              a1->Unk_155(a1, (TESChildCELL *)v14); /*0x63bca2*/
            follow = a1->follow; /*0x63bca4*/
            if ( !follow ) /*0x63bca9*/
              goto LABEL_53; /*0x63bca9*/
            if ( v22->members.type == kPackageType_Follow ) /*0x63bcc3*/
            {
              if ( sub_663A00() >= (int)stru_B36A80.value ) /*0x63bcd6*/
                break; /*0x63bcd6*/
            }
            else
            {
              if ( (follow->members.super.super.super.flags & 0x20) != 0 /*0x63bd06*/
                || (follow->members.super.super.super.flags & 0x800) != 0 )
              {
                v50 = a1->follow; /*0x63c393*/
                if ( (v50->members.super.super.super.flags & 0x20) != 0 ) /*0x63c39f*/
                  sub_566870((TargetData **)v22, (TESForm *)v50, 1); /*0x63c3a6*/
                ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1); /*0x63c3b8*/
                return; /*0x63c3c1*/
              }
              if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))follow->vtbl->super.super.IsDead)( /*0x63bd16*/
                     follow,
                     1,
                     GameDay,
                     unk260,
                     a4,
                     st4_0,
                     a2,
                     a7) )
              {
                sub_566870((TargetData **)v22, (TESForm *)a1->follow, 1); /*0x63c374*/
                ((void (__thiscall *)(Actor *, Actor *))v14->vtbl->Unk_BE)(v14, a1->follow); /*0x63c387*/
                return; /*0x63c390*/
              }
              sub_566DB0(v22); /*0x63bd22*/
              v26 = (double)v25; /*0x63bd2d*/
              if ( v25 < 0 ) /*0x63bd31*/
                v26 = v26 + flt_A2FC78; /*0x63bd33*/
              v82 = v26; /*0x63bd39*/
              if ( v82 < 1.0 ) /*0x63bd48*/
                v82 = flt_A57A64; /*0x63bd50*/
              GameDay = TesObjectREF_GetDistance((TESObjectREFR *)v14, (TESObjectREFR *)a1->follow, 0); /*0x63bd5c*/
              a6 = v82; /*0x63bd61*/
              if ( v82 < v11 ) /*0x63bd6c*/
                break; /*0x63bd6c*/
            }
LABEL_53:
            ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1); /*0x63be8e*/
LABEL_54:
            if ( !v80 ) /*0x63bea2*/
              break; /*0x63bea2*/
            continue; /*0x63bea2*/
          case 0xE: /*0x63bc6f*/
            if ( !a1->follow ) /*0x63c2cc*/
            {
              a1->Unk_155(a1, (TESChildCELL *)v14); /*0x63c2dd*/
              if ( !a1->follow ) /*0x63c2df*/
              {
                ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, v14, 1); /*0x63c2f2*/
                if ( !a1->unk0D0 ) /*0x63c2f4*/
                  ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, v14); /*0x63c308*/
              }
            }
            a1->Unk_1B(a1, (UInt32)v14, a9); /*0x63c31a*/
            goto LABEL_63; /*0x63c31c*/
          case 0xF: /*0x63bc6f*/
            sub_646200(a1, procedureArrayIndex, a4, v14, 0, 1, 0xFFFFFFFF); /*0x63c268*/
            goto LABEL_63; /*0x63c26d*/
          case 0x11: /*0x63bc6f*/
            a1->Unk_21(a1, (UInt32)v14, (UInt32)v22, 1); /*0x63bd85*/
            goto LABEL_53; /*0x63bd87*/
          case 0x16: /*0x63bc6f*/
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_6B)(a1, v14); /*0x63be8c*/
            goto LABEL_53; /*0x63be8c*/
          case 0x1D: /*0x63bc6f*/
            sub_6358E0((float *)a1, a4, GameDay, (TESForm *)v14, a9); /*0x63c22f*/
            goto LABEL_63; /*0x63c234*/
          case 0x1F: /*0x63bc6f*/
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_149)(a1, v14); /*0x63c2b7*/
            goto LABEL_63; /*0x63c2b7*/
          case 0x20: /*0x63bc6f*/
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_14A)(a1, v14); /*0x63c2c7*/
            goto LABEL_63; /*0x63c2c7*/
          case 0x25: /*0x63bc6f*/
            a1->RemoveWornItems(a1, v14, 1, 0); /*0x63c258*/
            goto LABEL_63; /*0x63c25a*/
          case 0x29: /*0x63bc6f*/
            ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_14E)(a1, v14); /*0x63c244*/
            goto LABEL_63; /*0x63c244*/
          default:
            goto LABEL_63;
        }
        break;
      }
    }
LABEL_63:
    if ( !Actor::GetProcessLevel(v14) ) /*0x63bf21*/
    {
      v31 = a1->GetCurrentPackage(a1); /*0x63bf3a*/
      if ( v31 ) /*0x63bf3e*/
      {
        v32 = v31->members.procedureArrayIndex; /*0x63bf4c*/
        if ( *(_DWORD *)(*(_DWORD *)(4 * v32 + 0xB152B0) + 4 * a1->GetCurrentPackProcedure(a1)) == 0x2C ) /*0x63bf5e*/
        {
          if ( !a1->currentPackage ) /*0x63bf64*/
            a1->unk260 = 0.0; /*0x63bf6f*/
          v33 = v31->members.procedureArrayIndex; /*0x63bf75*/
          if ( !v33 ) /*0x63bf7a*/
            goto LABEL_69; /*0x63bf7a*/
          if ( v33 == 3 ) /*0x63c3c7*/
            goto LABEL_70; /*0x63c3c7*/
          type = v31->members.type; /*0x63c3cd*/
          if ( type == kPackageType_Eat || type == kPackageType_Sleep ) /*0x63c3da*/
            goto LABEL_70; /*0x63c3da*/
          if ( v33 == 7 ) /*0x63c3e3*/
          {
LABEL_69:
            st4_0 = sub_566DC0(v31, GameDay, unk260, a4, v14, 0, kTerrainLODQuadRayDirectionZ); /*0x63bf8f*/
            if ( !v34 ) /*0x63bf96*/
            {
LABEL_70:
              ((void (__thiscall *)(HighProcess *, Actor *, unsigned int))a1->Unk_61)(a1, v14, 0xFFFFFFFF); /*0x63bf9c*/
              return; /*0x63bfb2*/
            }
          }
          ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, v14); /*0x63c3f4*/
          if ( a1->unk25C ) /*0x63c3f6*/
          {
            ((void (__usercall *)(HighProcess *@<ecx>, Actor *, unsigned int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))a1->Unk_61)( /*0x63c40c*/
              a1,
              v14,
              0xFFFFFFFF,
              GameDay,
              unk260,
              a4,
              st4_0,
              a2,
              a7);
            a1->Unk_2E(a1, 0); /*0x63c41a*/
            return; /*0x63c423*/
          }
          Script_AddEventToExtraScript(v31, &v14->members.super.super.baseExtraList, 0x400); /*0x63c430*/
          if ( sub_565DF0(v31) ) /*0x63c43a*/
          {
            TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x63c448*/
            ExtraDataList_SetRunOnceExtraPackage(&v14->members.super.super.baseExtraList, (int)v31, v52); /*0x63c451*/
          }
          if ( !v31->members.time.duration ) /*0x63c456*/
          {
            v53 = a1->currentPackage == 0; /*0x63c460*/
            a1->follow = 0; /*0x63c467*/
            if ( v53 || ((unsigned __int8 (__thiscall *)(HighProcess *))a1->GetUnk25C)(a1) ) /*0x63c47a*/
            {
              if ( TESPackage_IsRuntimePackage(a1->editorPackage) ) /*0x63c4a5*/
              {
                editorPackage = a1->editorPackage; /*0x63c4b2*/
                v88 = editorPackage; /*0x63c4b7*/
                if ( TESPackage::IsTemporaryOverrideType(editorPackage) ) /*0x63c4bb*/
                {
                  ((void (__usercall *)(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))v14->vtbl->super.super.super.ClearModified)( /*0x63c4d4*/
                    v14,
                    0x30000,
                    GameDay,
                    unk260,
                    a4,
                    st4_0,
                    a2,
                    a7);
                  if ( ExtraDataList::GetExtraPackage(&v14->members.super.super.baseExtraList) ) /*0x63c4d8*/
                  {
                    process = v14->members.super.process; /*0x63c4e5*/
                    process->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&v14->members.super.super.baseExtraList); /*0x63c4ef*/
                    sub_5E8DE0(v14, v14->members.super.process->editorPackage); /*0x63c4fb*/
                    v57 = v14->members.super.process; /*0x63c500*/
                    v57->editorPackProcedure = ExtraDataList_GetPackageExtraIndex(&v14->members.super.super.baseExtraList); /*0x63c50a*/
                    v95 = v14->members.super.process; /*0x63c514*/
                    p_SetUnk02C = (void (__thiscall **)(LowProcess *, BSExtraData *))&v95->SetUnk02C; /*0x63c518*/
                    PackageExtraTarget = ExtraDataList_GetPackageExtraTarget(&v14->members.super.super.baseExtraList); /*0x63c51e*/
                    (*p_SetUnk02C)(v95, PackageExtraTarget); /*0x63c52a*/
                    p_SetProcedureCompleted = &v14->vtbl->super.super.SetProcedureCompleted; /*0x63c530*/
                    LOBYTE(v61) = ExtraDataList_GetPackageExtraComplete(&v14->members.super.super.baseExtraList); /*0x63c536*/
                    (*p_SetProcedureCompleted)((TESObjectREFR *)v14, v61); /*0x63c540*/
                    v96 = v14->members.super.process; /*0x63c549*/
                    p_SetUnk01C = (void (__thiscall **)(LowProcess *, int))&v96->SetUnk01C; /*0x63c54d*/
                    LOBYTE(v63) = ExtraDataList_GetPackageExtraActivate(&v14->members.super.super.baseExtraList); /*0x63c553*/
                    (*p_SetUnk01C)(v96, v63); /*0x63c55f*/
                    sub_4246D0(&v14->members.super.super.baseExtraList); /*0x63c563*/
                    editorPackage = v88; /*0x63c568*/
                  }
                  else
                  {
                    v14->members.super.process->editorPackage = 0; /*0x63c573*/
                    v14->members.super.process->editorPackProcedure = kProcedure_TRAVEL; /*0x63c579*/
                    v14->members.super.process->SetUnk02C(v14->members.super.process, 0); /*0x63c588*/
                    v14->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)v14, 0); /*0x63c595*/
                    v14->members.super.process->SetUnk01C(v14->members.super.process, 0); /*0x63c5a3*/
                    v14->members.super.process->Unk_06(v14->members.super.process, (UInt32)v14, 0); /*0x63c5af*/
                  }
                }
                else
                {
                  a1->editorPackage = 0; /*0x63c5b3*/
                }
                if ( editorPackage ) /*0x63c5bc*/
                  editorPackage->__vftable->super.Destroy((TESForm *)editorPackage, 1); /*0x63c5c7*/
                if ( !a1->unk0D0 ) /*0x63c5c9*/
                  ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, v14); /*0x63c5dd*/
              }
            }
            else
            {
              v54 = a1->currentPackage; /*0x63c480*/
              if ( v54 ) /*0x63c488*/
                v54->__vftable->super.Destroy((TESForm *)v54, 1); /*0x63c491*/
              a1->currentPackage = 0; /*0x63c493*/
            }
            v64 = a1->editorPackage; /*0x63c5df*/
            if ( v64 ) /*0x63c5e6*/
            {
              if ( sub_565DF0(v64) /*0x63c605*/
                || (a1->editorPackage->members.packageFlags & 2) != 0
                || (a1->editorPackage->members.packageFlags & 4) != 0 )
              {
                a1->unk1AC = 0.0; /*0x63c609*/
              }
            }
            if ( a1->unk044 ) /*0x63c60f*/
              FormHeapFree(a1->unk044); /*0x63c617*/
            a1->unk044 = 0; /*0x63c61f*/
            a1->usedItem = 0; /*0x63c622*/
            p_unk03C = &a1->unk03C; /*0x63c625*/
            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&a1->unk03C) ) /*0x63c62a*/
            {
              v66 = *p_unk03C; /*0x63c633*/
              if ( *p_unk03C ) /*0x63c633*/
                FormHeapFree(*p_unk03C); /*0x63c63a*/
              BSSimpleList_Remove((int *)&a1->unk03C, v66); /*0x63c645*/
            }
            a1->recentSocialTargetCooldown = 0.0; /*0x63c65a*/
            a1->unk030 = 0; /*0x63c660*/
            BSSimpleList_Clear(&a1->unk04C); /*0x63c667*/
          }
        }
      }
    }
    if ( !byte_B15800 || !unk_B3BF80 || !sub_6825C0((_DWORD *)unk_B3BF80, v14) ) /*0x63c680*/
      a8->members.super.process->Unk_08(a8->members.super.process); /*0x63c695*/
  }
}
