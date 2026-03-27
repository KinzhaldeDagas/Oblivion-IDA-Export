char __userpurge sub_659010@<al>(
        LowProcess *a1@<ecx>,
        int a2@<edi>,
        double st5_0@<st2>,
        double a4@<st1>,
        double st7_0@<st0>,
        MobileObject *a6)
{
  char result; // al
  Actor *v8; // edi
  double GameHour; // st7
  TESPackage *editorPackage; // eax
  UInt32 v11; // ebp
  TESPackage *v12; // eax
  LocationData *location; // ecx
  UInt32 procedureArrayIndex; // eax
  char v16; // al
  double v19; // st7
  TESPackage *v20; // ecx
  void (__thiscall **p_Unk_105)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ebp
  int v22; // eax
  char v23; // al
  int v24; // eax
  TESObjectCELL *ParentCell; // eax
  int v26; // eax
  TESObjectCELL *v27; // eax
  char *v28; // ecx
  PlayerCharacter *v30; // eax
  char *Name; // eax
  char *v32; // eax
  Actor *follow; // eax
  char v34; // al
  TESObjectCELL *v36; // eax
  char IsInterior; // al
  float *v38; // ecx
  TESPackage *v41; // eax
  TESPackage *v42; // ecx
  char v43; // al
  TESPackage *v44; // ecx
  char v45; // al
  TESPackage *v46; // ecx
  char *v47; // eax
  unsigned int *p_unk03C; // ebp
  int v49; // ebx
  TESPackage *v50; // ebp
  bool v51; // zf
  float *v53; // [esp+24h] [ebp-184h]
  float *v54; // [esp+24h] [ebp-184h]
  float a3; // [esp+28h] [ebp-180h]
  float a3a; // [esp+28h] [ebp-180h]
  TESObjectCELL *v57; // [esp+2Ch] [ebp-17Ch]
  float *v58; // [esp+2Ch] [ebp-17Ch]
  float *v59; // [esp+2Ch] [ebp-17Ch]
  TESWorldSpace *a5; // [esp+30h] [ebp-178h]
  float a5a; // [esp+30h] [ebp-178h]
  float a5b; // [esp+30h] [ebp-178h]
  float v63; // [esp+34h] [ebp-174h]
  float v64; // [esp+38h] [ebp-170h]
  float v65; // [esp+38h] [ebp-170h]
  float v66; // [esp+38h] [ebp-170h]
  float v67; // [esp+38h] [ebp-170h]
  const char *v68; // [esp+38h] [ebp-170h]
  const char *v69; // [esp+38h] [ebp-170h]
  float v70; // [esp+38h] [ebp-170h]
  const char *v71; // [esp+38h] [ebp-170h]
  NiAVObject *v77; // [esp+4Ch] [ebp-15Ch]
  char v84[12]; // [esp+60h] [ebp-148h] BYREF
  char v85[12]; // [esp+6Ch] [ebp-13Ch] BYREF
  char Format[300]; // [esp+78h] [ebp-130h] BYREF

  result = (char)a6;
  if ( a6 )
  {
    v8 = (Actor *)OblivionDynamicCast(
                    a6,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
    __asm { fstp    [esp+16Ch+var_14C] }
    if ( v8 )
    {
      if ( a1->Unk_06(a1, (UInt32)v8, 0) )
      {
        a1->RemoveFornitureInteraction(a1, v8);
        sub_5E7BE0();
        ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_156)(a1, v8);
      }
      editorPackage = a1->editorPackage;
      v11 = (UInt32)editorPackage;
      if ( editorPackage )
      {
        if ( editorPackage->members.procedureArrayIndex != 0xFFFFFFFF
          && (!PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) && !TESDataHandler_g_PlayerRef->unk610
           || (*(_BYTE *)(v11 + 0x1E) & 1) == 0) )
        {
          sub_644CE0(a1);
          v12 = a1->editorPackage;
          location = v12->members.location;
          procedureArrayIndex = v12->members.procedureArrayIndex;
          _EBX = *(_DWORD *)(4 * procedureArrayIndex + 0xB152B0);
          switch ( *(_DWORD *)(_EBX + 4 * a1->editorPackProcedure) )
          {
            case 0:
              if ( location )
                _EBX = sub_5697E0(location);
              else
                _EBX = 0;
              __asm { fld     dword ptr ds:0A30634h }
              __asm { fstp    [esp+170h+var_170]; float }
              GameHour = sub_566DC0(a1->editorPackage, GameHour, a4, v8, 0, v64);
              if ( !v16 )
              {
                _EBP = TESForm_LookupByFormID(0x3Au);
                TimeGlobals_GetGameHour(&TimeGlobals);
                __asm
                {
                  fstp    [esp+16Ch+var_154]
                  fld     [esp+16Ch+var_154]
                }
                __asm { fstp    [esp+16Ch+var_15C] }
                sub_6599B0((TESChildCELL *)v8);
                __asm
                {
                  fcomp   [esp+16Ch+var_15C]
                  fnstsw  ax
                }
                if ( (_AX & 0x4100) == 0 )
                {
                  __asm
                  {
                    fld     [esp+16Ch+var_154]
                    fadd    qword ptr ds:0A2F920h
                    fstp    [esp+16Ch+var_154]
                  }
                }
                __asm { fld     [esp+16Ch+var_154] }
                __asm { fstp    [esp+16Ch+var_15C] }
                v19 = sub_6599B0((TESChildCELL *)v8);
                __asm { fsubr   [esp+16Ch+var_15C] }
                __asm
                {
                  fstp    [esp+174h+var_154]
                  fld     dword ptr [ebp+24h]
                  fdivr   qword ptr ds:0A2F938h
                  fmul    [esp+174h+var_154]
                  fstp    [esp+174h+var_154]
                }
                GameHour = sub_5677B0(a1->editorPackage, v19, (TESObjectREFR *)v8, 1);
                v20 = a1->editorPackage;
                __asm { fstp    dword ptr [esp+16Ch+var_15C] }
                if ( v20->members.type == 5 )
                {
                  __asm
                  {
                    fldz
                    fstp    dword ptr [esp+16Ch+var_15C]
                  }
                }
                __asm { fld     dword ptr [esp+16Ch+var_15C] }
                __asm { fstp    [esp+174h+var_170] }
                p_Unk_105 = (void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))&a1->Unk_105;
                __asm
                {
                  fld     [esp+174h+var_154]
                  fstp    [esp+174h+var_174]
                }
                a5 = sub_566940(v20, v8);
                v57 = sub_566A40((char **)a1->editorPackage, v8);
                v22 = sub_566B30(a1->editorPackage, (int)v84, v8);
                (*p_Unk_105)(a1, v8, v22, v57, a5, LODWORD(v63), LODWORD(v65));
              }
              if ( v8->members.super.process->GetProcessLevel(v8->members.super.process) == 2 )
              {
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+170h+var_170]; float }
                GameHour = sub_566DC0(a1->editorPackage, GameHour, a4, v8, 0, v66);
                if ( v23 )
                {
                  if ( !a1->unk084 )
                  {
                    if ( sub_565DD0(a1->editorPackage) )
                    {
                      __asm { fld     dword ptr ds:0A5B6C0h }
                      __asm { fstp    [esp+178h+a5]; a5 }
                      v24 = (int)v8->vtbl->super.super.GetPos((TESObjectREFR *)v8);
                      __asm { fld     dword ptr ds:0A5B6C0h }
                      v58 = (float *)v24;
                      __asm { fstp    [esp+180h+a3]; a3 }
                      v53 = v8->vtbl->super.super.GetPos((TESObjectREFR *)v8);
                      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v8);
                      sub_446B90(
                        ParentCell,
                        v53,
                        a3,
                        v58,
                        a5a,
                        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30,
                        (int)v8);
                    }
                    a1->unk084 = 1;
                  }
                  if ( sub_565DE0(a1->editorPackage) )
                  {
                    __asm { fld     dword ptr ds:0A5B6C0h }
                    __asm { fstp    [esp+178h+a5]; a5 }
                    v26 = (int)v8->vtbl->super.super.GetPos((TESObjectREFR *)v8);
                    __asm { fld     dword ptr ds:0A5B6C0h }
                    v59 = (float *)v26;
                    __asm { fstp    [esp+180h+a3]; a3 }
                    v54 = v8->vtbl->super.super.GetPos((TESObjectREFR *)v8);
                    v27 = TESObjectREFR_GetParentCell((TESObjectREFR *)v8);
                    sub_446B90(
                      v27,
                      v54,
                      a3a,
                      v59,
                      a5b,
                      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0,
                      (int)v8);
                  }
                  ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_61)(a1, v8, 1);
                  if ( _EBX
                    && (*(int (__thiscall **)(int))(*(_DWORD *)_EBX + 0x170))(_EBX) == TESDataHandler_g_XMarkerHeading
                    || (v28 = (char *)a1->editorPackage->members.location) != 0 && sub_569740(v28) == 3 )
                  {
                    if ( _EBX )
                    {
                      __asm { fld     dword ptr [ebx+28h] }
                    }
                    else
                    {
                      _EAX = ((int (__thiscall *)(Actor *, char *))v8->vtbl->super.super.GetStartingAngle)(v8, v85);
                      __asm { fld     dword ptr [eax+8] }
                    }
                    __asm
                    {
                      fstp    dword ptr [esp+16Ch+var_15C]
                      fld     dword ptr [esp+16Ch+var_15C]
                    }
                    __asm { fstp    [esp+170h+var_170] }
                    ((void (__thiscall *)(Actor *, _DWORD))v8->vtbl->super.Unk_7A)(v8, LODWORD(v67));
                  }
                }
              }
              break;
            case 1:
              if ( procedureArrayIndex == 0x1A )
                ((void (__thiscall *)(LowProcess *, Actor *, unsigned int))a1->Unk_61)(a1, v8, 0xFFFFFFFF);
              break;
            case 2:
              ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_146)(a1, v8, 1);
              break;
            case 3:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_148)(a1, v8);
              break;
            case 4:
              if ( sub_579440() == (TESObjectREFR *)v8 )
              {
                v68 = *(const char **)(4 * (char)a1->editorPackage->members.type + 0xB12988);
                Name = TESObjectREFR_GetName((TESObjectREFR *)v8);
                _sprintf(Format, "%s is sleeping with %s", Name, v68);
                Interface_ConsolePrint(Format);
              }
              break;
            case 5:
              if ( sub_579440() == (TESObjectREFR *)v8 )
              {
                v69 = *(const char **)(4 * (char)a1->editorPackage->members.type + 0xB12988);
                v32 = TESObjectREFR_GetName((TESObjectREFR *)v8);
                _sprintf(Format, "%s is eating with %s", v32, v69);
                Interface_ConsolePrint(Format);
              }
              break;
            case 6:
              ((void (__thiscall *)(LowProcess *, Actor *, int, unsigned int, _DWORD))a1->Unk_65)(
                a1,
                v8,
                1,
                0xFFFFFFFF,
                0);
              break;
            case 7:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_141)(a1, v8);
              break;
            case 8:
              a1->Alarm(a1, v8);
              break;
            case 9:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_144)(a1, v8);
              break;
            case 0xA:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_67)(a1, v8);
              break;
            case 0xD:
              if ( !a1->follow )
                ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_155)(a1, v8);
              follow = a1->follow;
              if ( !follow || (follow->members.super.super.super.flags & 0x20) != 0 )
                goto LABEL_80;
              if ( (*(_BYTE *)(v11 + 0x1E) & 1) != 0 )
              {
                if ( !sub_663A60((int)v8) && sub_663A00() < dword_B36A80 )
                  sub_5668E0((_DWORD *)v11, 0);
              }
              else
              {
                v34 = *(_BYTE *)(v11 + 0x20);
                if ( v34 == 0x12 )
                  goto LABEL_80;
                if ( v34 == 1 )
                {
                  v77 = sub_452A60(*(Atmosphere **)(v11 + 0x28));
                  __asm { fild    dword ptr [esp+16Ch+var_15C] }
                  __asm { fstp    dword ptr [esp+174h+var_15C] }
                  GameHour = TesObjectREF_GetDistance((TESObjectREFR *)v8, (TESObjectREFR *)a1->follow, 0);
                  __asm
                  {
                    fld     dword ptr [esp+16Ch+var_15C]
                    fcompp
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) == 0 )
                    goto LABEL_80;
                }
                else
                {
                  sub_452A60((Atmosphere *)a1->editorPackage->members.target);
                  if ( !TESObjectREFR_GetParentCell((TESObjectREFR *)v8)
                    || (v36 = TESObjectREFR_GetParentCell((TESObjectREFR *)v8),
                        IsInterior = TESObjectCELL_IsInterior(v36),
                        v38 = &flt_B36AA0,
                        !IsInterior) )
                  {
                    v38 = &flt_B36A98;
                  }
                  _EAX = GameSetting_GetSafeFloatPointer((int *)v38);
                  __asm { fld     dword ptr [eax] }
                  __asm { fstp    dword ptr [esp+16Ch+var_15C] }
                  GameHour = TesObjectREF_GetDistance((TESObjectREFR *)v8, (TESObjectREFR *)a1->follow, 0);
                  __asm
                  {
                    fld     dword ptr [esp+16Ch+var_15C]
                    fmul    qword ptr ds:0A2FAA0h
                    fcompp
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) == 0 )
                    goto LABEL_80;
                }
              }
              break;
            case 0xE:
              ((void (__thiscall *)(LowProcess *, Actor *, _DWORD))a1->Unk_146)(a1, v8, 0);
              break;
            case 0xF:
              ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int, unsigned int))a1->Unk_66)(
                a1,
                v8,
                0,
                1,
                0xFFFFFFFF);
              break;
            case 0x11:
              if ( !a1->follow )
                ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_155)(a1, v8);
              v30 = (PlayerCharacter *)a1->follow;
              if ( v30 )
              {
                if ( v30 != TESDataHandler_g_PlayerRef )
                  a1->Unk_21(a1, (UInt32)v8, v11, 1);
              }
