bool __thiscall sub_4BB850(TESForm *this, void *a2)
{
  char *v3; // eax
  char *v4; // esi

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESSigilStone `RTTI Type Descriptor',
                 0);
  v4 = v3;
  return !v3 || TESObjectMISC_CompareTo(this, v3) || (unsigned __int8)EffectItemList_CompareTo(v4 + 0x78) != 0;
}
