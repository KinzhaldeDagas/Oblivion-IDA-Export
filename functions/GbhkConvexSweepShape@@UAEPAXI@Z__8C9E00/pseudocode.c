bhkShape *__thiscall bhkConvexSweepShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkConvexSweepShape::~bhkConvexSweepShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
