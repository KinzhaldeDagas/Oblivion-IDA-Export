// Verified: WorldSpace save-order comparison orders WorldSpace before same-world CELL, REFR/ACHR/ACRE, PGRD, LAND, ROAD and TLOD records; recursively compares owning worlds where relevant and otherwise delegates to TESForm_LessThan. Fallout's newer navmesh index is a separate system and is not evidence about this Oblivion path-grid ordering.
char __thiscall TESWorldSpace_SortsBeforeForm(TESWorldSpace *this, TESForm *a2)
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

  v3 = 0; /*0x4ef3ef*/
  switch ( a2->member.type ) /*0x4ef3fa*/
  {
    case kFormType_Cell: /*0x4ef3fa*/
      v4 = (TESObjectCELL *)OblivionDynamicCast( /*0x4ef410*/
                              a2,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0);
      if ( v4 ) /*0x4ef41a*/
        WorldSpace = TESObjectCELL_GetWorldSpace(v4); /*0x4ef41e*/
      else
        WorldSpace = 0; /*0x4ef425*/
      if ( WorldSpace == this ) /*0x4ef429*/
        return 1; /*0x4ef429*/
      goto LABEL_6; /*0x4ef429*/
    case kFormType_REFR: /*0x4ef3fa*/
    case kFormType_ACHR: /*0x4ef3fa*/
    case kFormType_ACRE: /*0x4ef3fa*/
    case kFormType_PathGrid: /*0x4ef3fa*/
    case kFormType_Land: /*0x4ef3fa*/
      v10 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast( /*0x4ef4bf*/
                                            a2,
                                            0,
                                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                            &TESChildCell `RTTI Type Descriptor',
                                            0);
      vtbl = this->vtbl; /*0x4ef4c6*/
      v12 = (**v10)(v10); /*0x4ef4cf*/
      return ((int (__thiscall *)(TESWorldSpace *, int))vtbl->Unk_0D)(this, v12); /*0x4ef4de*/
    case kFormType_WorldSpace: /*0x4ef3fa*/
      if ( this->super.refID >= a2->member.refID ) /*0x4ef44a*/
        return v3; /*0x4ef44a*/
      return 1; /*0x4ef456*/
    case kFormType_TLOD: /*0x4ef3fa*/
      v7 = OblivionDynamicCast( /*0x4ef468*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTerrainLODQuadRoot `RTTI Type Descriptor',
             0);
      if ( !v7 ) /*0x4ef472*/
        goto LABEL_13; /*0x4ef472*/
      v8 = v7[1]; /*0x4ef474*/
      if ( !v8 ) /*0x4ef479*/
        goto LABEL_13; /*0x4ef479*/
      WorldSpace = *(TESWorldSpace **)(v8 + 0x10); /*0x4ef47b*/
      goto LABEL_14; /*0x4ef47e*/
    case kFormType_Road: /*0x4ef3fa*/
      v9 = OblivionDynamicCast( /*0x4ef49e*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESRoad `RTTI Type Descriptor',
             0);
      if ( v9 ) /*0x4ef4a8*/
        WorldSpace = *((TESWorldSpace **)v9 + 0xB); /*0x4ef4aa*/
      else
LABEL_13:
        WorldSpace = 0; /*0x4ef480*/
LABEL_14:
      if ( WorldSpace == this ) /*0x4ef484*/
        return 1; /*0x4ef489*/
LABEL_6:
      if ( WorldSpace ) /*0x4ef42d*/
        return ((char (__thiscall *)(TESWorldSpace *, TESWorldSpace *))this->vtbl->Unk_0D)(this, WorldSpace); /*0x4ef43b*/
      return v3;
    default:
      return TESForm_LessThan((TESForm *)this, a2); /*0x4ef4e9*/
  }
}
