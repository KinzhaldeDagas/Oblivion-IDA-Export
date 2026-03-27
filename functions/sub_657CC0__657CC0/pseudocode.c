void __userpurge sub_657CC0(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, TESObjectREFR *a4)
{
  TESObjectREFR *v5; // edi
  char v6; // bl
  int v7; // eax
  int v8; // ebp
  float *v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  TESObjectCELL *ParentCell; // eax
  double v14; // st7
  bool v15; // zf
  char *Name; // eax
  char v17; // al
  char v18; // al
  char v19; // al
  char *v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int *v23; // ebp
  int v24; // ebx
  float v25; // [esp+10h] [ebp-284h]
  float v26; // [esp+14h] [ebp-280h]
  const char *v27; // [esp+18h] [ebp-27Ch]
  unsigned __int8 *v28; // [esp+2Ch] [ebp-268h]
  int v29; // [esp+2Ch] [ebp-268h]
  float v30; // [esp+2Ch] [ebp-268h]
  char v31; // [esp+30h] [ebp-264h]
  float v32; // [esp+30h] [ebp-264h]
  char Format[300]; // [esp+38h] [ebp-25Ch] BYREF
  char v34[300]; // [esp+164h] [ebp-130h] BYREF

  if ( a4 )
  {
    if ( !a4->vtbl->GetNiNode(a4)
      || (a4->member.super.flags & 0x20) != 0
      || (a4->member.super.flags & 0x800) != 0
      || !TESObjectREFR_GetParentCell(a4)
      || TESObjectREFR_GetParentCell(a4)->members.cellProcessLevel != 3 )
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 0x20))(a1);
      return;
    }
    v5 = (TESObjectREFR *)OblivionDynamicCast(
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    if ( v5 )
    {
      if ( a1[0x16A] )
        a1[0x16A] = sub_693210(v5, a1[0x16A]);
      v6 = (*(int (__thiscall **)(char *, TESObjectREFR *, _DWORD))(*(_DWORD *)a1 + 0x18))(a1, v5, 0);
      v31 = v6;
      v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x184))(a1);
      if ( v6 || !v7 && !a1[0xD0] )
        (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x3C0))(a1, v5);
      v8 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x184))(a1);
      (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 0x574))(a1);
      if ( v6 )
      {
        sub_5E7BE0();
        (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x55C))(a1, v5);
      }
      if ( v8
        && *(_DWORD *)(v8 + 0x18) != 0xFFFFFFFF
        && (!PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) && !TESDataHandler_g_PlayerRef->unk610
         || (*(_BYTE *)(v8 + 0x1E) & 1) == 0) )
      {
        v9 = sub_571F90(1);
        v26 = (float)(dword_B139A4 - dword_B13980);
        v25 = (float)dword_B1399C;
        v10 = sub_571720(v9, v25, v26, 1);
        v11 = *(_DWORD *)(v8 + 0x18);
        v28 = (unsigned __int8 *)v10;
        switch ( *(_DWORD *)(*(_DWORD *)(4 * v11 + 0xB152B0)
                           + 4 * (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x180))(a1)) )
        {
          case 0:
            (*(void (__thiscall **)(char *, TESObjectREFR *, char, int, int))(*(_DWORD *)a1 + 0x58C))(
              a1,
              v5,
              v31,
              1,
              0x101);
            break;
          case 2:
            (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x51C))(a1, v5, 1);
            break;
          case 3:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x524))(a1, v5);
            break;
          case 4:
            if ( sub_579440() == v5 )
            {
              Name = TESObjectREFR_GetName(v5);
              _sprintf(Format, "%s is sleeping ", Name);
              if ( !v28 || _mbsicmp((const unsigned __int8 *)Format, v28) )
                Interface_ConsolePrint(Format);
            }
            break;
          case 5:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x510))(a1, v5);
            break;
          case 6:
            (*(void (__thiscall **)(char *, TESObjectREFR *, int, unsigned int, _DWORD))(*(_DWORD *)a1 + 0x198))(
              a1,
              v5,
              1,
              0xFFFFFFFF,
              0);
            break;
          case 7:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x508))(a1, v5);
            break;
          case 8:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x518))(a1, v5);
            break;
          case 9:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x514))(a1, v5);
            break;
          case 0xA:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x1A0))(a1, v5);
            goto LABEL_84;
          case 0xC:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x584))(a1, v5);
            break;
          case 0xD:
            if ( !*((_DWORD *)a1 + 0xB) )
              (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x558))(a1, v5);
            v12 = *((_DWORD *)a1 + 0xB);
            if ( !v12 || (*(_DWORD *)(v12 + 8) & 0x20) != 0 )
              (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v5, 1);
            if ( (*(_BYTE *)(v8 + 0x1E) & 1) != 0 )
            {
              if ( !sub_663A60((int)v5) && sub_663A00() < dword_B36A80 )
                sub_5668E0((_DWORD *)v8, 0);
            }
            else
            {
              if ( sub_5E0380((Actor *)v5)->members.type == 1 )
              {
                v32 = (float)(int)sub_452A60(*(Atmosphere **)(*((_DWORD *)a1 + 2) + 0x28));
                if ( v32 < TesObjectREF_GetDistance(v5, (TESObjectREFR *)*((_DWORD *)a1 + 0xB), 0) )
                  break;
                goto LABEL_58;
              }
              v29 = (int)sub_452A60(*(Atmosphere **)(v8 + 0x28));
              if ( v29 <= 0 )
                v29 = 0xC8;
              ParentCell = TESObjectREFR_GetParentCell(v5);
              if ( TESObjectCELL_IsInterior(ParentCell) )
                v14 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36AA0);
              else
                v14 = (double)v29 * *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A98);
              v30 = v14;
              v15 = v30 * dbl_A2FAA0 >= TesObjectREF_GetDistance(v5, (TESObjectREFR *)*((_DWORD *)a1 + 0xB), 0);
