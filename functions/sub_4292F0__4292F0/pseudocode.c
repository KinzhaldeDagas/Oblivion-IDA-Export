bool __thiscall sub_4292F0(BSExtraData *this, BSExtraData *a2)
{
  _BYTE *v3; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraSoul `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(this, a2) || *((_BYTE *)this + 0xC) != v3[0xC];
}
