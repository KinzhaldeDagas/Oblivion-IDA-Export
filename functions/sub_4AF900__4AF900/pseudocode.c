bool __thiscall sub_4AF900(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLevCreature `RTTI Type Descriptor',
                    0);
  v4 = v3;
  return !v3 || TESForm_CompareAllComponentsTo(this, v3) || *((Data **)this + 0x10) != v4[2].member.modlist.data;
}
