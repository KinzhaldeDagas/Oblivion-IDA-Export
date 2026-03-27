void __userpurge sub_5F5320(Actor *a1@<ecx>, double a2@<st0>, int a3, float a4, char a5, int a6, int a7)
{
  TESForm *v8; // eax
  TESPackage *v9; // eax
  FleePackage *v10; // eax
  FleePackage *v11; // edi
  LowProcess *process; // ecx
  void (__thiscall *Unk_08)(BaseProcess *__hidden); // edx
  TESPackage *editorPackage; // ecx
  LowProcess *v15; // ebx
  BSExtraData *v16; // eax
  char *v17; // eax
  _DWORD *v18; // eax
  TESPackage *v19; // ebx
  TESObjectCELL *v20; // eax
  TESObjectREFR *v21; // ebp
  int v22; // ecx
  int v23; // edx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  LowProcess *v28; // ecx
  LowProcess *v29; // ebx
  BSExtraData *v30; // eax
  int v31; // ebx
  double v32; // st7
  int v33; // [esp-10h] [ebp-54h]
  char v34; // [esp-4h] [ebp-48h]
  char v35; // [esp-4h] [ebp-48h]
  char v36; // [esp+0h] [ebp-44h]
  char v37; // [esp+0h] [ebp-44h]
  TESWorldSpace *WorldSpace; // [esp+18h] [ebp-2Ch]
  TESObjectCELL *ParentCell; // [esp+1Ch] [ebp-28h]
  int v40; // [esp+20h] [ebp-24h] BYREF
  int v41; // [esp+24h] [ebp-20h]
  int v42; // [esp+28h] [ebp-1Ch]
  int v43[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v44; // [esp+40h] [ebp-4h]
  bool v45; // [esp+58h] [ebp+14h]

  if ( *(_BYTE *)(((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))a1->vtbl->super.super.GetBaseForm)(a1, a2) + 4) != 0x24
    || (v8 = a1->vtbl->super.super.GetBaseForm(a1)) == 0
    || LOBYTE(v8[0xA].member.modlist.next) != 4
    || !((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) )
  {
    if ( a1->members.super.process
      && (v9 = a1->members.super.process->GetCurrentPackage(a1->members.super.process)) != 0
      && v9->members.type == 0x10 )
    {
      sub_626C90(v9, a3);
    }
    else
    {
      v10 = (FleePackage *)FormHeapAlloc(0x68u);
      v44 = 0;
      if ( v10 )
        v11 = FleePackage::FleePackage(v10, a3, 0, 0);
      else
        v11 = 0;
      process = a1->members.super.process;
      Unk_08 = process->Unk_08;
      v44 = 0xFFFFFFFF;
      Unk_08(process);
      editorPackage = a1->members.super.process->editorPackage;
      if ( editorPackage )
      {
        if ( !sub_5660A0(editorPackage) )
        {
          v15 = a1->members.super.process;
          v36 = ((int (*)(void))v15->GetUnk01C)();
          v34 = v15->Unk_2F(v15);
          v16 = (BSExtraData *)v15->GetUnk02C(v15);
          sub_4268B0(
            &a1->members.super.super.baseExtraList,
            v15->editorPackage,
            v15->editorPackProcedure,
            v16,
            v34,
            v36);
        }
      }
      a1->members.super.process->Unk_08(a1->members.super.process);
      if ( !a1->members.super.process->Unk_14(a1->members.super.process) )
      {
        sub_5E91E0(a1, 0x1D, 0x49564E49, 1);
        if ( !a1->members.super.process->Unk_14(a1->members.super.process) )
          sub_5E91E0(a1, 0x1D, 0x4C4D4843, 1);
        if ( a1->members.super.process->Unk_14(a1->members.super.process) )
        {
          v17 = (char *)a1->members.super.process->Unk_14(a1->members.super.process);
          sub_41A610(v17, 0);
        }
      }
      v18 = (_DWORD *)FormHeapAlloc(0xCu);
      v44 = 1;
      if ( v18 )
        v19 = (TESPackage *)TESPackage_LocationData_constr(v18);
      else
        v19 = 0;
      v44 = 0xFFFFFFFF;
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1);
      if ( a7 )
      {
        TESPackage_LocationData_SetType(v19, 0);
        TESPackage_LocationData_SetReference(v19, a7);
        *((_BYTE *)v11 + 0x3C) = 0;
        TESPackage_SetLocation(v11, (char *)v19);
      }
      else if ( a6 )
      {
        TESPackage_LocationData_SetType(v19, 1);
        sub_569810(v19, a6);
        *((_BYTE *)v11 + 0x3C) = 0;
        TESPackage_SetLocation(v11, (char *)v19);
      }
      else
      {
        v45 = 0;
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a1) )
        {
          v20 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
          v45 = TESObjectCELL_IsInterior(v20) != 0;
        }
        if ( ((double (__thiscall *)(Actor *))a1->vtbl->Unk_94)(a1) == *(float *)&SrcStr )
          sub_627FF0(v11, a1);
        v21 = *((TESObjectREFR **)v11 + 0x18);
        if ( v21 )
        {
          v24 = (int *)v21->vtbl->GetPos(*((_DWORD *)v11 + 0x18));
          v25 = *v24;
          v26 = v24[1];
          v27 = v24[2];
          v40 = v25;
          v41 = v26;
          v42 = v27;
          ParentCell = TESObjectREFR_GetParentCell(v21);
          WorldSpace = TESObjectREFR_GetWorldSpace(v21);
        }
        else
        {
          LOBYTE(a6) = 0;
          if ( ((double (__thiscall *)(LowProcess *))a1->members.super.process->GetUnk088)(a1->members.super.process) <= *(float *)&SrcStr )
          {
            LOBYTE(a6) = 1;
            ((void (__stdcall *)(_DWORD))a1->members.super.process->SetUnk088)(flt_A417B4);
          }
          if ( v45 )
            sub_627680(v11, (int)&v40, (int)a1, a3, *(float *)&a6);
          else
            sub_6279A0(v11, (int)v43, (int)a1, a3, *(float *)&a6);
          v22 = *((_DWORD *)v11 + 0x11);
          v23 = *((_DWORD *)v11 + 0x12);
          v40 = *((_DWORD *)v11 + 0x10);
          v41 = v22;
          v42 = v23;
        }
      }
      if ( v19 )
      {
        TESPackage_LocationData_destr(v19);
        FormHeapFree((unsigned int)v19);
      }
      v28 = a1->members.super.process;
      if ( v28->editorPackage )
      {
        v29 = a1->members.super.process;
        v37 = ((int (*)(void))v28->GetUnk01C)();
        v35 = v29->Unk_2F(v29);
        v30 = (BSExtraData *)v29->GetUnk02C(v29);
        sub_4268B0(&a1->members.super.super.baseExtraList, v29->editorPackage, v29->editorPackProcedure, v30, v35, v37);
      }
      if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) )
        LOBYTE(a4) = 0;
      Actor_AddPackage_(a1, (TESPackage *)v11, SLOBYTE(a4), 1);
      v33 = v40;
      v31 = v41;
      *((_BYTE *)v11 + 0x64) = a5;
      *((_DWORD *)v11 + 6) = 0x13;
      if ( ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, int, int, int, TESObjectCELL *, TESWorldSpace *))a1->members.super.process->Unk_F6)(
             a1->members.super.process,
             a1,
             v33,
             v31,
             v42,
             ParentCell,
             WorldSpace) )
      {
        v32 = *((float *)v11 + 0x13);
        *((_BYTE *)v11 + 0x50) = 0;
        *((float *)v11 + 0x13) = v32 - *((float *)v11 + 0x13);
      }
    }
  }
}
