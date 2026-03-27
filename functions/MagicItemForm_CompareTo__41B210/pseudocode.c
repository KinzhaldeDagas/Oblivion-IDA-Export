bool __thiscall MagicItemForm_CompareTo(TESForm *this, TESForm *a2)
{
  char *v3; // esi

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &MagicItemForm `RTTI Type Descriptor',
                 0);
  return !v3
      || TESForm_CompareAllComponentsTo(this, a2)
      || (*(unsigned __int8 (__thiscall **)(TESForm *, char *))(*((_DWORD *)this + 6) + 0x30))(this + 1, v3 + 0x18)
      || (unsigned __int8)EffectItemList_CompareTo(v3 + 0x24) != 0;
}
