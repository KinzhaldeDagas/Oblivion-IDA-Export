bool __thiscall ExtraOwnership::ComapreTo(ExtraOwnership *this, BSExtraData *a2)
{
  ExtraOwnership *v3; // esi

  v3 = (ExtraOwnership *)OblivionDynamicCast(
                           a2,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                           &ExtraOwnership `RTTI Type Descriptor',
                           0);
  return !v3 || BSExtraData_CompareTo(&this->super, a2) || this->owner.ownerForm != v3->owner.ownerForm;
}
