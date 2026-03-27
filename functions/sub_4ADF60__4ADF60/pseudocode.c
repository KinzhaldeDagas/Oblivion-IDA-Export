bool __thiscall sub_4ADF60(TESForm *this, void *a2)
{
  char *v3; // eax

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESFlora `RTTI Type Descriptor',
                 0);
  return !v3 || TESForm_CompareAllComponentsTo(this, (TESForm *)(v3 + 0xC)) != 0;
}
