NiAVObject *__thiscall BSScissorTriShape::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  this->vtbl = (NiAVObjectVtbl *)&BSScissorTriShape::`vftable'; /*0x4a1843*/
  TallGrassTriShape::~TallGrassTriShape(this); /*0x4a1849*/
  if ( (a2 & 1) != 0 ) /*0x4a1853*/
    FormHeapFree((unsigned int)this); /*0x4a1856*/
  return this; /*0x4a1860*/
}
