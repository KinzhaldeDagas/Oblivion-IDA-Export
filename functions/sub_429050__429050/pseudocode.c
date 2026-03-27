bool __thiscall sub_429050(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraGlobal `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(this, a2) || *((_DWORD *)this + 3) != v3[3];
}
