// Verified for kind 1 allocates a 12-byte NiPoint3 when payload is null and copies xyz from the supplied position; this record owns that copy until cleared.
void __thiscall TravelPathNode_SetOwnedPosition(TravelPathNode *this, const NiPoint3 *position)
{
  if ( this->type == 1 ) /*0x68b207*/
  {
    if ( !this->payload ) /*0x68b209*/
      this->payload = (void *)FormHeapAlloc(0xCu); /*0x68b218*/
    *(NiPoint3 *)this->payload = *position; /*0x68b222*/
  }
}
