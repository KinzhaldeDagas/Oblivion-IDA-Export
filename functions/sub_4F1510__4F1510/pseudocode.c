bool __thiscall TESWorldSpace_CompareComponentsTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  int v5; // eax
  TESClimate *ClimateFromRoot; // eax
  TESClimate *v7; // edx
  TESWaterForm *WaterFormParents; // eax
  TESWaterForm *v9; // edx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4f1527*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWorldSpace `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4f152c*/
  if ( v3 /*0x4f1597*/
    && !TESForm_CompareAllComponentsTo(this, v3)
    && *((_BYTE *)this + 0x5C) == LOBYTE(v4[3].member.modlist.next)
    && *((_DWORD *)this + 0x1F) == *(_DWORD *)&v4[5].member.type
    && (TESWorldSpace_GetClimateFromRoot((TESWorldSpace *)v4),
        ClimateFromRoot = TESWorldSpace_GetClimateFromRoot((TESWorldSpace *)this),
        ClimateFromRoot == v7)
    && (TESWorldSpace::GetWaterFormParents((TESWorldSpace *)v4),
        WaterFormParents = TESWorldSpace::GetWaterFormParents((TESWorldSpace *)this),
        WaterFormParents == v9)
    && !memcmp((char *)this + 0x84, &v4[5].member.refID, 0x10u) )
  {
    return *((_DWORD *)this + 0x25) != *(_DWORD *)&v4[6].member.type; /*0x4f1621*/
  }
  else
  {
    LOBYTE(v5) = 1; /*0x4f1536*/
  }
  return v5; /*0x4f1535*/
}
