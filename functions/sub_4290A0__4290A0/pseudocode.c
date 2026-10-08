// Verified ExtraRank virtual comparison: dynamic-casts the other payload to ExtraRank, returns different when type/base fields differ, or when the stored 32-bit rank differs.
bool __thiscall ExtraRank_CompareTo(ExtraRank *this, BSExtraData *other)
{
  _DWORD *v3; // esi

  v3 = OblivionDynamicCast( /*0x4290bd*/
         other,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraRank `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(&this->super, other) || this->rank != v3[3]; /*0x4290c6*/
}
