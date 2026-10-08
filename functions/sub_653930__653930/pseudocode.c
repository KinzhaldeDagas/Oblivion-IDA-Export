char __userpurge sub_653930@<al>(
        _DWORD *a1@<ecx>,
        unsigned int PackageExtraTarget@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        double a9@<st3>,
        double a10@<st2>,
        double a11@<st1>,
        double Distance@<st0>,
        _DWORD *a13,
        float a14)
{
  char result; // al
  Actor *v16; // edi
  int v17; // ebx
  int v18; // ebx
  int v19; // ebp
  _DWORD *v20; // ecx
  _DWORD *v21; // ebp
  TESPackage *CurrentPackage; // eax
  char v23; // al
  TESPackage *v24; // eax
  char v25; // al
  int v26; // eax
  int v27; // eax
  int v30; // ecx
  TESPackage *v31; // eax
  int v32; // ebx
  int v33; // ebp
  int v34; // eax
  char v35; // al
  bool v36; // zf
  char v37; // al
  char v38; // al
  int v39; // ecx
  TESPackage *v40; // ebx
  LowProcess *process; // ebx
  LowProcess *v42; // ebx
  void (__thiscall **v43)(_DWORD *); // ebx
  void (__thiscall **p_SetProcedureCompleted)(Actor *); // ebx
  int v45; // eax
  void (__thiscall **p_GetName)(TESPackage *); // ebx
  int v47; // eax
  unsigned int *v48; // ebx
  int v49; // ebp
  int v50; // [esp+18h] [ebp-24h]
  float v51; // [esp+1Ch] [ebp-20h]
  float v52; // [esp+1Ch] [ebp-20h]
  float v53; // [esp+1Ch] [ebp-20h]
  float v57; // [esp+28h] [ebp-14h]
  char v58; // [esp+33h] [ebp-9h]
  int v60; // [esp+38h] [ebp-4h]
  TESPackage *v61; // [esp+38h] [ebp-4h]

  result = (char)a13; /*0x653930*/
  if ( a13 ) /*0x65393c*/
  {
    v16 = (Actor *)OblivionDynamicCast( /*0x653959*/
                     a13,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v58 = 1; /*0x653960*/
    if ( v16 ) /*0x653965*/
    {
      (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD))(*a1 + 0x18))(a1, v16, 0); /*0x653975*/
      v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1); /*0x653983*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x574))(a1); /*0x65398f*/
      if ( v17 ) /*0x653993*/
      {
        if ( *(_DWORD *)(v17 + 0x18) != 0xFFFFFFFF /*0x6539c4*/
          && (!PlayerCharacter::IsJailed(reference) && !reference->unk610 || (*(_BYTE *)(v17 + 0x1E) & 1) == 0) )
        {
          do /*0x6539dc*/
          {
            v18 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1); /*0x6539dc*/
            if ( !v18 ) /*0x6539e0*/
              break; /*0x6539e0*/
            v19 = *(_DWORD *)(v18 + 0x18); /*0x6539ee*/
            switch ( *(_DWORD *)(*(_DWORD *)(4 * v19 + 0xB152B0) /*0x653a0f*/
                               + 4 * (*(int (__thiscall **)(_DWORD *))(*a1 + 0x180))(a1)) )
            {                                   // 3DTheft decode 2026-05-17: high/mid process package scheduler dispatches ProcedureRows[package->procedureArrayIndex][slot] for the actor's current package/procedure slot.
              case 0: /*0x653a0f*/
                v20 = *(_DWORD **)(v18 + 0x24); /*0x653a16*/
                v21 = 0; /*0x653a19*/
                if ( v20 ) /*0x653a1d*/
                  v21 = (_DWORD *)sub_5697E0(v20); /*0x653a24*/
                if ( a1[0xC] ) /*0x653a26*/
                {
                  if ( !a1[0x30] ) /*0x653a2d*/
                    v21 = (_DWORD *)a1[0xC]; /*0x653a36*/
                }
                if ( (*(int (__thiscall **)(_DWORD *, int, int, unsigned int))(*a1 + 0x36C))( /*0x653a42*/
                       a1,
                       a4,
                       a3,
                       PackageExtraTarget) )
                {
                  __asm { fld     dword ptr ds:0A30634h } /*0x653a48*/
                  __asm { fstp    [esp+14h+var_14]; float }
                  CurrentPackage = Actor::GetCurrentPackage(v16); /*0x653a57*/
                  Distance = sub_566DC0(CurrentPackage, Distance, a11, a10, v16, 0, v57); /*0x653a5e*/
                  if ( !v23 ) /*0x653a65*/
                    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16); /*0x653a72*/
                }
                PackageExtraTarget = 0xFFFFFFFF; /*0x653a7c*/
                a3 = 1; /*0x653a7e*/
                a4 = 1; /*0x653a80*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x58C))(a1, v16); /*0x653a85*/
                if ( v16->vtbl->super.super.GetSleepState((TESObjectREFR *)v16) ) /*0x653a91*/
                  goto LABEL_76; /*0x653a91*/
                if ( !Actor::GetCurrentPackage(v16) ) /*0x653a9d*/
                  goto LABEL_76; /*0x653a9d*/
                if ( Actor::GetCurrentPackage(v16)->members.type == kPackageType_Travel ) /*0x653ab5*/
                  goto LABEL_76; /*0x653ab5*/
                __asm { fld     dword ptr ds:0A30634h } /*0x653abb*/
                __asm { fstp    [esp+20h+var_20]; float }
                v24 = Actor::GetCurrentPackage(v16); /*0x653aca*/
                Distance = sub_566DC0(v24, Distance, a11, a10, v16, 0, v51); /*0x653ad1*/
                if ( !v25 /*0x653af7*/
                  || v16->members.super.process->GetProcessLevel(v16->members.super.process) != 1
                  || v21 && sub_4D74B0(v21) )
                {
                  goto LABEL_76; /*0x653afe*/
                }
                v58 = 1; /*0x653b04*/
                break; /*0x653b09*/
              case 1: /*0x653a0f*/
              case 4: /*0x653a0f*/
                ++a1[1]; /*0x653cda*/
                break; /*0x653cde*/
              case 2: /*0x653a0f*/
                v58 = sub_64EE60(a1, a10, a11, Distance, v16); /*0x653b16*/
                break; /*0x653b1a*/
              case 5: /*0x653a0f*/
                v58 = sub_64EE20((int)a1, a10, a11, Distance, (PlayerCharacter *)v16); /*0x653ceb*/
                break; /*0x653cef*/
              case 6: /*0x653a0f*/
                if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) ) /*0x653cfe*/
                  Distance = ((double (__thiscall *)(_DWORD *, Actor *))*(_DWORD *)(*a1 + 0x1B0))(a1, v16); /*0x653d0f*/
                __asm { fld     dword ptr ds:0A71E4Ch } /*0x653d11*/
                __asm { fstp    [esp+24h+var_24] }
                v58 = sub_64EC50((TESObjectREFR **)a1, a11, Distance, a8, a10, (TESForm *)v16, v50, 1);// 3DTheft decode 2026-05-17: FOLLOW procedure case dispatches sub_64EC50 after the vfunc +0x36C/+0x1B0 checks. /*0x653d25*/
                break; /*0x653d29*/
              case 7: /*0x653a0f*/
                if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) ) /*0x653d38*/
                  Distance = ((double (__thiscall *)(_DWORD *, Actor *))*(_DWORD *)(*a1 + 0x1B0))(a1, v16); /*0x653d49*/
                v58 = sub_64E320(a1, v18, (int)v16, a5, a6, a7, a8, a9, a10, a11, Distance, (TESChildCELL *)v16); /*0x653d53*/
                break; /*0x653d57*/
              case 8: /*0x653a0f*/
                if ( (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x36C))(a1, a4) ) /*0x653d84*/
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16); /*0x653d95*/
                a4 = (int)v16; /*0x653d9f*/
                (*(void (__thiscall **)(_DWORD *))(*a1 + 0x518))(a1); /*0x653da2*/
                goto LABEL_76; /*0x653da4*/
              case 9: /*0x653a0f*/
                __asm { fld     [esp+1Ch+arg_4] } /*0x653d5e*/
                __asm { fstp    [esp+20h+var_20] }
                v58 = (*(int (__thiscall **)(_DWORD *, Actor *, _DWORD))(*a1 + 0x56C))(a1, v16, LODWORD(v52)); /*0x653d71*/
                break; /*0x653d75*/
              case 0xA: /*0x653a0f*/
                if ( (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x36C))(a1, a4) ) /*0x653de2*/
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16); /*0x653df3*/
                a4 = (int)v16; /*0x653dfd*/
                (*(void (__thiscall **)(_DWORD *))(*a1 + 0x1A0))(a1); /*0x653e00*/
                goto LABEL_76; /*0x653e02*/
              case 0xC: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x584))(a1, v16); /*0x653b3c*/
                goto LABEL_76; /*0x653b3e*/
              case 0xD: /*0x653a0f*/
                if ( !a1[0xB] ) /*0x653bc7*/
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, v16); /*0x653bd8*/
                v26 = a1[0xB]; /*0x653bda*/
                if ( !v26 ) /*0x653bdf*/
                  goto LABEL_45; /*0x653bdf*/
                if ( (*(_DWORD *)(v26 + 8) & 0x20) != 0 ) /*0x653be9*/
                  goto LABEL_45; /*0x653be9*/
                sub_566DB0((_DWORD *)a1[2]); /*0x653bee*/
                v60 = v27; /*0x653bf5*/
                __asm { fild    [esp+1Ch+var_4] } /*0x653bf9*/
                if ( v27 < 0 ) /*0x653bfd*/
                  __asm { fadd    dword ptr ds:0A2FC78h } /*0x653bff*/
                __asm /*0x653c05*/
                {
                  fstp    [esp+1Ch+var_8]
                  fld1
                  fcomp   [esp+1Ch+var_8]
                  fnstsw  ax
                }
                if ( (_AX & 0x4100) == 0 ) /*0x653c14*/
                {
                  __asm /*0x653c16*/
                  {
                    fld     dword ptr ds:0A57A64h
                    fstp    [esp+1Ch+var_8]
                  }
                }
                Distance = TesObjectREF_GetDistance((TESObjectREFR *)v16, (TESObjectREFR *)a1[0xB], 0); /*0x653c28*/
                __asm /*0x653c2d*/
                {
                  fld     [esp+1Ch+var_8]
                  fcompp
                  fnstsw  ax
                }
                if ( (_AX & 0x100) == 0 ) /*0x653c38*/
