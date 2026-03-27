char __thiscall TESWorldSpace::SaveBeforeAlt_(TESWorldSpace *this, TESForm *a2)
{
  char v3; // bl
  TESObjectCELL *v4; // eax
  TESWorldSpace *WorldSpace; // eax
  _DWORD *v7; // eax
  int v8; // eax
  void *v9; // eax
  int (__thiscall ***v10)(_DWORD); // eax
  TESFormVtbl *vtbl; // edi
  int v12; // eax

  v3 = 0;
  switch ( a2->member.type )
  {
    case kFormType_Cell:
      v4 = (TESObjectCELL *)OblivionDynamicCast(
                              a2,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0);
      if ( v4 )
        WorldSpace = TESObjectCELL_GetWorldSpace(v4);
      else
        WorldSpace = 0;
      if ( WorldSpace == this )
        return 1;
      goto LABEL_6;
    case kFormType_REFR:
    case kFormType_ACHR:
    case kFormType_ACRE:
    case kFormType_PathGrid:
    case kFormType_Land:
      v10 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast(
                                            a2,
                                            0,
                                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                            &TESChildCell `RTTI Type Descriptor',
                                            0);
      vtbl = this->vtbl;
      v12 = (**v10)(v10);
      return ((int (__thiscall *)(TESWorldSpace *, int))vtbl->Unk_0D)(this, v12);
    case kFormType_WorldSpace:
      if ( this->super.refID >= a2->member.refID )
        return v3;
      return 1;
    case kFormType_TLOD:
      v7 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTerrainLODQuadRoot `RTTI Type Descriptor',
             0);
      if ( !v7 )
        goto LABEL_13;
      v8 = v7[1];
      if ( !v8 )
        goto LABEL_13;
      WorldSpace = *(TESWorldSpace **)(v8 + 0x10);
      goto LABEL_14;
    case kFormType_Road:
      v9 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESRoad `RTTI Type Descriptor',
             0);
      if ( v9 )
        WorldSpace = *((TESWorldSpace **)v9 + 0xB);
      else
LABEL_13:
        WorldSpace = 0;
LABEL_14:
      if ( WorldSpace == this )
        return 1;
LABEL_6:
      if ( WorldSpace )
        return ((char (__thiscall *)(TESWorldSpace *, TESWorldSpace *))this->vtbl->Unk_0D)(this, WorldSpace);
      return v3;
    default:
      return TESForm_LessThan((TESForm *)this, a2);
  }
}
