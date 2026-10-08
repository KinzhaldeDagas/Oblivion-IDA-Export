bool __thiscall TESObjectCLOT_CompareTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b5bb6*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectCLOT `RTTI Type Descriptor',
                    0);
  return !v3 || TESForm_CompareAllComponentsTo(this, v3) != 0; /*0x4b5bd2*/
}
