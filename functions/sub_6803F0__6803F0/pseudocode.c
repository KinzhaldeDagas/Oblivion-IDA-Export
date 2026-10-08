// Verified: if the supplied spatial form matches spaceA or spaceB, returns the opposite spatial TESForm; otherwise returns null.
TESForm *__thiscall TravelPathSpaceDoorLink_GetOtherSpace(TravelPathSpaceDoorLink *this, TESForm *space)
{
  TESForm *result; // eax

  result = this->spaceA; /*0x6803f0*/
  if ( space == result ) /*0x6803fc*/
    return this->spaceB; /*0x6803fe*/
  if ( space != this->spaceB ) /*0x680408*/
    return 0; /*0x68040a*/
  return result; /*0x680401*/
}
