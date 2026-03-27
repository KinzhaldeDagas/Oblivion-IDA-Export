bhkSimpleShapePhantom *__thiscall bhkSimpleShapePhantom::`scalar deleting destructor'(
        bhkSimpleShapePhantom *this,
        char a2)
{
  bhkSimpleShapePhantom::~bhkSimpleShapePhantom(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
