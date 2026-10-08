void __userpurge sub_657CC0(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESChildCELL *a5)
{
  TESObjectREFR *v6; // edi
  char v7; // bl
  int v8; // eax
  int v9; // ebp
  float *v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  double v16; // st7
  bool v17; // zf
  char *Name; // eax
  char v19; // al
  char v20; // al
  char v21; // al
  char *v22; // eax
  int v23; // ecx
  int v24; // ecx
  unsigned int *v25; // ebp
  int v26; // ebx
  float v27; // [esp+10h] [ebp-284h]
  float v28; // [esp+14h] [ebp-280h]
  const char *v29; // [esp+18h] [ebp-27Ch]
  unsigned __int8 *v30; // [esp+2Ch] [ebp-268h]
  int v31; // [esp+2Ch] [ebp-268h]
  float v32; // [esp+2Ch] [ebp-268h]
  char v33; // [esp+30h] [ebp-264h]
  float PointerAtOffset08; // [esp+30h] [ebp-264h]
  char Format[300]; // [esp+38h] [ebp-25Ch] BYREF
  char v36[300]; // [esp+164h] [ebp-130h] BYREF

  if ( a5 ) /*0x657ce5*/
  {
    if ( !(*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, double@<st0>, double@<st1>))a5->vtbl + 0x55))(a5, a4, a3) /*0x657d35*/
      || ((int)a5[2].vtbl & 0x20) != 0
      || ((int)a5[2].vtbl & 0x800) != 0
      || !Shared_GetDwordAtOffset40(a5)
      || *(_BYTE *)(Shared_GetDwordAtOffset40(a5) + 0x26) != 3 )
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 0x20))(a1); /*0x658492*/
      return; /*0x658492*/
    }
    v6 = (TESObjectREFR *)OblivionDynamicCast( /*0x657d51*/
                            a5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    if ( v6 ) /*0x657d58*/
    {
      if ( a1[0x16A] ) /*0x657d5e*/
        a1[0x16A] = sub_693210(v6, a1[0x16A]); /*0x657d73*/
      v7 = (*(int (__thiscall **)(char *, TESObjectREFR *, _DWORD))(*(_DWORD *)a1 + 0x18))(a1, v6, 0); /*0x657d87*/
      v33 = v7; /*0x657d91*/
      v8 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x184))(a1); /*0x657d95*/
      if ( v7 || !v8 && !a1[0xD0] ) /*0x657d9f*/
        (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x3C0))(a1, v6); /*0x657db2*/
      v9 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x184))(a1); /*0x657dc2*/
      (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 0x574))(a1); /*0x657dcc*/
      if ( v7 ) /*0x657dd0*/
      {
        sub_5E7BE0(); /*0x657dd4*/
        (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x55C))(a1, v6); /*0x657de4*/
      }
      if ( v9 /*0x657e19*/
        && *(_DWORD *)(v9 + 0x18) != 0xFFFFFFFF
        && (!PlayerCharacter::IsJailed(reference) && !reference->unk610 || (*(_BYTE *)(v9 + 0x1E) & 1) == 0) )
      {
        v10 = sub_571F90(1); /*0x657e21*/
        v28 = (float)(dword_B139A4 - dword_B13980); /*0x657e44*/
        v11 = (double)dword_B1399C; /*0x657e48*/
        v27 = v11; /*0x657e4e*/
        v12 = sub_571720(v10, v27, v28, 1); /*0x657e51*/
        v13 = *(_DWORD *)(v9 + 0x18); /*0x657e56*/
        v30 = (unsigned __int8 *)v12; /*0x657e59*/
        switch ( *(_DWORD *)(*(_DWORD *)(4 * v13 + 0xB152B0) /*0x657e7f*/
                           + 4 * (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x180))(a1)) )
        {
          case 0: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, char, int, int))(*(_DWORD *)a1 + 0x58C))( /*0x657e9d*/
              a1,
              v6,
              v33,
              1,
              0x101);
            break; /*0x657e9d*/
          case 2: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x51C))(a1, v6, 1); /*0x657f11*/
            break; /*0x657f13*/
          case 3: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x524))(a1, v6); /*0x657fda*/
            break; /*0x657fdc*/
          case 4: /*0x657e7f*/
            if ( sub_579440() == v6 ) /*0x6581ea*/
            {
              Name = TESObjectREFR_GetName(v6); /*0x658201*/
              _sprintf(Format, "%s is sleeping ", Name); /*0x658211*/
              if ( !v30 || _mbsicmp((const unsigned __int8 *)Format, v30) ) /*0x658227*/
                Interface_ConsolePrint(Format); /*0x65823c*/
            }
            break; /*0x658244*/
          case 5: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x510))(a1, v6); /*0x658254*/
            break; /*0x658256*/
          case 6: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, int, unsigned int, _DWORD))(*(_DWORD *)a1 + 0x198))( /*0x65826c*/
              a1,
              v6,
              1,
              0xFFFFFFFF,
              0);
            break; /*0x65826c*/
          case 7: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x508))(a1, v6); /*0x65827c*/
            break; /*0x65827e*/
          case 8: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x518))(a1, v6); /*0x6582a0*/
            break; /*0x6582a2*/
          case 9: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x514))(a1, v6); /*0x657f7c*/
            break; /*0x657f7e*/
          case 0xA: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x1A0))(a1, v6); /*0x6582da*/
            goto LABEL_84; /*0x6582da*/
          case 0xC: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x584))(a1, v6); /*0x65828e*/
            break; /*0x658290*/
          case 0xD: /*0x657e7f*/
            if ( !*((_DWORD *)a1 + 0xB) ) /*0x658067*/
              (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x558))(a1, v6); /*0x658078*/
            v14 = *((_DWORD *)a1 + 0xB); /*0x65807a*/
            if ( !v14 || (*(_DWORD *)(v14 + 8) & 0x20) != 0 ) /*0x658089*/
              (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v6, 1); /*0x658098*/
            if ( (*(_BYTE *)(v9 + 0x1E) & 1) != 0 ) /*0x65809e*/
            {
              if ( !sub_663A60((int)v6) && sub_663A00() < (int)stru_B36A80.value ) /*0x65818b*/
                sub_5668E0((_DWORD *)v9, 0); /*0x658195*/
            }
            else
            {
              if ( Actor::GetCurrentPackage((Actor *)v6)->members.type == kPackageType_Follow ) /*0x6580af*/
              {
                PointerAtOffset08 = (float)(int)Shared_GetPointerAtOffset08(*(Atmosphere **)(*((_DWORD *)a1 + 2) + 0x28)); /*0x6580cc*/
                if ( PointerAtOffset08 < TesObjectREF_GetDistance(v6, (TESObjectREFR *)*((_DWORD *)a1 + 0xB), 0) ) /*0x6580e0*/
                  break; /*0x6580e0*/
                goto LABEL_58; /*0x6580e0*/
              }
              v31 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v9 + 0x28)); /*0x658104*/
              if ( v31 <= 0 ) /*0x658108*/
                v31 = 0xC8; /*0x65810a*/
              DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x658114*/
              if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x65811b*/
                v16 = *GameSetting_GetSafeFloatPointer(&flt_B36A88[6]); /*0x65812e*/
              else
                v16 = (double)v31 * *GameSetting_GetSafeFloatPointer(&flt_B36A88[4]); /*0x658140*/
              v32 = v16; /*0x658145*/
              v17 = v32 * dbl_A2FAA0 >= TesObjectREF_GetDistance(v6, (TESObjectREFR *)*((_DWORD *)a1 + 0xB), 0); /*0x658161*/
