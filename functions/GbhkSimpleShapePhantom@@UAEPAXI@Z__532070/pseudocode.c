bhkSerializable *__thiscall bhkSimpleShapePhantom::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkSimpleShapePhantom::~bhkSimpleShapePhantom(this); /*0x532073*/
  if ( (a2 & 1) != 0 ) /*0x53207d*/
    FormHeapFree((unsigned int)this); /*0x532080*/
  return this; /*0x53208a*/
}
