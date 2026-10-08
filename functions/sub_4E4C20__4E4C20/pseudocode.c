// Verified PathGrid child-record predicate. For a candidate TESChildCell, compares its child cell with TESPathGrid.parentCell and delegates on mismatch. For the owning cell, only REFR/ACHR/ACRE records are accepted, and only when the reference is nonpersistent; other record types return false.
bool __thiscall TESPathGrid_MatchesCellChildRecord(TESPathGrid *this, TESForm *candidate)
{
  int (__thiscall ***v3)(_DWORD); // eax
  int v4; // eax
  int (__thiscall **vtbl)(TESChildCELL *); // edx
  TESChildCELL *p_childCell; // esi
  int v7; // ebp
  TESObjectREFR *v9; // eax
  int v10; // eax
  int v11; // eax

  if ( !sub_4CA010(candidate->member.type) ) /*0x4e4c3a*/
  {
    v11 = (*(int (__thiscall **)(TESChildCELL *))this->childCell.vtbl)(&this->childCell); /*0x4e4cde*/
    return (*(bool (__thiscall **)(int, TESForm *))(*(_DWORD *)v11 + 0x34))(v11, candidate); /*0x4e4ced*/
  }
  v3 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast( /*0x4e4c50*/
                                       candidate,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESChildCell `RTTI Type Descriptor',
                                       0);
  v4 = (**v3)(v3); /*0x4e4c5e*/
  vtbl = (int (__thiscall **)(TESChildCELL *))this->childCell.vtbl; /*0x4e4c60*/
  p_childCell = &this->childCell; /*0x4e4c63*/
  v7 = v4; /*0x4e4c66*/
  if ( v4 != (*vtbl)(p_childCell) ) /*0x4e4c70*/
  {
    v10 = (*(int (__thiscall **)(TESChildCELL *))p_childCell->vtbl)(p_childCell); /*0x4e4cc3*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x34))(v10, v7); /*0x4e4cd3*/
  }
  if ( candidate->member.type < kFormType_REFR ) /*0x4e4c79*/
    return 0; /*0x4e4c79*/
  if ( candidate->member.type > kFormType_ACRE ) /*0x4e4c7e*/
  {
    if ( candidate->member.type == kFormType_Land ) /*0x4e4c83*/
      return 0; /*0x4e4c8b*/
    return 0; /*0x4e4cf3*/
  }
  v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x4e4c9d*/
                          candidate,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  return v9 && !TESObjectREFR_IsPersistent(v9); /*0x4e4cab*/
}
