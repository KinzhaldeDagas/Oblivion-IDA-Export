char __userpurge sub_653930@<al>(
        _DWORD *a1@<ecx>,
        unsigned int a2@<ebx>,
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
  double v22; // st7
  TESPackage *v23; // eax
  char v24; // al
  double v25; // st7
  TESPackage *v26; // eax
  char v27; // al
  int v28; // eax
  int v29; // eax
  double v30; // st7
  int v31; // ecx
  TESPackage *v32; // eax
  TESPackage *v33; // ebx
  UInt32 procedureArrayIndex; // ebp
  UInt32 v35; // eax
  char v36; // al
  bool v37; // zf
  UInt8 type; // al
  char v39; // al
  int v40; // ecx
  char *v41; // ebx
  LowProcess *process; // ebx
  LowProcess *v43; // ebx
  void (__thiscall **v44)(_DWORD *); // ebx
  void (__thiscall **p_Unk_5F)(Actor *); // ebx
  int v46; // eax
  void (__thiscall **v47)(char *); // ebx
  int v48; // eax
  unsigned int *v49; // ebx
  int v50; // ebp
  float v51; // [esp+1Ch] [ebp-20h]
  float v55; // [esp+28h] [ebp-14h]
  char v56; // [esp+33h] [ebp-9h]
  float v57; // [esp+34h] [ebp-8h]
  char *v58; // [esp+38h] [ebp-4h]

  result = (char)a13;
  if ( a13 )
  {
    v16 = (Actor *)OblivionDynamicCast(
                     a13,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v56 = 1;
    if ( v16 )
    {
      (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD))(*a1 + 0x18))(a1, v16, 0);
      v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x574))(a1);
      if ( v17 )
      {
        if ( *(_DWORD *)(v17 + 0x18) != 0xFFFFFFFF
          && (!PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) && !TESDataHandler_g_PlayerRef->unk610
           || (*(_BYTE *)(v17 + 0x1E) & 1) == 0) )
        {
          do
          {
            v18 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1);
            if ( !v18 )
              break;
            v19 = *(_DWORD *)(v18 + 0x18);
            switch ( *(_DWORD *)(*(_DWORD *)(4 * v19 + 0xB152B0)
                               + 4 * (*(int (__thiscall **)(_DWORD *))(*a1 + 0x180))(a1)) )
            {
              case 0:
                v20 = *(_DWORD **)(v18 + 0x24);
                v21 = 0;
                if ( v20 )
                  v21 = (_DWORD *)sub_5697E0(v20);
                if ( a1[0xC] )
                {
                  if ( !a1[0x30] )
                    v21 = (_DWORD *)a1[0xC];
                }
                if ( (*(int (__thiscall **)(_DWORD *, int, int, unsigned int))(*a1 + 0x36C))(a1, a4, a3, a2) )
                {
                  v22 = flt_A30634;
                  v55 = flt_A30634;
                  v23 = sub_5E0380(v16);
                  Distance = sub_566DC0(v23, v22, a11, v16, 0, v55);
                  if ( !v24 )
                    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16);
                }
                a2 = 0xFFFFFFFF;
                a3 = 1;
                a4 = 1;
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x58C))(a1, v16);
                if ( v16->vtbl->super.super.GetSleepState((TESObjectREFR *)v16) )
                  goto LABEL_76;
                if ( !sub_5E0380(v16) )
                  goto LABEL_76;
                if ( sub_5E0380(v16)->members.type == 6 )
                  goto LABEL_76;
                v25 = flt_A30634;
                v51 = flt_A30634;
                v26 = sub_5E0380(v16);
                Distance = sub_566DC0(v26, v25, a11, v16, 0, v51);
                if ( !v27
                  || v16->members.super.process->GetProcessLevel(v16->members.super.process) != 1
                  || v21 && sub_4D74B0(v21) )
                {
                  goto LABEL_76;
                }
                v56 = 1;
                break;
              case 1:
              case 4:
                ++a1[1];
                break;
              case 2:
                v56 = sub_64EE60(a1, a10, a11, Distance, v16);
                break;
              case 5:
                v56 = sub_64EE20((int)a1, a10, a11, Distance, (PlayerCharacter *)v16);
                break;
              case 6:
                if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16);
                Distance = flt_A71E4C;
                v56 = sub_64EC50((TESObjectREFR **)a1, a11, Distance, v16, SLODWORD(flt_A71E4C), 1);
                break;
              case 7:
                if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16);
                v56 = sub_64E320(a1, v18, (int)v16, a5, a6, a7, a8, a9, a10, a11, (TESChildCELL *)v16);
                break;
              case 8:
                if ( (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x36C))(a1, a4) )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16);
                a4 = (int)v16;
                (*(void (__thiscall **)(_DWORD *))(*a1 + 0x518))(a1);
                goto LABEL_76;
              case 9:
                Distance = a14;
                v56 = (*(int (__thiscall **)(_DWORD *, Actor *, _DWORD))(*a1 + 0x56C))(a1, v16, LODWORD(a14));
                break;
              case 0xA:
                if ( (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x36C))(a1, a4) )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16);
                a4 = (int)v16;
                (*(void (__thiscall **)(_DWORD *))(*a1 + 0x1A0))(a1);
                goto LABEL_76;
              case 0xC:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x584))(a1, v16);
                goto LABEL_76;
              case 0xD:
                if ( !a1[0xB] )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, v16);
                v28 = a1[0xB];
                if ( !v28 )
                  goto LABEL_45;
                if ( (*(_DWORD *)(v28 + 8) & 0x20) != 0 )
                  goto LABEL_45;
                sub_566DB0((_DWORD *)a1[2]);
                v30 = (double)v29;
                if ( v29 < 0 )
                  v30 = v30 + flt_A2FC78;
                v57 = v30;
                if ( v57 < 1.0 )
                  v57 = flt_A57A64;
                Distance = TesObjectREF_GetDistance((TESObjectREFR *)v16, (TESObjectREFR *)a1[0xB], 0);
                a11 = v57;
                if ( v57 >= Distance )
