bhkTransformShape *__thiscall bhkTransformShape::`scalar deleting destructor'(bhkTransformShape *this, char a2)
{
  bhkTransformShape::~bhkTransformShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
