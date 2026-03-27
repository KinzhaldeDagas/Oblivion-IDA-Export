bhkBoxShape *__thiscall bhkBoxShape::`scalar deleting destructor'(bhkBoxShape *this, char a2)
{
  bhkBoxShape::~bhkBoxShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
