bool __thiscall sub_5193A0(TESForm *this, void *a2)
{
  TESForm *v3; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &BirthSign `RTTI Type Descriptor',
                    0);
  return !v3 || TESForm_CompareAllComponentsTo(this, v3) != 0;
}