LABEL_69:
              if ( v17 ) /*0x6581b5*/
              {
LABEL_58:
                (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v6, 1); /*0x6580e6*/
                break; /*0x6580f5*/
              }
            }
            break; /*0x6580f5*/
          case 0xE: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, _DWORD))(*(_DWORD *)a1 + 0x51C))(a1, v6, 0); /*0x6581dc*/
            break; /*0x6581de*/
          case 0xF: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, _DWORD, int, unsigned int))(*(_DWORD *)a1 + 0x19C))( /*0x6582b8*/
              a1,
              v6,
              0,
              1,
              0xFFFFFFFF);
            break; /*0x6582b8*/
          case 0x11: /*0x657e7f*/
            if ( !*((_DWORD *)a1 + 0xB) ) /*0x658005*/
            {
              (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x558))(a1, v6); /*0x658016*/
              if ( !*((_DWORD *)a1 + 0xB) ) /*0x658018*/
              {
                (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v6, 1); /*0x65802b*/
                if ( !a1[0xD0] ) /*0x65802d*/
                  (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x194))(a1, v6); /*0x658041*/
              }
            }
            (*(void (__thiscall **)(char *, TESObjectREFR *, int, int))(*(_DWORD *)a1 + 0x84))(a1, v6, v9, 1); /*0x658051*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v6, 1); /*0x658060*/
            break; /*0x658062*/
          case 0x16: /*0x657e7f*/
            sub_654F10(a1, v13, a2, a3, v11, (Actor *)v6); /*0x6581a2*/
            v17 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x36C))(a1) == 0; /*0x6581b3*/
            goto LABEL_69; /*0x6581b3*/
          case 0x17: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x560))(a1, v6); /*0x6582c8*/
            break; /*0x6582ca*/
          case 0x1A: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x54C))(a1, v6); /*0x657fa0*/
            break; /*0x657fa2*/
          case 0x1B: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x548))(a1, v6); /*0x657f34*/
            break; /*0x657f36*/
          case 0x1C: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x550))(a1, v6); /*0x657f8e*/
            break; /*0x657f90*/
          case 0x1D: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x520))(a1, v6); /*0x657ffe*/
            break; /*0x658000*/
          case 0x1E: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x530))(a1, v6); /*0x657fec*/
            break; /*0x657fee*/
          case 0x20: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x52C))(a1, v6); /*0x657f58*/
            break; /*0x657f5a*/
          case 0x23: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x534))(a1, v6); /*0x657f46*/
            break; /*0x657f48*/
          case 0x24: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x538))(a1, v6); /*0x657fc8*/
            break; /*0x657fca*/
          case 0x25: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, int, _DWORD))(*(_DWORD *)a1 + 0x588))(a1, v6, 1, 0); /*0x657fb6*/
            break; /*0x657fb8*/
          case 0x28: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x540))(a1, v6); /*0x657f6a*/
            break; /*0x657f6c*/
          case 0x29: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x53C))(a1, v6); /*0x657f00*/
            break; /*0x657f02*/
          case 0x2B: /*0x657e7f*/
            (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v6, 2); /*0x657f22*/
            break; /*0x657f24*/
          case 0x2C: /*0x657e7f*/
