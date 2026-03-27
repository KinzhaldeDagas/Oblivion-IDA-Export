bhkMultiSphereShape *__thiscall bhkMultiSphereShape::`scalar deleting destructor'(bhkMultiSphereShape *this, char a2)
{
  bhkMultiSphereShape::~bhkMultiSphereShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
