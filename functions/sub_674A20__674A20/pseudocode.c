// 3DTheft decode 2026-05-16: frame-loop actor process manager maintenance pass after process updates; removes/destroys invalid refs and refreshes process level state.
void __usercall sub_674A20(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double GameHour@<st0>,
        double a5@<st3>,
        double a6@<st4>,
        double a7@<st5>,
        double a8@<st6>)
{
  int *v9; // ebp
  int *v10; // ebx
  float v11; // ecx
  unsigned __int8 (__thiscall *v12)(_DWORD); // edx
  float v13; // ecx
  Actor *v14; // esi
  char v15; // al
  int v16; // ecx
  Data *OverrideFile; // eax
  int v18; // eax
  int ProcessLevel; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v21; // edi
  double v22; // st7
  ExtraDataList *p_baseExtraList; // ebx
  BSSimpleList_VoidPtr *DroppedItemList; // edi
  void *data; // esi
  float v26; // ecx
  Data *v27; // eax
  int v28; // eax
  int v29; // eax
  char v30; // al
  _DWORD *v31; // ecx
  int v32; // eax
  char v33; // al
  int v34; // eax
  float v35; // ecx
  int v36; // eax
  int *i; // esi
  int GameDaysPassed; // [esp+10h] [ebp-10h]
  double v39; // [esp+10h] [ebp-10h]
  double v40; // [esp+18h] [ebp-8h]

  if ( !PlayerCharacter::IsSleeping_(reference) ) /*0x674a35*/
  {
    v9 = (int *)(a1 + 0x58); /*0x674a42*/
    v10 = (int *)(a1 + 0x58); /*0x674a47*/
    if ( a1 != 0xFFFFFFA8 ) /*0x674a49*/
    {
      do /*0x674a50*/
      {
        v11 = *(float *)v10; /*0x674a50*/
        if ( !*v10 ) /*0x674a54*/
          break; /*0x674a54*/
        v12 = *(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v11) + 0x188); /*0x674a5c*/
        qword_B3BB2C[0x73] = 0.0; /*0x674a62*/
        if ( v12(LODWORD(v11)) ) /*0x674a6c*/
        {
          v13 = *(float *)v10; /*0x674a72*/
          LODWORD(qword_B3BB2C[0x73]) = *v10; /*0x674a74*/
        }
        else
        {
          v13 = qword_B3BB2C[0x73]; /*0x674a7c*/
        }
        if ( v13 != 0.0 ) /*0x674a84*/
        {
          v14 = 0; /*0x674a92*/
          v15 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v13) + 0x190))(COERCE_FLOAT(LODWORD(v13))); /*0x674a94*/
          v16 = LODWORD(qword_B3BB2C[0x73]); /*0x674a98*/
          if ( v15 ) /*0x674a9e*/
            v14 = (Actor *)LODWORD(qword_B3BB2C[0x73]); /*0x674aa0*/
          v10 = (int *)v10[1]; /*0x674aa6*/
          if ( !*(_DWORD *)(v16 + 0x58) ) /*0x674aa2*/
          {
            if ( (*(_DWORD *)(v16 + 8) & 0x20) == 0 /*0x674ac8*/
              || (OverrideFile = TESForm_GetOverrideFile((TESForm *)v16, 0xFFFFFFFF),
                  v16 = LODWORD(qword_B3BB2C[0x73]),
                  OverrideFile) )
            {
              v18 = *(_DWORD *)(v16 + 8); /*0x674aea*/
              if ( (v18 & 0x20) != 0 || (v18 & 0x800) != 0 ) /*0x674afc*/
              {
                if ( *(_DWORD *)(v16 + 0x58) ) /*0x674afe*/
                {
                  ProcessLevel = Actor::GetProcessLevel((Actor *)v16); /*0x674b04*/
                  sub_674550(LODWORD(qword_B3BB2C[0x73]), ProcessLevel); /*0x674b15*/
                  sub_659BC0((_DWORD *)LODWORD(qword_B3BB2C[0x73])); /*0x674b20*/
                  v16 = LODWORD(qword_B3BB2C[0x73]); /*0x674b25*/
                }
              }
            }
            else if ( v16 ) /*0x674acc*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 0x10))(v16, 1); /*0x674ad5*/
              BSSimpleList_Remove(v9, LODWORD(qword_B3BB2C[0x73])); /*0x674ae0*/
LABEL_57:
              v10 = v9; /*0x674dcf*/
              continue; /*0x674dcf*/
            }
            BSSimpleList_Remove(v9, v16); /*0x674b2e*/
            goto LABEL_57; /*0x674b33*/
          }
          if ( v14 ) /*0x674b3a*/
          {
            if ( v14->vtbl->super.super.IsDead((TESObjectREFR *)v14, 0) && !Actor::IsEssential(v14) && sub_5E1D70(v14) ) /*0x674b67*/
            {
              DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v14); /*0x674b78*/
              if ( !TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x674b84*/
              {
                v14->members.super.process->GetUnk08C(v14->members.super.process); /*0x674b9c*/
                if ( a8 != *(float *)&SrcStr ) /*0x674ba9*/
                {
                  v21 = MEMORY[0xB35C1C]; /*0x674bba*/
                  ((void (__usercall *)(LowProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>))v14->members.super.process->GetUnk08C)( /*0x674bc0*/
                    v14->members.super.process,
                    GameHour,
                    a3,
                    a2,
                    a5,
                    a6);
                  a3 = (double)v21; /*0x674bc8*/
                  if ( v21 < 0 ) /*0x674bcc*/
                    a3 = a3 + flt_A2FC78; /*0x674bce*/
                  v40 = GameHour + a3; /*0x674bdb*/
                  GameDaysPassed = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x674be6*/
                  v22 = (double)GameDaysPassed; /*0x674bea*/
                  if ( GameDaysPassed < 0 ) /*0x674bee*/
                    v22 = v22 + flt_A2FC78; /*0x674bf0*/
                  v39 = v22 * dbl_A2F920; /*0x674c01*/
                  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x674c05*/
                  a8 = a8 + v39; /*0x674c0a*/
                  if ( a8 > v40 ) /*0x674c17*/
                  {
                    ((void (__usercall *)(Actor *@<ecx>, int, _DWORD, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))v14->vtbl->Resurrect)( /*0x674c29*/
                      v14,
                      1,
                      0,
                      0,
                      GameHour,
                      a3,
                      a2,
                      a5,
                      a6,
                      a7);
                    p_baseExtraList = &v14->members.super.super.baseExtraList; /*0x674c2b*/
                    DroppedItemList = (BSSimpleList_VoidPtr *)ExtraDataList_GetDroppedItemList(&v14->members.super.super.baseExtraList); /*0x674c35*/
                    if ( DroppedItemList ) /*0x674c39*/
                    {
                      while ( !BSSimpleList_IsEmpty(DroppedItemList) ) /*0x674c49*/
                      {
                        data = DroppedItemList->firstNode.data; /*0x674c4b*/
                        ExtraDataList_SetItemDropper( /*0x674c52*/
                          (ExtraDataList *)((char *)DroppedItemList->firstNode.data + 0x44),
                          0);
                        if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)data + 0x78))(data) ) /*0x674c5e*/
                          sub_4D6640(data); /*0x674c66*/
                        BSSimpleList_PopHeadWithoutPayloadFree(DroppedItemList); /*0x674c6d*/
                      }
                      ExtraDataList_RemoveDroppedItemList(p_baseExtraList); /*0x674c76*/
                    }
                    BSSimpleList_Remove(v9, LODWORD(qword_B3BB2C[0x73])); /*0x674c84*/
                    goto LABEL_57; /*0x674c89*/
                  }
                }
              }
            }
            v16 = LODWORD(qword_B3BB2C[0x73]); /*0x674c8e*/
          }
          if ( (*(_DWORD *)(v16 + 8) & 0x20000) != 0 ) /*0x674c9c*/
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0xA0))(v16, 0); /*0x674cac*/
            BSSimpleList_Remove(v9, LODWORD(qword_B3BB2C[0x73])); /*0x674cb7*/
            v26 = qword_B3BB2C[0x73]; /*0x674cbc*/
            if ( (*(_DWORD *)(LODWORD(qword_B3BB2C[0x73]) + 8) & 0x20) == 0 /*0x674cdc*/
              || (v27 = TESForm_GetOverrideFile((TESForm *)LODWORD(v26), 0xFFFFFFFF), v26 = qword_B3BB2C[0x73], v27) )
            {
              v28 = *(_DWORD *)(LODWORD(v26) + 8); /*0x674cf4*/
              if ( (v28 & 0x20) != 0 || (v28 & 0x800) != 0 ) /*0x674d0a*/
              {
                if ( *(_DWORD *)(LODWORD(v26) + 0x58) ) /*0x674da7*/
                {
                  v36 = Actor::GetProcessLevel((Actor *)LODWORD(v26)); /*0x674dad*/
                  sub_674550(LODWORD(qword_B3BB2C[0x73]), v36); /*0x674dbf*/
                  sub_659BC0((_DWORD *)LODWORD(qword_B3BB2C[0x73])); /*0x674dca*/
                }
              }
              else
              {
                v29 = *(_DWORD *)(LODWORD(v26) + 0x58); /*0x674d10*/
                if ( v29 /*0x674d2b*/
                  && (v30 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v29 + 0x248))(*(_DWORD *)(LODWORD(v26) + 0x58)),
                      v26 = qword_B3BB2C[0x73],
                      v30) )
                {
                  v31 = *(_DWORD **)(LODWORD(v26) + 0x58); /*0x674d2d*/
                  v32 = v31[2]; /*0x674d30*/
                  if ( !v32 || (v33 = *(_BYTE *)(v32 + 0x20), v33 != 1) && v33 != 2 ) /*0x674d44*/
                  {
                    (*(void (__usercall **)(_DWORD *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))(*v31 + 0x24C))( /*0x674d54*/
                      v31,
                      0,
                      GameHour,
                      a3,
                      a2,
                      a5,
                      a6,
                      a7);
                    v34 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(LODWORD(qword_B3BB2C[0x73]) + 0x58) + 8))(*(_DWORD *)(LODWORD(qword_B3BB2C[0x73]) + 0x58)); /*0x674d6a*/
                    ActorProcessManager_AddMobileObject( /*0x674d79*/
                      (ActorProcessManager *)&qword_B3BB2C[0x75],
                      (MobileObject *)LODWORD(qword_B3BB2C[0x73]),
                      v34,
                      0,
                      0,
                      0);
                  }
                }
                else
                {
                  (*(void (__thiscall **)(float))(*(_DWORD *)LODWORD(v26) + 0x1C4))(COERCE_FLOAT(LODWORD(v26))); /*0x674d88*/
                  v35 = qword_B3BB2C[0x73]; /*0x674d8a*/
                  if ( LODWORD(qword_B3BB2C[0x73]) ) /*0x674d8a*/
                  {
                    if ( (*(_DWORD *)(LODWORD(v35) + 8) & 0x20000) != 0 ) /*0x674d97*/
                      (*(void (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(v35) + 0xA0))( /*0x674da3*/
                        COERCE_FLOAT(LODWORD(v35)),
                        0);
                  }
                }
              }
            }
            else if ( v26 != 0.0 ) /*0x674ce0*/
            {
              (*(void (__thiscall **)(float, int))(*(_DWORD *)LODWORD(v26) + 0x10))(COERCE_FLOAT(LODWORD(v26)), 1); /*0x674ced*/
            }
            goto LABEL_57; /*0x674cef*/
          }
        }
      }
      while ( v10 ); /*0x674a50*/
    }
    for ( i = v9; i; i = (int *)i[1] ) /*0x674ddd*/
    {
      if ( !*i ) /*0x674de0*/
        break; /*0x674de4*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)*i + 0xA0))(*i, 1); /*0x674df0*/
    }
  }
}
