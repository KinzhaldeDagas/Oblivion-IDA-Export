// Verified returns payload as TESObjectREFR* only when kind==0 (reference node); returns null for position nodes or other kinds.
TESObjectREFR *__thiscall TravelPathNode_GetReference(const TravelPathNode *this)
{
  if ( this->type ) /*0x68b0f0*/
    return 0; /*0x68b0f9*/
  else
    return (TESObjectREFR *)this->payload; /*0x68b0f6*/
}
