void __usercall sub_674A20(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double GameHour@<st0>,
        double a5@<st3>,
        double a6@<st4>)
{
  int *v7; // ebp
  int *v8; // ebx
  TESForm *v9; // ecx
  bool (__thiscall *Unk_2B)(TESForm *); // edx
  TESForm *v11; // ecx
  TESObjectREFR *v12; // esi
  char v13; // al
  TESForm *v14; // ecx
  Data *OverrideFile; // eax
  TESForm::FormFlags flags; // eax
  int ProcessLevel; // eax
  TESObjectCELL *ParentCell; // eax
  int v19; // edi
  double v20; // st7
  ExtraDataList *p_baseExtraList; // ebx
  BSSimpleList_VoidPtr *v22; // edi
  void *data; // esi
  TESForm *v24; // ecx
  Data *v25; // eax
  TESForm::FormFlags v26; // eax
  Data *v27; // eax
  char v28; // al
  Data *v29; // ecx
  UInt32 unk008; // eax
  char v31; // al
  int v32; // eax
  TESForm *v33; // ecx
  int v34; // eax
  int *i; // esi
  int GameDaysPassed; // [esp+10h] [ebp-10h]
  double v37; // [esp+10h] [ebp-10h]
  double v38; // [esp+18h] [ebp-8h]

  if ( !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
  {
    v7 = (int *)(a1 + 0x58);
    v8 = (int *)(a1 + 0x58);
    if ( a1 != 0xFFFFFFA8 )
    {
      do
      {
        v9 = (TESForm *)*v8;
        if ( !*v8 )
          break;
        Unk_2B = v9->vtbl[1].Unk_2B;
        dword_B3BCF8 = 0;
        if ( Unk_2B(v9) )
        {
          v11 = (TESForm *)*v8;
          dword_B3BCF8 = (TESForm *)*v8;
        }
        else
        {
          v11 = dword_B3BCF8;
        }
        if ( v11 )
        {
          v12 = 0;
          v13 = ((int (__thiscall *)(TESForm *))v11->vtbl[1].CopyFrom)(v11);
          v14 = dword_B3BCF8;
          if ( v13 )
            v12 = (TESObjectREFR *)dword_B3BCF8;
          v8 = (int *)v8[1];
          if ( !v14[3].member.modlist.data )
          {
            if ( (v14->member.flags & 0x20) == 0
              || (OverrideFile = TESForm_GetOverrideFile(v14, 0xFFFFFFFF), v14 = dword_B3BCF8, OverrideFile) )
            {
              flags = v14->member.flags;
              if ( (flags & 0x20) != 0 || (flags & 0x800) != 0 )
              {
                if ( v14[3].member.modlist.data )
                {
                  ProcessLevel = Actor::GetProcessLevel((Actor *)v14);
                  sub_674550((int)dword_B3BCF8, ProcessLevel);
                  sub_659BC0(dword_B3BCF8);
                  v14 = dword_B3BCF8;
                }
              }
            }
            else if ( v14 )
            {
              v14->vtbl->Destroy(v14, 1);
              BSSimpleList_Remove(v7, (int)dword_B3BCF8);
LABEL_57:
              v8 = v7;
              continue;
            }
            BSSimpleList_Remove(v7, (int)v14);
            goto LABEL_57;
          }
          if ( v12 )
          {
            if ( v12->vtbl->IsDead(v12, 0) && !Actor::IsEssential((Actor *)v12) && sub_5E1D70(v12) )
            {
              ParentCell = TESObjectREFR_GetParentCell(v12);
              if ( !TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
              {
                (*((void (__thiscall **)(TESObjectREFRVtbl *))v12[1].vtbl->super.super.InitializeComponent + 0x13C))(v12[1].vtbl);
                if ( a6 != *(float *)&SrcStr )
                {
                  v19 = iHoursToRespawnCell;
                  (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v12[1].vtbl->super.super.InitializeComponent
                   + 0x13C))(
                    v12[1].vtbl,
                    GameHour,
                    a3,
                    a2);
                  a3 = (double)v19;
                  if ( v19 < 0 )
                    a3 = a3 + flt_A2FC78;
                  v38 = GameHour + a3;
                  GameDaysPassed = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
                  v20 = (double)GameDaysPassed;
                  if ( GameDaysPassed < 0 )
                    v20 = v20 + flt_A2FC78;
                  v37 = v20 * dbl_A2F920;
                  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
                  a6 = a6 + v37;
                  if ( a6 > v38 )
                  {
                    ((void (__usercall *)(TESObjectREFR *@<ecx>, int, _DWORD, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>))v12->vtbl[1].super.Unk_19)(
                      v12,
                      1,
                      0,
                      0,
                      GameHour,
                      a3,
                      a2,
                      a5);
                    p_baseExtraList = &v12->member.baseExtraList;
                    v22 = (BSSimpleList_VoidPtr *)sub_420480(&v12->member.baseExtraList);
                    if ( v22 )
                    {
                      while ( !BSSimpleList_IsEmpty(v22) )
                      {
                        data = v22->firstNode.data;
                        sub_4203E0((ExtraDataList *)((char *)v22->firstNode.data + 0x44), 0);
                        if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)data + 0x78))(data) )
                          sub_4D6640(data);
                        sub_67F100(v22);
                      }
                      sub_4204A0(p_baseExtraList);
                    }
                    BSSimpleList_Remove(v7, (int)dword_B3BCF8);
                    goto LABEL_57;
                  }
                }
              }
            }
            v14 = dword_B3BCF8;
          }
          if ( (v14->member.flags & 0x20000) != 0 )
          {
            ((void (__thiscall *)(TESForm *, _DWORD))v14->vtbl->Unk_28)(v14, 0);
            BSSimpleList_Remove(v7, (int)dword_B3BCF8);
            v24 = dword_B3BCF8;
            if ( (dword_B3BCF8->member.flags & 0x20) == 0
              || (v25 = TESForm_GetOverrideFile(v24, 0xFFFFFFFF), v24 = dword_B3BCF8, v25) )
            {
              v26 = v24->member.flags;
              if ( (v26 & 0x20) != 0 || (v26 & 0x800) != 0 )
              {
                if ( v24[3].member.modlist.data )
                {
                  v34 = Actor::GetProcessLevel((Actor *)v24);
                  sub_674550((int)dword_B3BCF8, v34);
                  sub_659BC0(dword_B3BCF8);
                }
              }
              else
              {
                v27 = v24[3].member.modlist.data;
                if ( v27
                  && (v28 = (*(int (__thiscall **)(Data *))(v27->errorState + 0x248))(v24[3].member.modlist.data),
                      v24 = dword_B3BCF8,
                      v28) )
                {
                  v29 = v24[3].member.modlist.data;
                  unk008 = v29->unk008;
                  if ( !unk008 || (v31 = *(_BYTE *)(unk008 + 0x20), v31 != 1) && v31 != 2 )
                  {
                    (*(void (__usercall **)(Data *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>))(v29->errorState + 0x24C))(
                      v29,
                      0,
                      GameHour,
                      a3,
                      a2,
                      a5);
                    v32 = (*(int (__thiscall **)(Data *))(dword_B3BCF8[3].member.modlist.data->errorState + 8))(dword_B3BCF8[3].member.modlist.data);
                    sub_673A90((int)dword_B3BCF8, v32, 0, 0, 0);
                  }
                }
                else
                {
                  ((void (__thiscall *)(TESForm *))v24->vtbl[2].super.CompareTo)(v24);
                  v33 = dword_B3BCF8;
                  if ( dword_B3BCF8 )
                  {
                    if ( (v33->member.flags & 0x20000) != 0 )
                      ((void (__thiscall *)(TESForm *, _DWORD))v33->vtbl->Unk_28)(v33, 0);
                  }
                }
              }
            }
            else if ( v24 )
            {
              v24->vtbl->Destroy(v24, 1);
            }
            goto LABEL_57;
          }
        }
      }
      while ( v8 );
    }
    for ( i = v7; i; i = (int *)i[1] )
    {
      if ( !*i )
        break;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)*i + 0xA0))(*i, 1);
    }
  }
}
