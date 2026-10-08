// Verified stores a TESObjectREFR* into payload +0 only when kind==0. The route node does not take an extra reference to the TESObjectREFR.
TESObjectREFR *__thiscall TravelPathNode_SetReference(TravelPathNode *this, TESObjectREFR *reference)
{
  TESObjectREFR *result; // eax

  if ( !this->type ) /*0x68b100*/
  {
    this->payload = reference; /*0x68b10a*/
    return reference; /*0x68b106*/
  }
  return result; /*0x68b10c*/
}
