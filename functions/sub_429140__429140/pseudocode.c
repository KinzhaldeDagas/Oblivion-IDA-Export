bool __thiscall sub_429140(BSExtraData *this, BSExtraData *a2)
{
  return !OblivionDynamicCast( /*0x429175*/
            a2,
            0,
            (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
            &ExtraLeveledItem `RTTI Type Descriptor',
            0)
      || BSExtraData_CompareTo(this, a2);
}
