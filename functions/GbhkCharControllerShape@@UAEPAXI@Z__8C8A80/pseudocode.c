bhkShape *__thiscall bhkCharControllerShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkCharControllerShape::~bhkCharControllerShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
