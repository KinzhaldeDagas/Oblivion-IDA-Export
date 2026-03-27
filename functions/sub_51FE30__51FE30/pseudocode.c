bool __thiscall sub_51FE30(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESHair `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3 || TESForm_CompareAllComponentsTo(this, v3) || LOBYTE(v4[3].vtbl) != *((_BYTE *)this + 0x48);
}
