// STSPData ctor. NiRefObject header, streamData +0x08 null, and 16-bit vertex-count/ownership gate +0x0C zero.
OB_STSPData_010201A0 *__thiscall OB_STSPData_ctor_010201A0(OB_STSPData_010201A0 *this)
{
  this->vtbl = (int)&NiRefObject::`vftable'; /*0x7f2368*/
  this->refCount = 0; /*0x7f236e*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7f2375*/
  this->vtbl = (int)&STSPData::`vftable'; /*0x7f237b*/
  this->streamData = 0; /*0x7f2381*/
  this->vertexCountOrOwnershipGate = 0; /*0x7f2388*/
  return this; /*0x7f2390*/
}
