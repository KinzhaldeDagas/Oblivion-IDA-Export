void __usercall sub_4DD4B0(
        int ebx0@<ebx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        Actor *a5,
        TESObjectCELL *a1,
        TESWorldSpace *a7)
{
  TESObjectCELL *v7; // ebp
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  Creature *v11; // eax
  TESObjectCELL *parentCell; // eax
  TESWorldSpace *WorldSpace; // edi
  bhkCharacterProxy *CharProxy; // edi
  NiPoint3 *v15; // eax
  double v16; // st7
  TESObjectCELL *CellAtCellCoord; // eax
  LowProcess *process; // ecx
  TESObjectCELL *v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+18h] [ebp-8h]
  char v21; // [esp+24h] [ebp+4h]
  char a1a; // [esp+28h] [ebp+8h]

  v7 = a1;
  if ( a1 )
  {
    if ( !TESObjectCELL_IsInterior(a1) )
      v7 = 0;
  }
  if ( a5 && (v7 || a7) )
  {
    IsActor = a5->vtbl->super.super.IsActor;
    v21 = 0;
    a1a = 0;
    if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))IsActor)(
           a5,
           ebx0,
           a4,
           st6_0,
           st5_0) )
    {
      if ( a5->vtbl->GetMountedHorse(a5) )
      {
        if ( a5->vtbl->GetMountedHorse(a5)->members.super.super.process )
        {
          v11 = a5->vtbl->GetMountedHorse(a5);
          ((void (__thiscall *)(LowProcess *, int))v11->members.super.super.process->Unk_11C)(
            v11->members.super.super.process,
            1);
        }
      }
    }
    parentCell = a5->members.super.super.parentCell;
    WorldSpace = 0;
    if ( parentCell
      || (parentCell = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))a5->members.super.super.childCell.GetChildCell)(&a5->members.super.super.childCell)) != 0 )
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(parentCell);
    }
    if ( a5->vtbl->super.super.IsDead((TESObjectREFR *)a5, 0) )
    {
      sub_4212E0(&a5->members.super.super.baseExtraList.vtbl);
      ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.super.Unk_27)(a5, 0);
    }
    if ( v7 )
    {
      if ( v19 == v7 )
      {
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Unk_5E)(a5, 0);
        if ( a5->vtbl->super.super.IsMobileObject((TESObjectREFR *)a5) )
        {
          CharProxy = MobileObject_GetCharProxy((MobileObject *)a5);
          if ( CharProxy )
          {
            v15 = (NiPoint3 *)a5->vtbl->super.super.GetPos(a5);
            sub_452A10(CharProxy, v15);
          }
        }
      }
      else
      {
        a1a = 1;
        if ( WorldSpace )
        {
          if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)a5) )
            sub_4F03D0(WorldSpace, (int)a5);
        }
        sub_4D35D0(v7, st5_0, st6_0, a4, (TESObjectREFR *)a5);
      }
      if ( TESObjectCELL_IsProcessLevel_LowHigh(v7, 1) )
        v21 = 1;
      goto LABEL_55;
    }
    if ( v19 )
    {
      if ( TESObjectCELL_IsInterior(v19) )
        a1a = 1;
    }
    if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)a5) && WorldSpace != a7 )
    {
      if ( WorldSpace )
        sub_4F03D0(WorldSpace, (int)a5);
      TESWorldspace_Boh_(a7, st5_0, st6_0, (TESChildCELL *)a5);
    }
    v20 = (int)*a5->vtbl->super.super.GetPos(a5);
    v16 = a5->vtbl->super.super.GetPos(a5)[1];
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(a7, v20 >> 0xC, (int)v16 >> 0xC);
    v7 = CellAtCellCoord;
    if ( !CellAtCellCoord )
    {
      if ( v19 )
        sub_4CECD0(v19, (TESObjectREFR *)a5);
      if ( a5->vtbl->super.super.IsActor((TESObjectREFR *)a5)
        && !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef)
        && (SaveLoad_CurrentSavegame->flags & 0x20) == 0 )
      {
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Set3D)(a5, 0);
      }
      goto LABEL_55;
    }
    sub_4D35D0(CellAtCellCoord, st5_0, st6_0, v16, (TESObjectREFR *)a5);
    if ( !TESObjectCELL_IsProcessLevel_LowHigh(v7, 1) )
    {
LABEL_55:
      if ( a5->vtbl->super.super.IsMobileObject((TESObjectREFR *)a5) && !v21 )
      {
        sub_6748B0(&ActorProcessManager_ptr, (TESObjectREFR *)a5);
        if ( !v7
          && MobileObject_GetProcessLevel((MobileObject *)a5) == 3
          && !TESObjectREFR_IsPersistent_((TESObjectREFR *)a5) )
        {
          ((void (__usercall *)(Actor *@<ecx>))a5->vtbl->super.super.ChangeCell)(a5);
          sub_463A90(SaveLoad_CurrentSavegame, (TESForm *)a5);
          ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.ChangeCell)(a5, 0);
        }
      }
      if ( a1a )
        a5->vtbl->super.super.Unk_51((TESObjectREFR *)a5);
      if ( v21 )
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Unk_5E)(a5, 0);
      return;
    }
    if ( WorldSpace != a7 )
    {
      v21 = 1;
      a1a = 1;
      if ( a5->vtbl->super.super.IsActor((TESObjectREFR *)a5) )
      {
        process = a5->members.super.process;
        if ( process )
          process->Unk_08(process);
      }
      goto LABEL_55;
    }
    if ( a1a )
    {
      if ( !v19 )
      {
LABEL_47:
        if ( a5->vtbl->super.super.GetNiNode(a5) )
          v21 = 1;
        goto LABEL_55;
      }
      if ( TESObjectCELL_IsProcessLevel_LowHigh(v19, 1) )
      {
        ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.super.Unk_5E)(a5, 0);
        goto LABEL_55;
      }
    }
    if ( v19 && TESObjectCELL_IsProcessLevel_LowHigh(v19, 1) )
      goto LABEL_55;
    goto LABEL_47;
  }
}
