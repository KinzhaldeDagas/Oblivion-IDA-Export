bhkShape *__thiscall bhkBoxShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkBoxShape::~bhkBoxShape(this); /*0x564ca3*/
  if ( (a2 & 1) != 0 ) /*0x564cad*/
    FormHeapFree((unsigned int)this); /*0x564cb0*/
  return this; /*0x564cba*/
}
