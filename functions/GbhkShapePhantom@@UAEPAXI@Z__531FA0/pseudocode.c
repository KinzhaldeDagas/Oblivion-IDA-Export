bhkShapePhantom *__thiscall bhkShapePhantom::`scalar deleting destructor'(bhkShapePhantom *this, char a2)
{
  bhkShapePhantom::~bhkShapePhantom(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
