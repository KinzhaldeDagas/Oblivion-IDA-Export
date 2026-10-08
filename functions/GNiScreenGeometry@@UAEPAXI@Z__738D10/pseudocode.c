NiAVObject *__thiscall NiScreenGeometry::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  this->vtbl = (NiAVObjectVtbl *)&NiScreenGeometry::`vftable'; /*0x738d13*/
  TallGrassTriShape::~TallGrassTriShape(this); /*0x738d19*/
  if ( (a2 & 1) != 0 ) /*0x738d23*/
    FormHeapFree((unsigned int)this); /*0x738d26*/
  return this; /*0x738d30*/
}
