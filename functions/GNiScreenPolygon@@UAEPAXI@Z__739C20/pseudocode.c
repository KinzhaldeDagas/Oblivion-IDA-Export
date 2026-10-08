NiScreenPolygon *__thiscall NiScreenPolygon::`scalar deleting destructor'(NiScreenPolygon *this, char a2)
{
  NiScreenPolygon::~NiScreenPolygon(this); /*0x739c23*/
  if ( (a2 & 1) != 0 ) /*0x739c2d*/
    FormHeapFree((unsigned int)this); /*0x739c30*/
  return this; /*0x739c3a*/
}
