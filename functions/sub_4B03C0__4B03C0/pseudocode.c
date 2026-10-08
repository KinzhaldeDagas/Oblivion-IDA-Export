bool __thiscall sub_4B03C0(TESForm *this, void *a2)
{
  TESForm *v3; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b03d6*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLevSpell `RTTI Type Descriptor',
                    0);
  return !v3 || TESForm_CompareAllComponentsTo(this, v3) != 0; /*0x4b03f2*/
}