LABEL_84:
            v19 = *(_BYTE *)(v9 + 0x20);        // 3DTheft decode 2026-05-17: alternate DONE handler queues package done event/cleanup; this is package completion, distinct from AddScriptPackage's earlier dialogue-gate skip. /*0x6582dc*/
            if ( v19 == 3 /*0x658305*/
              || v19 == 4
              || (sub_566DC0(
                    (TESPackage *)v9,
                    kTerrainLODQuadRayDirectionZ,
                    a3,
                    a2,
                    (Actor *)v6,
                    0,
                    kTerrainLODQuadRayDirectionZ),
                  !v20) )
            {
              (*(void (__thiscall **)(char *, TESObjectREFR *, unsigned int))(*(_DWORD *)a1 + 0x188))( /*0x658314*/
                a1,
                v6,
                0xFFFFFFFF);
              return; /*0x658316*/
            }
            Script_AddEventToExtraScript(v9, &v6->member.baseExtraList, 0x400); /*0x658325*/
            if ( sub_565DF0((_DWORD *)v9) ) /*0x65832f*/
            {
              TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x65833d*/
              ExtraDataList_SetRunOnceExtraPackage(&v6->member.baseExtraList, v9, v21); /*0x658346*/
            }
            if ( sub_579440() == v6 ) /*0x658352*/
            {
              v29 = *(const char **)(4 * *(char *)(*((_DWORD *)a1 + 2) + 0x20) + 0xB12988); /*0x658362*/
              v22 = TESObjectREFR_GetName(v6); /*0x658365*/
              _sprintf(v36, "%s is done with %s", v22, v29); /*0x658378*/
              if ( !v30 || _mbsicmp((const unsigned __int8 *)v36, v30) ) /*0x658393*/
                Interface_ConsolePrint(v36); /*0x6583a7*/
            }
            if ( !*(_DWORD *)(v9 + 0x30) ) /*0x6583b3*/
            {
              v23 = *((_DWORD *)a1 + 0x30); /*0x6583bc*/
              *((_DWORD *)a1 + 0xB) = 0; /*0x6583c4*/
              if ( v23 ) /*0x6583c7*/
              {
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v23 + 0x10))(v23, 1); /*0x6583d0*/
                *((_DWORD *)a1 + 0x30) = 0; /*0x6583d2*/
              }
              else if ( TESPackage_IsRuntimePackage(*((TESPackage **)a1 + 2)) ) /*0x6583dd*/
              {
                v6->vtbl->super.ClearModified((TESForm *)v6, 0x30000); /*0x6583f2*/
                v24 = *((_DWORD *)a1 + 2); /*0x6583f4*/
                if ( v24 ) /*0x6583f9*/
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 0x10))(v24, 1); /*0x658402*/
                v17 = a1[0xD0] == 0; /*0x658404*/
                *((_DWORD *)a1 + 2) = 0; /*0x65840b*/
                if ( v17 ) /*0x65840e*/
                  (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x194))(a1, v6); /*0x65841b*/
              }
              if ( *((_DWORD *)a1 + 0x11) ) /*0x65841d*/
                FormHeapFree(*((_DWORD *)a1 + 0x11)); /*0x658425*/
              v25 = (unsigned int *)(a1 + 0x3C); /*0x65842d*/
              *((_DWORD *)a1 + 0x11) = 0; /*0x658432*/
              while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(a1 + 0x3C)) ) /*0x658435*/
              {
                v26 = *v25; /*0x658440*/
                if ( *v25 ) /*0x658440*/
                  FormHeapFree(*v25); /*0x658448*/
                BSSimpleList_Remove((int *)a1 + 0xF, v26); /*0x658453*/
              }
              *((_DWORD *)a1 + 0xC) = 0; /*0x658466*/
              BSSimpleList_Clear((_DWORD *)a1 + 0x13); /*0x65846d*/
            }
            break; /*0x658472*/
          default:
            break;
        }
      }
    }
    if ( byte_B15800 && v6 && unk_B3BF80 ) /*0x657eac*/
    {
      if ( sub_6825C0((_DWORD *)unk_B3BF80, (Actor *)v6) ) /*0x657eb7*/
        return; /*0x657ebe*/
      sub_6826D0((_DWORD *)unk_B3BF80, v6); /*0x657ec7*/
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)a5[0x16].vtbl + 0x20))(a5[0x16].vtbl); /*0x657ed8*/
  }
}
