char __thiscall sub_51D4C0(void *this, unsigned __int8 *a2)
{
  unsigned __int16 *v2; // eax

  if ( !TESActorBase_CanUseWeaponAndShield((int)this) ) /*0x51d4c0*/
    return 0; /*0x51d517*/
  switch ( a2[4] ) /*0x51d4e0*/
  {
    case 0x14u: /*0x51d4e0*/
      v2 = (unsigned __int16 *)OblivionDynamicCast( /*0x51d4f6*/
                                 a2,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESObjectARMO `RTTI Type Descriptor',
                                 0);
      if ( !v2 || !TESBipedModelForm_CoversSlot(v2 + 0x32, 0xD, 0) ) /*0x51d509*/
        return 0; /*0x51d510*/
      break; /*0x51d510*/
    case 0x1Au: /*0x51d4e0*/
    case 0x21u: /*0x51d4e0*/
    case 0x22u: /*0x51d4e0*/
      return 1;
    default:
      return 0;
  }
  return 1; /*0x51d514*/
}