LABEL_45:
                  ++a1[1]; /*0x653c3e*/
                goto LABEL_76; /*0x653c42*/
              case 0xE: /*0x653a0f*/
                if ( !a1[0xB] ) /*0x653c47*/
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, v16); /*0x653c58*/
                v30 = a1[0xB]; /*0x653c5a*/
                if ( v30 ) /*0x653c5f*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 0x190))(v30) ) /*0x653c71*/
                  {
                    if ( *(_BYTE *)(v18 + 0x20) == 2 ) /*0x653c7b*/
                      Distance = ((double (__thiscall *)(_DWORD *, Actor *, _DWORD, int))*(_DWORD *)(*a1 + 0x84))( /*0x653c8e*/
                                   a1,
                                   v16,
                                   a1[2],
                                   1);
                  }
                }
                else
                {
                  ++a1[1]; /*0x653c61*/
                }
                sub_64EE60(a1, a10, a11, Distance, v16); /*0x653c93*/
                if ( !Actor::GetCurrentPackage(v16) ) /*0x653c9a*/
                  goto LABEL_76; /*0x653c9a*/
                v31 = Actor::GetCurrentPackage(v16); /*0x653caa*/
                if ( !sub_5687D0(v31, v18, Distance, (TESObjectREFR *)v16) /*0x653ccb*/
                  || v16->members.super.process->GetProcessLevel(v16->members.super.process) != 1 )
                {
                  goto LABEL_76; /*0x653ccb*/
                }
                v58 = 1; /*0x653cd1*/
                break; /*0x653cd5*/
              case 0xF: /*0x653a0f*/
                if ( (*(int (__thiscall **)(_DWORD *, int, int, unsigned int))(*a1 + 0x36C))( /*0x653db0*/
                       a1,
                       a4,
                       a3,
                       PackageExtraTarget) )
                {
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16); /*0x653dc1*/
                }
                PackageExtraTarget = 0xFFFFFFFF; /*0x653dcb*/
                a3 = 1; /*0x653dcd*/
                a4 = 0; /*0x653dcf*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x19C))(a1, v16); /*0x653dd4*/
                goto LABEL_76; /*0x653dd6*/
              case 0x12: /*0x653a0f*/
              case 0x17: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, v16, 1); /*0x653e11*/
                goto LABEL_76; /*0x653e11*/
              case 0x1A: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x54C))(a1, v16); /*0x653b9c*/
                break; /*0x653b9e*/
              case 0x1B: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x548))(a1, v16); /*0x653b62*/
                goto LABEL_76; /*0x653b64*/
              case 0x1C: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x550))(a1, v16); /*0x653b74*/
                goto LABEL_76; /*0x653b76*/
              case 0x1D: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x590))(a1, v16); /*0x653bae*/
                goto LABEL_76; /*0x653bb0*/
              case 0x1E: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x530))(a1, v16); /*0x653bc0*/
                goto LABEL_76; /*0x653bc2*/
              case 0x25: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *, int, _DWORD))(*a1 + 0x588))(a1, v16, 1, 0); /*0x653b8a*/
                goto LABEL_76; /*0x653b8c*/
              case 0x29: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x53C))(a1, v16); /*0x653b2a*/
                goto LABEL_76; /*0x653b2c*/
              case 0x2B: /*0x653a0f*/
                (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, v16, 2); /*0x653b50*/
                break; /*0x653b52*/
              default:
