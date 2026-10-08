bhkSerializable *__thiscall bhkShapePhantom::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkShapePhantom::~bhkShapePhantom(this); /*0x531fa3*/
  if ( (a2 & 1) != 0 ) /*0x531fad*/
    FormHeapFree((unsigned int)this); /*0x531fb0*/
  return this; /*0x531fba*/
}
