bhkNiTriStripsShape *__thiscall bhkNiTriStripsShape::`scalar deleting destructor'(bhkNiTriStripsShape *this, char a2)
{
  bhkNiTriStripsShape::~bhkNiTriStripsShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
