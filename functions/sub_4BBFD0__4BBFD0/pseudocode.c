bool __thiscall sub_4BBFD0(TESForm *this, void *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESSoulGem `RTTI Type Descriptor',
         0);
  v4 = v3;
  return !v3
      || TESObjectMISC_CompareTo(this, v3)
      || *((_BYTE *)this + 0x70) != v4[0x70]
      || *((_BYTE *)this + 0x71) != v4[0x71];
}
