bhkCapsuleShape *__thiscall bhkCapsuleShape::`scalar deleting destructor'(bhkCapsuleShape *this, char a2)
{
  bhkCapsuleShape::~bhkCapsuleShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
