bhkBvTreeShape *__thiscall bhkBvTreeShape::`scalar deleting destructor'(bhkBvTreeShape *this, char a2)
{
  bhkBvTreeShape::~bhkBvTreeShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
