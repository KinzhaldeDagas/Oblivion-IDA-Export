bool __thiscall sub_4B4230(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectANIO `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3 || TESForm_CompareAllComponentsTo(this, v3) || *((TESFormVtbl **)this + 0xC) != v4[2].vtbl;
}
