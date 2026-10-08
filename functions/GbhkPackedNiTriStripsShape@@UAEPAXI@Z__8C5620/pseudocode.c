bhkShape *__thiscall bhkPackedNiTriStripsShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkPackedNiTriStripsShape::~bhkPackedNiTriStripsShape(this); /*0x8c5623*/
  if ( (a2 & 1) != 0 ) /*0x8c562d*/
    FormHeapFree((unsigned int)this); /*0x8c5630*/
  return this; /*0x8c563a*/
}
