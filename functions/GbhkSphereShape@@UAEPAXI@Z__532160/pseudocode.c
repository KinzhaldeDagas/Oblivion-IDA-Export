bhkSphereShape *__thiscall bhkSphereShape::`scalar deleting destructor'(bhkSphereShape *this, char a2)
{
  bhkSphereShape::~bhkSphereShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
