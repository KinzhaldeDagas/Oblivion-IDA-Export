// Verified ExtraOwnership comparison: requires the other payload to RTTI-cast to ExtraOwnership, compares BSExtraData base state, then compares ownerForm pointers.
bool __thiscall ExtraOwnership_CompareTo(ExtraOwnership *this, BSExtraData *other)
{
  ExtraOwnership *v3; // esi

  v3 = (ExtraOwnership *)OblivionDynamicCast( /*0x42901d*/
                           other,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                           &ExtraOwnership `RTTI Type Descriptor',
                           0);
  return !v3 || BSExtraData_CompareTo(&this->super, other) || this->owner.ownerForm != v3->owner.ownerForm; /*0x429026*/
}
