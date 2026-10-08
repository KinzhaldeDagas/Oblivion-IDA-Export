void __usercall sub_4DD4B0(
        int ebx0@<ebx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        Actor *a5,
        TESObjectCELL *a1,
        TESObjectCELL **a7)
{
  TESObjectCELL *v7; // ebp
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  Creature *v11; // eax
  TESObjectCELL *parentCell; // eax
  TESObjectCELL **WorldSpace; // edi
  bhkCharacterProxy *CharProxy; // edi
  NiPoint3 *v15; // eax
  double v16; // st7
  TESObjectCELL *CellAtCellCoord; // eax
  LowProcess *process; // ecx
  TESObjectCELL *v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+18h] [ebp-8h]
  char v21; // [esp+24h] [ebp+4h]
  char a1a; // [esp+28h] [ebp+8h]

  v7 = a1; /*0x4dd4b4*/
  if ( a1 ) /*0x4dd4bb*/
  {
    if ( !TESObjectCELL_IsInterior(a1) ) /*0x4dd4bf*/
      v7 = 0; /*0x4dd4c8*/
  }
  if ( a5 && (v7 || a7) ) /*0x4dd4e1*/
  {
    IsActor = a5->vtbl->super.super.IsActor; /*0x4dd4e9*/
    v21 = 0; /*0x4dd4f1*/
    a1a = 0; /*0x4dd4f6*/
    if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))IsActor)( /*0x4dd4fb*/
           a5,
           ebx0,
           a4,
           st6_0,
           st5_0) )
    {
      if ( a5->vtbl->GetMountedHorse(a5) ) /*0x4dd50b*/
      {
        if ( a5->vtbl->GetMountedHorse(a5)->members.super.super.process ) /*0x4dd51d*/
        {
          v11 = a5->vtbl->GetMountedHorse(a5); /*0x4dd52d*/
          ((void (__thiscall *)(LowProcess *, int))v11->members.super.super.process->Unk_11C)( /*0x4dd53c*/
            v11->members.super.super.process,
            1);
        }
      }
    }
    parentCell = a5->members.super.super.parentCell; /*0x4dd53e*/
    WorldSpace = 0; /*0x4dd542*/
    if ( parentCell /*0x4dd554*/
      || (parentCell = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))a5->members.super.super.childCell.GetChildCell)(&a5->members.super.super.childCell)) != 0 )
    {
      WorldSpace = (TESObjectCELL **)TESObjectCELL_GetWorldSpace(parentCell); /*0x4dd55d*/
    }
    if ( a5->vtbl->super.super.IsDead((TESObjectREFR *)a5, 0) ) /*0x4dd572*/
    {
      ExtraDataList_RemoveSavedMovementData(&a5->members.super.super.baseExtraList.vtbl); /*0x4dd57b*/
      ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.super.Unk_27)(a5, 0); /*0x4dd58c*/
    }
    if ( v7 ) /*0x4dd590*/
    {
      if ( v19 == v7 ) /*0x4dd59a*/
      {
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Unk_5E)(a5, 0); /*0x4dd5ce*/
        if ( a5->vtbl->super.super.IsMobileObject((TESObjectREFR *)a5) ) /*0x4dd5da*/
        {
          CharProxy = MobileObject_GetCharProxy((MobileObject *)a5); /*0x4dd5e7*/
          if ( CharProxy ) /*0x4dd5eb*/
          {
            v15 = (NiPoint3 *)a5->vtbl->super.super.GetPos(a5); /*0x4dd5f7*/
            sub_452A10(CharProxy, v15); /*0x4dd5fc*/
          }
        }
      }
      else
      {
        a1a = 1; /*0x4dd59e*/
        if ( WorldSpace ) /*0x4dd5a3*/
        {
          if ( TESObjectREFR_IsPersistent((TESObjectREFR *)a5) ) /*0x4dd5a7*/
            TESWorldSpace_RemovePersistentCellReference(WorldSpace, (TESObjectREFR *)a5); /*0x4dd5b3*/
        }
        TESObjectCELL_AddReference(v7, st5_0, st6_0, a4, (TESObjectREFR *)a5); /*0x4dd5bb*/
      }
      if ( TESObjectCELL_IsProcessLevel_LowHigh(v7, 1) ) /*0x4dd60a*/
        v21 = 1; /*0x4dd617*/
      goto LABEL_55; /*0x4dd61c*/
    }
    if ( v19 ) /*0x4dd627*/
    {
      if ( TESObjectCELL_IsInterior(v19) ) /*0x4dd629*/
        a1a = 1; /*0x4dd632*/
    }
    if ( TESObjectREFR_IsPersistent((TESObjectREFR *)a5) && WorldSpace != a7 ) /*0x4dd644*/
    {
      if ( WorldSpace ) /*0x4dd648*/
        TESWorldSpace_RemovePersistentCellReference(WorldSpace, (TESObjectREFR *)a5); /*0x4dd64d*/
      TESWorldspace_Boh_((TESWorldSpace *)a7, st5_0, st6_0, a4, (TESChildCELL *)a5); /*0x4dd655*/
    }
    v20 = (int)*a5->vtbl->super.super.GetPos(a5); /*0x4dd670*/
    v16 = a5->vtbl->super.super.GetPos(a5)[1]; /*0x4dd687*/
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord( /*0x4dd6a1*/
                                         (TESWorldSpace *)a7,
                                         v20 >> 0xC,
                                         (int)v16 >> 0xC);
    v7 = CellAtCellCoord; /*0x4dd6a6*/
    if ( !CellAtCellCoord ) /*0x4dd6aa*/
    {
      if ( v19 ) /*0x4dd76b*/
        TESObjectCELL_RemoveReference(v19, (TESObjectREFR *)a5); /*0x4dd76e*/
      if ( a5->vtbl->super.super.IsActor((TESObjectREFR *)a5) /*0x4dd7a0*/
        && !PlayerCharacter::IsSleeping_(reference)
        && (g_TESSaveLoadGame->flags & 0x20) == 0 )
      {
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Set3D)(a5, 0); /*0x4dd7ae*/
      }
      goto LABEL_55; /*0x4dd7ae*/
    }
    TESObjectCELL_AddReference(CellAtCellCoord, st5_0, st6_0, v16, (TESObjectREFR *)a5); /*0x4dd6b3*/
    if ( !TESObjectCELL_IsProcessLevel_LowHigh(v7, 1) ) /*0x4dd6c8*/
    {
LABEL_55:
      if ( a5->vtbl->super.super.IsMobileObject((TESObjectREFR *)a5) && !v21 ) /*0x4dd7c6*/
      {
        sub_6748B0(&qword_B3BB2C[0x75], (MobileObject *)a5); /*0x4dd7ce*/
        if ( !v7 /*0x4dd7e5*/
          && MobileObject_GetProcessLevel((MobileObject *)a5) == 3
          && !TESObjectREFR_IsPersistent((TESObjectREFR *)a5) )
        {
          ((void (__usercall *)(Actor *@<ecx>))a5->vtbl->super.super.ChangeCell)(a5); /*0x4dd7fd*/
          TESSaveLoadGame_UnloadForm(g_TESSaveLoadGame, (TESForm *)a5); /*0x4dd806*/
          ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.ChangeCell)(a5, 0); /*0x4dd816*/
        }
      }
      if ( a1a ) /*0x4dd81d*/
        a5->vtbl->super.super.Unk_51((TESObjectREFR *)a5); /*0x4dd829*/
      if ( v21 ) /*0x4dd830*/
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Unk_5E)(a5, 0); /*0x4dd83e*/
      return; /*0x4dd83e*/
    }
    if ( WorldSpace != a7 ) /*0x4dd6d0*/
    {
      v21 = 1; /*0x4dd6dc*/
      a1a = 1; /*0x4dd6e1*/
      if ( a5->vtbl->super.super.IsActor((TESObjectREFR *)a5) ) /*0x4dd6e6*/
      {
        process = a5->members.super.process; /*0x4dd6f0*/
        if ( process ) /*0x4dd6f5*/
          process->Unk_08(process); /*0x4dd700*/
      }
      goto LABEL_55; /*0x4dd702*/
    }
    if ( a1a ) /*0x4dd710*/
    {
      if ( !v19 ) /*0x4dd714*/
      {
LABEL_47:
        if ( a5->vtbl->super.super.GetNiNode(a5) ) /*0x4dd758*/
          v21 = 1; /*0x4dd75e*/
        goto LABEL_55; /*0x4dd763*/
      }
      if ( TESObjectCELL_IsProcessLevel_LowHigh(v19, 1) ) /*0x4dd71f*/
      {
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Unk_5E)(a5, 0); /*0x4dd734*/
        goto LABEL_55; /*0x4dd736*/
      }
    }
    if ( v19 && TESObjectCELL_IsProcessLevel_LowHigh(v19, 1) ) /*0x4dd745*/
      goto LABEL_55; /*0x4dd74c*/
    goto LABEL_47; /*0x4dd74c*/
  }
}
