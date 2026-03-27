bhkListShape *__thiscall bhkListShape::`scalar deleting destructor'(bhkListShape *this, char a2)
{
  bhkListShape::~bhkListShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
