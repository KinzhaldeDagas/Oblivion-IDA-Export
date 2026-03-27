bhkConvexShape *__thiscall bhkConvexShape::`scalar deleting destructor'(bhkConvexShape *this, char a2)
{
  bhkConvexShape::~bhkConvexShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
