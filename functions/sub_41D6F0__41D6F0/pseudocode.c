bool __thiscall sub_41D6F0(BSExtraData *this, BSExtraData *a2)
{
  _BYTE *v3; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraCellMusicType `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(this, a2) || v3[0xC] != *((_BYTE *)this + 0xC);
}
