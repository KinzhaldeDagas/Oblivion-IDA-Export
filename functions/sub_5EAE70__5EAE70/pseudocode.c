void __usercall sub_5EAE70(Actor *a1@<ecx>, int a2@<ebx>, int edi0@<edi>, int a4)
{
  _DWORD *v5; // ecx
  void *v6; // ebx
  int v7; // eax
  _DWORD *v8; // ebx
  void (__thiscall **v9)(_DWORD *, BSExtraData *); // ebp
  BSExtraData *v10; // eax
  double v11; // st7
  TESObjectCELL *ParentCell; // eax
  _DWORD *v13; // ecx
  int v14; // ebx
  int v15; // eax
  ActorVtbl *vtbl; // ebx
  int v17; // eax
  _DWORD *v18; // ebx
  void (__thiscall **v19)(_DWORD *, int); // ebp
  int v20; // eax
  float *v21; // [esp+18h] [ebp-24h]
  float a3; // [esp+1Ch] [ebp-20h]
  float *v23; // [esp+20h] [ebp-1Ch]
  float a5; // [esp+24h] [ebp-18h]
  int v25; // [esp+2Ch] [ebp-10h]
  void *v26; // [esp+38h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+0h]

  if ( a1->members.super.process )
  {
    ((void (__thiscall *)(Actor *, int))a1->vtbl->Unk_C3)(a1, a2);
    v5 = &a1->members.super.process->__vftable;
    v6 = (void *)v5[2];
    retaddr = v6;
    if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 0x174))(v5) )
    {
      if ( *(_BYTE *)(((int (__thiscall *)(LowProcess_vtbl **))a1->members.super.process->Unk_5C)(&a1->members.super.process->__vftable)
                    + 0x20) == 0x16
        && a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_None )
      {
        if ( a1->vtbl->GetMountedHorse(a1) )
        {
          v7 = (int)a1->vtbl->GetMountedHorse(a1);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x38C))(v7, 0);
        }
        ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E1)(a1, 0);
      }
    }
    a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0);
    if ( v6 )
    {
      if ( sub_567770((char *)v6) )
      {
        ((void (__thiscall *)(Actor *, int, int, int))a1->vtbl->super.super.super.ClearModified)(a1, 0x30000, edi0, v25);
        if ( ExtraDataList::GetExtraPackage(&a1->members.super.super.baseExtraList) )
        {
          a1->members.super.process->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&a1->members.super.super.baseExtraList);
          sub_5E8DE0(a1, a1->members.super.process->editorPackage);
          a1->members.super.process->editorPackProcedure = sub_41FB40(&a1->members.super.super.baseExtraList);
          v8 = &a1->members.super.process->__vftable;
          v9 = (void (__thiscall **)(_DWORD *, BSExtraData *))(*v8 + 0xD0);
          v10 = sub_41FB60(&a1->members.super.super.baseExtraList);
          (*v9)(v8, v10);
          if ( *(_BYTE *)(a4 + 0x20) == 0x11 && !*(_BYTE *)(TESDataHandler + 0xCD4) )
          {
            sub_4246F0(&a1->members.super.super.baseExtraList);
            v11 = flt_A5A04C;
            *(_DWORD *)(a4 + 0x54) = 0;
            a5 = v11;
            v23 = a1->vtbl->super.super.GetPos(a1);
            a3 = flt_A5A04C;
            v21 = a1->vtbl->super.super.GetPos(a1);
            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
            sub_446B90(
              ParentCell,
              v21,
              a3,
              v23,
              a5,
              (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30,
              (int)a1);
          }
          if ( a1->members.super.process->Unk_37(a1->members.super.process) )
          {
            v13 = &a1->members.super.process->__vftable;
            v14 = *v13;
            v15 = (*(int (**)(void))(*v13 + 0xE0))();
            (*(void (__thiscall **)(LowProcess *, int))(v14 + 0xDC))(a1->members.super.process, v15);
            a1->members.super.process->Unk_38(a1->members.super.process, 0);
          }
          vtbl = a1->vtbl;
          LOBYTE(v17) = sub_41FB80(&a1->members.super.super.baseExtraList);
          ((void (__thiscall *)(Actor *, int))vtbl->super.super.Unk_5F)(a1, v17);
          v18 = &a1->members.super.process->__vftable;
          v19 = (void (__thiscall **)(_DWORD *, int))(*v18 + 0x394);
          LOBYTE(v20) = sub_41FBA0(&a1->members.super.super.baseExtraList);
          (*v19)(v18, v20);
          sub_4246D0(&a1->members.super.super.baseExtraList);
          v6 = v26;
        }
        else
        {
          a1->members.super.process->editorPackage = 0;
          a1->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
          ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->super.super.Unk_5F)(a1, 0);
          a1->members.super.process->SetUnk01C(a1->members.super.process, 0);
          a1->members.super.process->SetUnk02C(a1->members.super.process, 0);
          if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
            a1->members.super.process->Unk_06(a1->members.super.process, (UInt32)a1, 0);
        }
        if ( sub_5660A0((TESPackage *)v6) )
        {
          if ( sub_45A500(SaveLoad_CurrentSavegame) )
            sub_45C7A0((char *)SaveLoad_CurrentSavegame, (TESForm *)v6);
          else
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v6 + 0x10))(v6, 1);
        }
      }
    }
    if ( a1->members.super.process )
      ((void (__thiscall *)(LowProcess_vtbl **, Actor *))a1->members.super.process->Unk_64)(
        &a1->members.super.process->__vftable,
        a1);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4)
      && !a1->vtbl->GetMountedHorse(a1)
      && ((int (__thiscall *)(LowProcess_vtbl **))a1->members.super.process->GetSitSleepState)(&a1->members.super.process->__vftable) == 9 )
    {
      a1->vtbl->AddPackageWakeUp(a1);
    }
  }
}
