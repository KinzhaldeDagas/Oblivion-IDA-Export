bhkSerializable *__thiscall bhkCachingShapePhantom::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkCachingShapePhantom::~bhkCachingShapePhantom(this); /*0x8bd333*/
  if ( (a2 & 1) != 0 ) /*0x8bd33d*/
    FormHeapFree((unsigned int)this); /*0x8bd340*/
  return this; /*0x8bd34a*/
}