LABEL_45:
                  ++a1[1];
                goto LABEL_76;
              case 0xE:
                if ( !a1[0xB] )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, v16);
                v31 = a1[0xB];
                if ( v31 )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 0x190))(v31) )
                  {
                    if ( *(_BYTE *)(v18 + 0x20) == 2 )
                      Distance = ((double (__thiscall *)(_DWORD *, Actor *, _DWORD, int))*(_DWORD *)(*a1 + 0x84))(
                                   a1,
                                   v16,
                                   a1[2],
                                   1);
                  }
                }
                else
                {
                  ++a1[1];
                }
                sub_64EE60(a1, a10, a11, Distance, v16);
                if ( !sub_5E0380(v16) )
                  goto LABEL_76;
                v32 = sub_5E0380(v16);
                if ( !sub_5687D0(v32, v18, Distance, (TESObjectREFR *)v16)
                  || v16->members.super.process->GetProcessLevel(v16->members.super.process) != 1 )
                {
                  goto LABEL_76;
                }
                v56 = 1;
                break;
              case 0xF:
                if ( (*(int (__thiscall **)(_DWORD *, int, int, unsigned int))(*a1 + 0x36C))(a1, a4, a3, a2) )
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, v16);
                a2 = 0xFFFFFFFF;
                a3 = 1;
                a4 = 0;
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x19C))(a1, v16);
                goto LABEL_76;
              case 0x12:
              case 0x17:
                (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, v16, 1);
                goto LABEL_76;
              case 0x1A:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x54C))(a1, v16);
                break;
              case 0x1B:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x548))(a1, v16);
                goto LABEL_76;
              case 0x1C:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x550))(a1, v16);
                goto LABEL_76;
              case 0x1D:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x590))(a1, v16);
                goto LABEL_76;
              case 0x1E:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x530))(a1, v16);
                goto LABEL_76;
              case 0x25:
                (*(void (__thiscall **)(_DWORD *, Actor *, int, _DWORD))(*a1 + 0x588))(a1, v16, 1, 0);
                goto LABEL_76;
              case 0x29:
                (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x53C))(a1, v16);
                goto LABEL_76;
              case 0x2B:
                (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, v16, 2);
                break;
              default:
