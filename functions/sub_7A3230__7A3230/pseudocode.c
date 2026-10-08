// Initializes an empty typed leaf-texture vector and, when count is nonzero, allocates capacity for exactly count 0x54-byte elements.
bool __thiscall OB_stVector_SIdvLeafTexture_AllocateStorage_010201A0(
        OB_stVector_SIdvLeafTexture_010201A0 *this,
        unsigned int count)
{
  OB_SIdvLeafTexture_010201A0 *_010201A0; // eax

  this->begin = 0; /*0x7a323c*/
  this->end = 0; /*0x7a323f*/
  this->capacityEnd = 0; /*0x7a3242*/
  if ( !count ) /*0x7a3245*/
    return 0; /*0x7a3248*/
  if ( count > 0x30C30C3 ) /*0x7a3254*/
    OB_stVector_ThrowLengthError_010201A0((int)this); /*0x7a3256*/
  _010201A0 = OB_stVector_SIdvLeafTexture_Allocate_010201A0(count); /*0x7a325d*/
  this->begin = _010201A0; /*0x7a326a*/
  this->end = _010201A0; /*0x7a326d*/
  this->capacityEnd = &_010201A0[count]; /*0x7a3270*/
  return 1; /*0x7a3247*/
}
