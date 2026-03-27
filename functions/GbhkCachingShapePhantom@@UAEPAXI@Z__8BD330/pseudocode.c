bhkSerializable *__thiscall bhkCachingShapePhantom::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkCachingShapePhantom::~bhkCachingShapePhantom(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
