// Verified: if the supplied spatial form matches spaceA or spaceB, returns its paired referenceA or referenceB, respectively; otherwise returns null.
TESObjectREFR *__thiscall TravelPathSpaceDoorLink_GetReferenceForSpace(TravelPathSpaceDoorLink *this, TESForm *space)
{
  TESObjectREFR *result; // eax

  result = 0; /*0x680384*/
  if ( space ) /*0x680388*/
  {
    if ( this->spaceA == space ) /*0x68038d*/
    {
      return this->referenceA; /*0x68038f*/
    }
    else if ( this->spaceB == space ) /*0x680398*/
    {
      return this->referenceB; /*0x68039a*/
    }
  }
  return result; /*0x680392*/
}
