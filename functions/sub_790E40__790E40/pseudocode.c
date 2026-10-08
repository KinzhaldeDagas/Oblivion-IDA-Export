// Resets an OB_stVector4 pointer triplet and allocates capacity for exactly the requested number of 4-byte elements while leaving end==begin. Returns false for zero capacity; OB_stVector4_CopyAssign uses it after freeing insufficient storage.
bool __thiscall OB_stVector4_AllocateCapacity_010201A0(OB_stVector4_010201A0 *this, unsigned int capacity)
{
  unsigned int *_010201A0; // eax

  this->begin = 0; /*0x790e4c*/
  this->end = 0; /*0x790e4f*/
  this->capacity = 0; /*0x790e52*/
  if ( !capacity ) /*0x790e55*/
    return 0; /*0x790e58*/
  if ( capacity > 0x3FFFFFFF ) /*0x790e64*/
    OB_stVector_ThrowLengthError_010201A0(capacity); /*0x790e66*/
  _010201A0 = OB_stVector4_Allocate_010201A0(capacity); /*0x790e6d*/
  this->begin = _010201A0; /*0x790e72*/
  this->end = _010201A0; /*0x790e75*/
  this->capacity = &_010201A0[capacity]; /*0x790e7e*/
  return 1; /*0x790e57*/
}
