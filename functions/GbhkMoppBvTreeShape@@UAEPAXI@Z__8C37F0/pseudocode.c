bhkShape *__thiscall bhkMoppBvTreeShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkMoppBvTreeShape::~bhkMoppBvTreeShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
