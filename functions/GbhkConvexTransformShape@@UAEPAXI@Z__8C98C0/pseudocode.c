bhkShape *__thiscall bhkConvexTransformShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkConvexTransformShape::~bhkConvexTransformShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
