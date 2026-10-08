Tile3D *__thiscall Tile3D::`scalar deleting destructor'(Tile3D *this, char a2)
{
  Tile3D::~Tile3D(this); /*0x58ffe3*/
  if ( (a2 & 1) != 0 ) /*0x58ffed*/
    FormHeapFree((unsigned int)this); /*0x58fff0*/
  return this; /*0x58fffa*/
}
