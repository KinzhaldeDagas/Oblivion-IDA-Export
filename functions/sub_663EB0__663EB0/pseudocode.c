// Verified via direct caller data flow: reads the per-player last-selected destination-space index for a TESObjectDOOR, keyed by that door's refID at +0x0C, from PlayerCharacter offset +0x788. Returns 0xFF when door is null or no map value is found; the stored value is exposed as UInt8. The caller uses it to avoid immediately reusing the prior space when another destination can be selected.
UInt8 __thiscall PlayerCharacter_GetLastSpaceForDoor(PlayerCharacter *this, TESObjectDOOR *door)
{
  UInt8 result; // al
  UInt8 valueOut; // [esp+1h] [ebp-1h] BYREF

  result = 0xFF; /*0x663eb5*/
  valueOut = 0xFF; /*0x663eb9*/
  if ( door ) /*0x663ebd*/
  {
    NiTMap_TryGetAtByteValue(&this->unk760.lastSpaceForDoorByRefID, door->super.super.super.refID, &valueOut); /*0x663ece*/
    return valueOut; /*0x663ed3*/
  }
  return result; /*0x663ed8*/
}
