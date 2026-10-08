// Verified mechanics: returns true iff either pointer in the 8-byte TESObjectDOOR.randomTeleport BSSimpleList head is nonzero. Probable domain meaning: the door has at least one random-teleport destination space, supported by the membership and destination-selection callers.
bool __thiscall TESObjectDOOR_HasRandomTeleportSpaces(TESObjectDOOR *this)
{
  return this->super.randomTeleport.next || this->super.randomTeleport.space; /*0x4b78ee*/
}
