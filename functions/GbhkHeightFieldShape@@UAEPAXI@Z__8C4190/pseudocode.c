bhkHeightFieldShape *__thiscall bhkHeightFieldShape::`scalar deleting destructor'(bhkHeightFieldShape *this, char a2)
{
  bhkHeightFieldShape::~bhkHeightFieldShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
