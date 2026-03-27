bool __thiscall sub_428EA0(float **this, BSExtraData *a2)
{
  _DWORD *v3; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraTeleport `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo((BSExtraData *)this, a2) || sub_42BA10(*(this + 3), v3[3]);
}
