char __thiscall sub_51D4C0(void *this, unsigned __int8 *a2)
{
  unsigned __int16 *v2; // eax

  if ( !TESActorBase_CanUseWeaponAndShield((int)this) )
    return 0;
  switch ( a2[4] )
  {
    case 0x14u:
      v2 = (unsigned __int16 *)OblivionDynamicCast(
                                 a2,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESObjectARMO `RTTI Type Descriptor',
                                 0);
      if ( !v2 || !TESBipedModelForm_CoversSlot(v2 + 0x32, 0xD, 0) )
        return 0;
      break;
    case 0x1Au:
    case 0x21u:
    case 0x22u:
      return 1;
    default:
      return 0;
  }
  return 1;
}
