// Verified ExtraGlobal comparison: dynamic-casts the other extra to ExtraGlobal, compares base state, then compares the stored TESGlobal*.
bool __thiscall ExtraGlobal_CompareTo(ExtraGlobal *this, BSExtraData *other)
{
  TESGlobal **v3; // esi

  v3 = (TESGlobal **)OblivionDynamicCast( /*0x42906d*/
                       other,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                       &ExtraGlobal `RTTI Type Descriptor',
                       0);
  return !v3 || BSExtraData_CompareTo(&this->super, other) || this->global != v3[3]; /*0x429076*/
}