LABEL_76:
                v58 = 0; /*0x653e13*/
                break; /*0x653e13*/
            }
            if ( Actor::GetProcessLevel(v16) == 1 ) /*0x653e22*/
            {
              v32 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1); /*0x653e34*/
              if ( v32 ) /*0x653e38*/
              {
                v33 = *(_DWORD *)(v32 + 0x18); /*0x653e46*/
                if ( *(_DWORD *)(*(_DWORD *)(4 * v33 + 0xB152B0) /*0x653e58*/
                               + 4 * (*(int (__thiscall **)(_DWORD *))(*a1 + 0x180))(a1)) == 0x2C )
                {
                  v34 = *(_DWORD *)(v32 + 0x18); /*0x653e5e*/
                  if ( v34 ) /*0x653e63*/
                  {
                    if ( v34 == 3 ) /*0x653e7f*/
                      return (*(int (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, v16, 0xFFFFFFFF); /*0x653e7f*/
                    v37 = *(_BYTE *)(v32 + 0x20); /*0x653e85*/
                    if ( v37 == 3 ) /*0x653e8a*/
                      return (*(int (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, v16, 0xFFFFFFFF); /*0x654104*/
                    v36 = v37 == 4; /*0x653e90*/
                  }
                  else
                  {
                    __asm { fld     dword ptr ds:0A30634h } /*0x653e65*/
                    __asm { fstp    [esp+20h+var_20]; float }
                    sub_566DC0((TESPackage *)v32, Distance, a11, a10, v16, v34, v53); /*0x653e73*/
                    v36 = v35 == 0; /*0x653e78*/
                  }
                  if ( v36 ) /*0x653e92*/
                    return (*(int (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, v16, 0xFFFFFFFF); /*0x653e92*/
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x194))(a1, v16); /*0x653ea3*/
                  Distance = Script_AddEventToExtraScript(v32, &v16->members.super.super.baseExtraList, 0x400); /*0x653eaf*/
                  if ( sub_565DF0((_DWORD *)v32) ) /*0x653eb9*/
                  {
                    Distance = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x653ec7*/
                    ExtraDataList_SetRunOnceExtraPackage(&v16->members.super.super.baseExtraList, v32, v38); /*0x653ed0*/
                  }
                  if ( !*(_DWORD *)(v32 + 0x30) ) /*0x653ed5*/
                  {
                    v36 = a1[0x30] == 0; /*0x653edf*/
                    a1[0xB] = 0; /*0x653ee6*/
                    if ( v36 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x388))(a1) ) /*0x653ef9*/
                    {
                      if ( TESPackage_IsRuntimePackage((TESPackage *)a1[2]) ) /*0x653f24*/
                      {
                        v40 = (TESPackage *)a1[2]; /*0x653f31*/
                        if ( TESPackage::IsTemporaryOverrideType(v40) ) /*0x653f3a*/
                        {
                          ((void (__thiscall *)(Actor *, int, int, int, unsigned int))v16->vtbl->super.super.super.ClearModified)( /*0x653f53*/
                            v16,
                            0x30000,
                            a4,
                            a3,
                            PackageExtraTarget);
                          if ( ExtraDataList::GetExtraPackage(&v16->members.super.super.baseExtraList) ) /*0x653f57*/
                          {
                            process = v16->members.super.process; /*0x653f64*/
                            process->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&v16->members.super.super.baseExtraList); /*0x653f6e*/
                            sub_5E8DE0(v16, v16->members.super.process->editorPackage); /*0x653f7a*/
                            v42 = v16->members.super.process; /*0x653f7f*/
                            v42->editorPackProcedure = ExtraDataList_GetPackageExtraIndex(&v16->members.super.super.baseExtraList); /*0x653f89*/
                            a13 = &v16->members.super.process->__vftable; /*0x653f93*/
                            v43 = (void (__thiscall **)(_DWORD *))(*a13 + 0xD0); /*0x653f97*/
                            PackageExtraTarget = (unsigned int)ExtraDataList_GetPackageExtraTarget(&v16->members.super.super.baseExtraList); /*0x653fa6*/
                            (*v43)(a13); /*0x653fa9*/
                            p_SetProcedureCompleted = (void (__thiscall **)(Actor *))&v16->vtbl->super.super.SetProcedureCompleted; /*0x653faf*/
                            LOBYTE(v45) = ExtraDataList_GetPackageExtraComplete(&v16->members.super.super.baseExtraList); /*0x653fb5*/
                            a3 = v45; /*0x653fbe*/
                            (*p_SetProcedureCompleted)(v16); /*0x653fbf*/
                            v61 = (TESPackage *)v16->members.super.process; /*0x653fc8*/
                            p_GetName = (void (__thiscall **)(TESPackage *))&v61->__vftable[3].super.GetName; /*0x653fcc*/
                            LOBYTE(v47) = ExtraDataList_GetPackageExtraActivate(&v16->members.super.super.baseExtraList); /*0x653fd2*/
                            a4 = v47; /*0x653fdb*/
                            (*p_GetName)(v61); /*0x653fde*/
                            sub_4246D0(&v16->members.super.super.baseExtraList); /*0x653fe2*/
                            v40 = v61; /*0x653fe7*/
                          }
                          else
                          {
                            v16->members.super.process->editorPackage = 0; /*0x653ff2*/
                            v16->members.super.process->editorPackProcedure = kProcedure_TRAVEL; /*0x653ff8*/
                            PackageExtraTarget = 0; /*0x654006*/
                            ((void (__thiscall *)(LowProcess *))v16->members.super.process->SetUnk02C)(v16->members.super.process); /*0x654007*/
                            a3 = 0; /*0x654011*/
                            ((void (__thiscall *)(Actor *))v16->vtbl->super.super.SetProcedureCompleted)(v16); /*0x654014*/
                            a4 = 0; /*0x654021*/
                            ((void (__thiscall *)(LowProcess *))v16->members.super.process->SetUnk01C)(v16->members.super.process); /*0x654022*/
                            v16->members.super.process->Unk_06(v16->members.super.process, (UInt32)v16, 0); /*0x65402e*/
                          }
                        }
                        else
                        {
                          a1[2] = 0; /*0x654032*/
                        }
                        if ( v40 ) /*0x65403b*/
                          v40->__vftable->super.Destroy((TESForm *)v40, 1); /*0x654046*/
                        if ( !*((_BYTE *)a1 + 0xD0) ) /*0x654048*/
                          (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x194))(a1, v16); /*0x65405c*/
                      }
                    }
                    else
                    {
                      v39 = a1[0x30]; /*0x653eff*/
                      if ( v39 ) /*0x653f07*/
                        (*(void (__thiscall **)(int, int))(*(_DWORD *)v39 + 0x10))(v39, 1); /*0x653f10*/
                      a1[0x30] = 0; /*0x653f12*/
                    }
                    if ( a1[0x11] ) /*0x65405e*/
                      FormHeapFree(a1[0x11]); /*0x654068*/
                    a1[0x11] = 0; /*0x654070*/
                    a1[9] = 0; /*0x654073*/
                    v48 = a1 + 0xF; /*0x654076*/
                    while ( a1[0x10] || *v48 ) /*0x654089*/
                    {
                      v49 = *v48; /*0x65408b*/
                      if ( *v48 ) /*0x65408b*/
                        FormHeapFree(*v48); /*0x654092*/
                      BSSimpleList_Remove(a1 + 0xF, v49); /*0x65409d*/
                    }
                    a1[0xC] = 0; /*0x6540a7*/
                    BSSimpleList_Clear(a1 + 0x13); /*0x6540ae*/
                  }
                }
              }
            }
          }
          while ( v58 ); /*0x6539dc*/
        }
      }
    }
    if ( !byte_B15800 ) /*0x6540be*/
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]); /*0x6540be*/
    if ( !v16 ) /*0x6540c9*/
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]); /*0x6540c9*/
    if ( !unk_B3BF80 ) /*0x6540cb*/
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]); /*0x6540cb*/
    result = sub_6825C0((_DWORD *)unk_B3BF80, v16); /*0x6540d6*/
    if ( !result ) /*0x6540dd*/
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]); /*0x6540eb*/
  }
  return result; /*0x6540f0*/
}
