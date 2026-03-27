bhkShape *__thiscall bhkCylinderShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkCylinderShape::~bhkCylinderShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
