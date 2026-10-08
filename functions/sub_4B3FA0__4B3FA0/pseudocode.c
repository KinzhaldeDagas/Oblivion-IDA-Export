bool __thiscall sub_4B3FA0(TESForm *this, void *a2)
{
  TESForm *v3; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b3fb6*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectACTI `RTTI Type Descriptor',
                    0);
  return !v3 || *((_DWORD *)this + 0x15) != v3[3].member.refID || TESForm_CompareAllComponentsTo(this, v3) != 0; /*0x4b3fc4*/
}
