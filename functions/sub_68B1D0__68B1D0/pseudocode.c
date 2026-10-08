// Verified kind setter writes the low byte at +4; when switching away from kind 1 it frees the owned NiPoint3* payload, then clears payload and stores the new kind. Observed kinds are 0=reference, 1=owned position, initial sentinel 0xFF.
void __thiscall TravelPathNode_SetKind(TravelPathNode *this, TravelPathNodeKind kind)
{
  signed __int8 type; // al

  type = this->type; /*0x68b1d8*/
  if ( type != kind ) /*0x68b1e0*/
  {
    if ( type == 1 ) /*0x68b1e4*/
      FormHeapFree((unsigned int)this->payload); /*0x68b1e9*/
    this->payload = 0; /*0x68b1f1*/
    this->type = kind; /*0x68b1f7*/
  }
}
