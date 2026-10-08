// Verified frees only the owned position payload when kind==1; it does not free the TravelPathNode record itself and does not release reference-kind payloads.
void __thiscall TravelPathNode_FreeOwnedPosition(TravelPathNode *this)
{
  if ( this->type == 1 ) /*0x68b1c4*/
    FormHeapFree((unsigned int)this->payload); /*0x68b1c9*/
}
