bool __thiscall sub_4F1510(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  TESWaterForm *WaterFormParents; // eax
  TESWaterForm *v9; // edx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWorldSpace `RTTI Type Descriptor',
                    0);
  v4 = (int)v3;
  if ( v3
    && !TESForm_CompareAllComponentsTo(this, v3)
    && *((_BYTE *)this + 0x5C) == *(_BYTE *)(v4 + 0x5C)
    && *((_DWORD *)this + 0x1F) == *(_DWORD *)(v4 + 0x7C)
    && (sub_4EF7A0(v4), v6 = sub_4EF7A0((int)this), v6 == v7)
    && (TESWorldSpace::GetWaterFormParents((TESWorldSpace *)v4),
        WaterFormParents = TESWorldSpace::GetWaterFormParents((TESWorldSpace *)this),
        WaterFormParents == v9)
    && !memcmp((char *)this + 0x84, (const void *)(v4 + 0x84), 0x10u) )
  {
    return *((_DWORD *)this + 0x25) != *(_DWORD *)(v4 + 0x94);
  }
  else
  {
    LOBYTE(v5) = 1;
  }
  return v5;
}
