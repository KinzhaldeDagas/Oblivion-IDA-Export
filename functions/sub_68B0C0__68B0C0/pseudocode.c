// Verified TravelPathNode_Init sets payload +0 to null and kind +4 to 0xFF (uninitialized sentinel); the three bytes at +5..+7 are not written.
TravelPathNode *__thiscall TravelPathNode_Init(TravelPathNode *this)
{
  this->payload = 0; /*0x68b0c2*/
  this->type = 0xFF; /*0x68b0c8*/
  return this; /*0x68b0cc*/
}