LABEL_80:
              ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_61)(a1, v8, 1);
              break;
            case 0x17:
              a1->MountHorse(a1, v8);
              break;
            case 0x18:
              a1->DismoutHorse(a1, v8);
              break;
            case 0x1A:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_152)(a1, v8);
              break;
            case 0x1B:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_151)(a1, v8);
              break;
            case 0x1C:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_153)(a1, v8);
              break;
            case 0x1D:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_147)(a1, v8);
              break;
            case 0x1E:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14B)(a1, v8);
              break;
            case 0x20:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14A)(a1, v8);
              break;
            case 0x23:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14C)(a1, v8);
              break;
            case 0x24:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14D)(a1, v8);
              break;
            case 0x28:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14F)(a1, v8);
              break;
            case 0x29:
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14E)(a1, v8);
              break;
            case 0x2B:
              ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_61)(a1, v8, 2);
              break;
            default:
              break;
          }
          if ( Actor::GetProcessLevel(v8) == 2 )
          {
            v41 = a1->editorPackage;
            if ( v41 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(4 * v41->members.procedureArrayIndex + 0xB152B0) + 4
                                                                                            * a1->editorPackProcedure) == 0x2C )
              {
                a1->SetUnk01E(a1, 0);
                v42 = a1->editorPackage;
                if ( v42 )
                {
                  if ( !v42->members.procedureArrayIndex )
                  {
                    __asm { fld     dword ptr ds:0A30634h }
                    __asm { fstp    [esp+170h+var_170]; float }
                    sub_566DC0(v42, GameHour, a4, v8, 0, v70);
                    if ( !v43 )
                      return ((int (__thiscall *)(LowProcess *, Actor *, unsigned int))a1->Unk_61)(a1, v8, 0xFFFFFFFF);
                  }
                }
                Script_AddEventToExtraScript(a1->editorPackage, &v8->members.super.super.baseExtraList, 0x400);
                v44 = a1->editorPackage;
                if ( v44 )
                {
                  if ( sub_565DF0(v44) )
                  {
                    TimeGlobals_GetGameDay(&TimeGlobals);
                    sub_41FFC0(&v8->members.super.super.baseExtraList, (int)a1->editorPackage, v45);
                  }
                }
                v46 = a1->editorPackage;
                if ( v46 )
                {
                  if ( sub_5660A0(v46) )
                    sub_5EAE70(v8, _EBX, (int)v8, a2);
                }
                if ( sub_579440() == (TESObjectREFR *)v8 )
                {
                  v71 = *(const char **)(4 * (char)a1->editorPackage->members.type + 0xB12988);
                  v47 = TESObjectREFR_GetName((TESObjectREFR *)v8);
                  _sprintf(Format, "%s is done with %s", v47, v71);
                  Interface_ConsolePrint(Format);
                }
                if ( a1->unk044 )
                  FormHeapFree(a1->unk044);
                a1->unk044 = 0;
                p_unk03C = &a1->unk03C;
                while ( a1->unk040 || *p_unk03C )
                {
                  v49 = *p_unk03C;
                  if ( *p_unk03C )
                    FormHeapFree(*p_unk03C);
                  BSSimpleList_Remove(&a1->unk03C, v49);
                }
                v50 = a1->editorPackage;
                if ( v50 )
                {
                  if ( !v50->members.time.duration )
                  {
                    sub_648E40((int)a1, st5_0, a4, (TESChildCELL *)v8);
                    __asm { fld     [esp+16Ch+var_14C] }
                    v51 = v50 == a1->editorPackage;
                    __asm { fstp    dword ptr [esi+0Ch] }
                    a1->unk00C = _ET1;
                    if ( !v51 )
                      a1->editorPackProcedure = kProcedure_TRAVEL;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( byte_B15800 && v8 && dword_B3BF80 )
    {
      result = sub_6825C0(v8);
      if ( result )
        return result;
      sub_6826D0((_DWORD *)dword_B3BF80, v8);
    }
    return ((int (__thiscall *)(LowProcess *))a6->process->Unk_08)(a6->process);
  }
  return result;
}