LABEL_69:
              if ( v15 )
              {
LABEL_58:
                (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v5, 1);
                break;
              }
            }
            break;
          case 0xE:
            (*(void (__thiscall **)(char *, TESObjectREFR *, _DWORD))(*(_DWORD *)a1 + 0x51C))(a1, v5, 0);
            break;
          case 0xF:
            (*(void (__thiscall **)(char *, TESObjectREFR *, _DWORD, int, unsigned int))(*(_DWORD *)a1 + 0x19C))(
              a1,
              v5,
              0,
              1,
              0xFFFFFFFF);
            break;
          case 0x11:
            if ( !*((_DWORD *)a1 + 0xB) )
            {
              (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x558))(a1, v5);
              if ( !*((_DWORD *)a1 + 0xB) )
              {
                (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v5, 1);
                if ( !a1[0xD0] )
                  (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x194))(a1, v5);
              }
            }
            (*(void (__thiscall **)(char *, TESObjectREFR *, int, int))(*(_DWORD *)a1 + 0x84))(a1, v5, v8, 1);
            (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v5, 1);
            break;
          case 0x16:
            sub_654F10(a1, v11, a2, a3, (int)v5);
            v15 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x36C))(a1) == 0;
            goto LABEL_69;
          case 0x17:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x560))(a1, v5);
            break;
          case 0x1A:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x54C))(a1, v5);
            break;
          case 0x1B:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x548))(a1, v5);
            break;
          case 0x1C:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x550))(a1, v5);
            break;
          case 0x1D:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x520))(a1, v5);
            break;
          case 0x1E:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x530))(a1, v5);
            break;
          case 0x20:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x52C))(a1, v5);
            break;
          case 0x23:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x534))(a1, v5);
            break;
          case 0x24:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x538))(a1, v5);
            break;
          case 0x25:
            (*(void (__thiscall **)(char *, TESObjectREFR *, int, _DWORD))(*(_DWORD *)a1 + 0x588))(a1, v5, 1, 0);
            break;
          case 0x28:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x540))(a1, v5);
            break;
          case 0x29:
            (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x53C))(a1, v5);
            break;
          case 0x2B:
            (*(void (__thiscall **)(char *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, v5, 2);
            break;
          case 0x2C:
LABEL_84:
            v17 = *(_BYTE *)(v8 + 0x20);
            if ( v17 == 3
              || v17 == 4
              || (sub_566DC0((TESPackage *)v8, flt_A30634, a3, (Actor *)v5, 0, flt_A30634), !v18) )
            {
              (*(void (__thiscall **)(char *, TESObjectREFR *, unsigned int))(*(_DWORD *)a1 + 0x188))(
                a1,
                v5,
                0xFFFFFFFF);
              return;
            }
            Script_AddEventToExtraScript(v8, &v5->member.baseExtraList, 0x400);
            if ( sub_565DF0((_DWORD *)v8) )
            {
              TimeGlobals_GetGameDay(&TimeGlobals);
              sub_41FFC0(&v5->member.baseExtraList, v8, v19);
            }
            if ( sub_579440() == v5 )
            {
              v27 = *(const char **)(4 * *(char *)(*((_DWORD *)a1 + 2) + 0x20) + 0xB12988);
              v20 = TESObjectREFR_GetName(v5);
              _sprintf(v34, "%s is done with %s", v20, v27);
              if ( !v28 || _mbsicmp((const unsigned __int8 *)v34, v28) )
                Interface_ConsolePrint(v34);
            }
            if ( !*(_DWORD *)(v8 + 0x30) )
            {
              v21 = *((_DWORD *)a1 + 0x30);
              *((_DWORD *)a1 + 0xB) = 0;
              if ( v21 )
              {
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 0x10))(v21, 1);
                *((_DWORD *)a1 + 0x30) = 0;
              }
              else if ( sub_5660A0(*((TESPackage **)a1 + 2)) )
              {
                v5->vtbl->super.ClearModified((TESForm *)v5, 0x30000);
                v22 = *((_DWORD *)a1 + 2);
                if ( v22 )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 0x10))(v22, 1);
                v15 = a1[0xD0] == 0;
                *((_DWORD *)a1 + 2) = 0;
                if ( v15 )
                  (*(void (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)a1 + 0x194))(a1, v5);
              }
              if ( *((_DWORD *)a1 + 0x11) )
                FormHeapFree(*((_DWORD *)a1 + 0x11));
              v23 = (unsigned int *)(a1 + 0x3C);
              *((_DWORD *)a1 + 0x11) = 0;
              while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(a1 + 0x3C)) )
              {
                v24 = *v23;
                if ( *v23 )
                  FormHeapFree(*v23);
                BSSimpleList_Remove((_DWORD *)a1 + 0xF, v24);
              }
              *((_DWORD *)a1 + 0xC) = 0;
              BSSimpleList_Clear((_DWORD *)a1 + 0x13);
            }
            break;
          default:
            break;
        }
      }
    }
    if ( byte_B15800 && v5 && dword_B3BF80 )
    {
      if ( sub_6825C0((Actor *)v5) )
        return;
      sub_6826D0((_DWORD *)dword_B3BF80, v5);
    }
    (*((void (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 8))(a4[1].vtbl);
  }
}