LABEL_76:
                v56 = 0;
                break;
            }
            if ( Actor::GetProcessLevel(v16) == 1 )
            {
              v33 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1);
              if ( v33 )
              {
                procedureArrayIndex = v33->members.procedureArrayIndex;
                if ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0)
                               + 4 * (*(int (__thiscall **)(_DWORD *))(*a1 + 0x180))(a1)) == 0x2C )
                {
                  v35 = v33->members.procedureArrayIndex;
                  if ( v35 )
                  {
                    if ( v35 == 3 )
                      return (*(int (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, v16, 0xFFFFFFFF);
                    type = v33->members.type;
                    if ( type == 3 )
                      return (*(int (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, v16, 0xFFFFFFFF);
                    v37 = type == 4;
                  }
                  else
                  {
                    sub_566DC0(v33, flt_A30634, a11, v16, 0, flt_A30634);
                    v37 = v36 == 0;
                  }
                  if ( v37 )
                    return (*(int (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, v16, 0xFFFFFFFF);
                  (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x194))(a1, v16);
                  Distance = Script_AddEventToExtraScript(v33, &v16->members.super.super.baseExtraList, 0x400);
                  if ( sub_565DF0(v33) )
                  {
                    Distance = TimeGlobals_GetGameDay(&TimeGlobals);
                    sub_41FFC0(&v16->members.super.super.baseExtraList, (int)v33, v39);
                  }
                  if ( !v33->members.time.duration )
                  {
                    v37 = a1[0x30] == 0;
                    a1[0xB] = 0;
                    if ( v37 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x388))(a1) )
                    {
                      if ( sub_5660A0((TESPackage *)a1[2]) )
                      {
                        v41 = (char *)a1[2];
                        if ( sub_567770(v41) )
                        {
                          ((void (__thiscall *)(Actor *, int, int, int, unsigned int))v16->vtbl->super.super.super.ClearModified)(
                            v16,
                            0x30000,
                            a4,
                            a3,
                            a2);
                          if ( ExtraDataList::GetExtraPackage(&v16->members.super.super.baseExtraList) )
                          {
                            process = v16->members.super.process;
                            process->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&v16->members.super.super.baseExtraList);
                            sub_5E8DE0(v16, v16->members.super.process->editorPackage);
                            v43 = v16->members.super.process;
                            v43->editorPackProcedure = sub_41FB40(&v16->members.super.super.baseExtraList);
                            a13 = &v16->members.super.process->__vftable;
                            v44 = (void (__thiscall **)(_DWORD *))(*a13 + 0xD0);
                            a2 = (unsigned int)sub_41FB60(&v16->members.super.super.baseExtraList);
                            (*v44)(a13);
                            p_Unk_5F = (void (__thiscall **)(Actor *))&v16->vtbl->super.super.Unk_5F;
                            LOBYTE(v46) = sub_41FB80(&v16->members.super.super.baseExtraList);
                            a3 = v46;
                            (*p_Unk_5F)(v16);
                            v58 = (char *)v16->members.super.process;
                            v47 = (void (__thiscall **)(char *))(*(_DWORD *)v58 + 0x394);
                            LOBYTE(v48) = sub_41FBA0(&v16->members.super.super.baseExtraList);
                            a4 = v48;
                            (*v47)(v58);
                            sub_4246D0(&v16->members.super.super.baseExtraList);
                            v41 = v58;
                          }
                          else
                          {
                            v16->members.super.process->editorPackage = 0;
                            v16->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
                            a2 = 0;
                            ((void (__thiscall *)(LowProcess *))v16->members.super.process->SetUnk02C)(v16->members.super.process);
                            a3 = 0;
                            v16->vtbl->super.super.Unk_5F((TESObjectREFR *)v16);
                            a4 = 0;
                            ((void (__thiscall *)(LowProcess *))v16->members.super.process->SetUnk01C)(v16->members.super.process);
                            v16->members.super.process->Unk_06(v16->members.super.process, (UInt32)v16, 0);
                          }
                        }
                        else
                        {
                          a1[2] = 0;
                        }
                        if ( v41 )
                          (*(void (__thiscall **)(char *, int))(*(_DWORD *)v41 + 0x10))(v41, 1);
                        if ( !*((_BYTE *)a1 + 0xD0) )
                          (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x194))(a1, v16);
                      }
                    }
                    else
                    {
                      v40 = a1[0x30];
                      if ( v40 )
                        (*(void (__thiscall **)(int, int))(*(_DWORD *)v40 + 0x10))(v40, 1);
                      a1[0x30] = 0;
                    }
                    if ( a1[0x11] )
                      FormHeapFree(a1[0x11]);
                    a1[0x11] = 0;
                    a1[9] = 0;
                    v49 = a1 + 0xF;
                    while ( a1[0x10] || *v49 )
                    {
                      v50 = *v49;
                      if ( *v49 )
                        FormHeapFree(*v49);
                      BSSimpleList_Remove(a1 + 0xF, v50);
                    }
                    a1[0xC] = 0;
                    BSSimpleList_Clear(a1 + 0x13);
                  }
                }
              }
            }
          }
          while ( v56 );
        }
      }
    }
    if ( !byte_B15800 )
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]);
    if ( !v16 )
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]);
    if ( !dword_B3BF80 )
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]);
    result = sub_6825C0(v16);
    if ( !result )
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a13[0x16] + 0x20))(a13[0x16]);
  }
  return result;
}
