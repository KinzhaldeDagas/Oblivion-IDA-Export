bhkShape *__thiscall bhkNiTriStripsShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkNiTriStripsShape::~bhkNiTriStripsShape(this); /*0x8c65b3*/
  if ( (a2 & 1) != 0 ) /*0x8c65bd*/
    FormHeapFree((unsigned int)this); /*0x8c65c0*/
  return this; /*0x8c65ca*/
}
