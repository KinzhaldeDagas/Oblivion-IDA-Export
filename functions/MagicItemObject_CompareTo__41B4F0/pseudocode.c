bool __thiscall MagicItemObject_CompareTo(TESForm *this, TESForm *a2)
{
  char *v3; // esi

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &MagicItemObject `RTTI Type Descriptor',
                 0);
  return !v3
      || TESForm_CompareAllComponentsTo(this, a2)
      || (*(unsigned __int8 (__thiscall **)(char *, char *))(*((_DWORD *)this + 9) + 0x30))(
           (char *)this + 0x24,
           v3 + 0x24)
      || (unsigned __int8)EffectItemList_CompareTo(v3 + 0x30) != 0;
}
