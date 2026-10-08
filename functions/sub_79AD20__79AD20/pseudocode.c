// Initializes an empty compact SFrondGuide vector wrapper and, when count is nonzero, buys exact count capacity. Maximum count is 0x05555555.
bool __thiscall OB_stVector_SFrondGuide_Buy_010201A0(OB_stVector16_010201A0 *this, unsigned int count)
{
  OB_SFrondGuide_010201A0 *_010201A0; // eax

  this->begin = 0; /*0x79ad2c*/
  this->end = 0; /*0x79ad2f*/
  this->capacityEnd = 0; /*0x79ad32*/
  if ( !count ) /*0x79ad35*/
    return 0; /*0x79ad38*/
  if ( count > 0x5555555 ) /*0x79ad44*/
    OB_stVector_ThrowLengthError_010201A0(count); /*0x79ad46*/
  _010201A0 = OB_stVector_SFrondGuide_Allocate_010201A0(count); /*0x79ad4d*/
  this->begin = _010201A0; /*0x79ad5d*/
  this->end = _010201A0; /*0x79ad60*/
  this->capacityEnd = &_010201A0[count]; /*0x79ad64*/
  return 1; /*0x79ad37*/
}
