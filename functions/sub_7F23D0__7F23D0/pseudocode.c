// STSPData scalar dtor. Frees streamData +0x08 only when vertex-count/ownership gate +0x0C is nonzero, then tears down NiRefObject.
// [4.1 layer ownership 2026-10-03] Verified single-slot STSPData vtable A92B6C (COL AD0B10 at -4). Destructor frees data+8 when ushort+C nonzero. Fallout STSPData::~STSPData 828CE290 corroborates buffer ownership. Plugin can derive a private 0x18-byte allocation retaining normal/shadow textures at +10/+14; derived destructor releases those then calls this native deleting destructor.
OB_STSPData_010201A0 *__thiscall OB_STSPData_dtor_010201A0(OB_STSPData_010201A0 *this, char freeMemory)
{
  unsigned int streamData; // eax

  streamData = this->streamData; /*0x7f23d3*/
  this->vtbl = (int)&STSPData::`vftable'; /*0x7f23d8*/
  if ( streamData ) /*0x7f23de*/
  {
    if ( this->vertexCountOrOwnershipGate ) /*0x7f23e0*/
      FormHeapFree(streamData); /*0x7f23e8*/
  }
  this->vtbl = (int)&NiRefObject::`vftable'; /*0x7f23f5*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x7f23fb*/
  if ( (freeMemory & 1) != 0 ) /*0x7f2406*/
    FormHeapFree((unsigned int)this); /*0x7f2409*/
  return this; /*0x7f2413*/
}
