// Initializes an empty 16-byte SFrondVertex vector wrapper and, when count is nonzero, buys exact count capacity. Maximum count is 0x04924924 (0xFFFFFFFF/0x38).
bool __thiscall OB_stVector_SFrondVertex_Buy_010201A0(OB_stVector16_010201A0 *this, unsigned int count)
{
  OB_SFrondVertex_010201A0 *_010201A0; // eax

  this->begin = 0; /*0x79accc*/
  this->end = 0; /*0x79accf*/
  this->capacityEnd = 0; /*0x79acd2*/
  if ( !count ) /*0x79acd5*/
    return 0; /*0x79acd8*/
  if ( count > 0x4924924 ) /*0x79ace4*/
    OB_stVector_ThrowLengthError_010201A0(count); /*0x79ace6*/
  _010201A0 = OB_stVector_SFrondVertex_Allocate_010201A0(count); /*0x79aced*/
  this->begin = _010201A0; /*0x79ad01*/
  this->end = _010201A0; /*0x79ad04*/
  this->capacityEnd = &_010201A0[count]; /*0x79ad08*/
  return 1; /*0x79acd7*/
}
