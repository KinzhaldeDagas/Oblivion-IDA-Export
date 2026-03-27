bool __thiscall sub_4F9580(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESGlobal `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3
      || TESForm_CompareAllComponentsTo(this, v3)
      || *((_BYTE *)this + 0x20) != LOBYTE(v4[1].member.flags)
      || *(float *)&v4[1].member.refID != *((float *)this + 9);
}
