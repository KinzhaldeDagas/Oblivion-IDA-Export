// Classifies the temporary/internal override package types that callers treat as superseding an underlying scheduled package. True for Combat, CombatLow, Activate, Alarm, Flee, Trespass, Dialogue, Spectator, ReactToDead, Mount/Dismount Horse, Do Nothing, Vampire Feed, Surface, Clear Mount Position, and Movement Blocked. Ambient social scans reject actors whose current package is in this set.
bool __thiscall TESPackage::IsTemporaryOverrideType(TESPackage *this)
{
  bool result; // al

  result = 0; /*0x567777*/
  switch ( this->members.type ) /*0x567785*/
  {
    case kPackageType_Combat: /*0x567785*/
    case kPackageType_CombatLow: /*0x567785*/
    case kPackageType_Activate: /*0x567785*/
    case kPackageType_Alarm: /*0x567785*/
    case kPackageType_Flee: /*0x567785*/
    case kPackageType_Trespass: /*0x567785*/
    case kPackageType_Dialogue: /*0x567785*/
    case kPackageType_Spectator: /*0x567785*/
    case kPackageType_ReactToDead: /*0x567785*/
    case kPackageType_MountHorse: /*0x567785*/
    case kPackageType_DismountHorse: /*0x567785*/
    case kPackageType_DoNothing: /*0x567785*/
    case kPackageType_VampireFeed: /*0x567785*/
    case kPackageType_Surface: /*0x567785*/
    case kPackageType_ClearMountPosition: /*0x567785*/
    case kPackageType_MovementBlocked: /*0x567785*/
      result = 1; /*0x56778c*/
      break; /*0x56778c*/
    default:
      return result;
  }
  return result; /*0x56778e*/
}
