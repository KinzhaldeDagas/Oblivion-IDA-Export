void __userpurge sub_4D35D0(
        TESObjectCELL *a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  TESWorldSpace *worldSpace; // ecx
  TESObjectCELL *ParentCell; // eax
  int v8; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  TESForm::FormFlags flags; // eax
  NiAVObject *v11; // ebp
  char v12; // bl
  ActorAnimData *v13; // eax
  UInt8 cellProcessLevel; // al
  signed int v15; // eax

  if ( !a5 || !a5->vtbl->GetBaseForm(a5) )
    return;
  if ( (a1->members.super.flags & 0x400) != 0 )
  {
    sub_496EA0((char *)&stru_B35C80, a1);
    BSSimpleList_PushFront(&a1->members.objectList.refr, (int)a5);
    sub_496F50(&stru_B35C80, a1);
    sub_4247B0(&a5->member.baseExtraList, (BSExtraDataVtbl *)a1);
    if ( (a1->members.flags0 & 1) == 0 )
    {
      worldSpace = a1->members.worldSpace;
      if ( worldSpace )
        sub_4F0120(worldSpace, a5);
    }
    if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
      a1->vtbl->SetFromActiveFile((TESForm *)a1, 1);
    return;
  }
  ParentCell = TESObjectREFR_GetParentCell(a5);
  if ( ParentCell )
    sub_4CECD0(ParentCell, a5);
  sub_496EA0((char *)&stru_B35C80, a1);
  BSSimpleList_PushFront(&a1->members.objectList.refr, (int)a5);
  ((void (__thiscall *)(TESObjectREFR *, TESObjectCELL *))a5->vtbl->ChangeCell)(a5, a1);
  sub_496F50(&stru_B35C80, a1);
  if ( (a5->member.super.flags & 0x800) == 0 )
  {
    if ( a5->vtbl->GetNiNode(a5) )
    {
      if ( !OblivionDynamicCast(
              a5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &MobileObject `RTTI Type Descriptor',
              0) )
        a5->vtbl->Unk_52(a5);
    }
  }
  v8 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( (a5->member.super.flags & 0x4000) == 0
    && !TESObjectREFR_IsPersistent_(a5)
    && !*(_BYTE *)(ThreadLocalStoragePointer[v8] + 0x184) )
  {
    a1->vtbl->SetFromActiveFile((TESForm *)a1, 1);
  }
  if ( *(_BYTE *)(ThreadLocalStoragePointer[v8] + 0x184)
    || (flags = a5->member.super.flags, (flags & 0x4000) != 0)
    || (flags & 0x800) != 0 )
  {
LABEL_45:
    sub_4D80C0(a5, 0);
    return;
  }
  v11 = (NiAVObject *)a5->vtbl->GetNiNode(a5);
  if ( !TESObjectCELL_IsProcessLevel_LowHigh(a1, 0) )
  {
    if ( a5->vtbl->IsActor(a5)
      && !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef)
      && (SaveLoad_CurrentSavegame->flags & 0x20) == 0 )
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))a5->vtbl->Set3D)(a5, 0);
    }
    goto LABEL_45;
  }
  v12 = 0;
  if ( v11 )
  {
    TESObjectCELL::AttachReference3DToQuad(a1, a5);
    v13 = a5->vtbl->GetAnimData(a5);
    if ( v13 )
      sub_474510(v13, a5);
    else
      NiAVObject_UpdateNiAVObject(v11, 0.0, 0);
    goto LABEL_26;
  }
  if ( !OblivionDynamicCast(
          a5,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0)
    || (cellProcessLevel = a1->members.cellProcessLevel, cellProcessLevel == 6)
    || cellProcessLevel == 5 )
  {
    v12 = 1;
  }
  if ( a5->vtbl->IsActor(a5) && PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) || !v12 )
  {
LABEL_26:
    if ( a5->vtbl->IsActor(a5) )
    {
      sub_6748B0(&ActorProcessManager_ptr, a5);
      sub_4D80C0(a5, 0);
      return;
    }
    goto LABEL_45;
  }
  if ( a5->vtbl->IsActor(a5) && (!sub_45A500(SaveLoad_CurrentSavegame) || (SaveLoad_CurrentSavegame->flags & 0x10) != 0) )
    a5->vtbl->IsParalyzed(a5);
  v15 = sub_440C80(TES, a1, 0);
  sub_438060((_DWORD **)ModelLoaderPtr, 0, st5_0, a3, a4, a5, v15);
  sub_4D80C0(a5, 0);
}
