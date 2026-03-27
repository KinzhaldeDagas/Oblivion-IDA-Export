bhkShape *__thiscall bhkTriangleShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkTriangleShape::~bhkTriangleShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
