bool __thiscall sub_4290F0(BSExtraData *this, BSExtraData *a2)
{
  _WORD *v3; // esi

  v3 = OblivionDynamicCast( /*0x42910d*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraCount `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(this, a2) || *((_WORD *)this + 6) != v3[6]; /*0x429116*/
}
