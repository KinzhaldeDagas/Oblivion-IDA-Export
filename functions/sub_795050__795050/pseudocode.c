// OBLIVION AUTHORITY (2026-08-30): Initializes raw storage for a vector whose elements are 0x10-byte vector owners. Enforces max_size 0x0FFFFFFF and allocates count*0x10.
bool __thiscall OB_stVector16_Buy_010201A0(OB_stVector16_010201A0 *this, unsigned int count)
{
  OB_stVector16_010201A0 *_010201A0; // eax

  this->begin = 0; /*0x79505c*/
  this->end = 0; /*0x79505f*/
  this->capacityEnd = 0; /*0x795062*/
  if ( !count ) /*0x795065*/
    return 0; /*0x795068*/
  if ( count > 0xFFFFFFF ) /*0x795074*/
    OB_stVector_ThrowLengthError_010201A0((int)this); /*0x795076*/
  _010201A0 = OB_stVector16_Allocate_010201A0(count); /*0x79507d*/
  this->begin = _010201A0; /*0x79508a*/
  this->end = _010201A0; /*0x79508d*/
  this->capacityEnd = &_010201A0[count]; /*0x795090*/
  return 1; /*0x795067*/
}
