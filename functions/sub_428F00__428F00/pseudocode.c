bool __thiscall sub_428F00(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraMapMarker `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(this, a2) || sub_42B2D0(*((_WORD **)this + 3), v3[3]);
}
