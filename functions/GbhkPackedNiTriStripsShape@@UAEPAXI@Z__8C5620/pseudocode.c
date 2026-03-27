bhkPackedNiTriStripsShape *__thiscall bhkPackedNiTriStripsShape::`scalar deleting destructor'(
        bhkPackedNiTriStripsShape *this,
        char a2)
{
  bhkPackedNiTriStripsShape::~bhkPackedNiTriStripsShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
