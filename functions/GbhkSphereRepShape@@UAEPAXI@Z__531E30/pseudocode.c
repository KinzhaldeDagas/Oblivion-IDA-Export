bhkSphereRepShape *__thiscall bhkSphereRepShape::`scalar deleting destructor'(bhkSphereRepShape *this, char a2)
{
  bhkSphereRepShape::~bhkSphereRepShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
