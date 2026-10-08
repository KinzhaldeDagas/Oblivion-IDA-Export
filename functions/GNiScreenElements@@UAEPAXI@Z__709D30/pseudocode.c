NiAVObject *__thiscall NiScreenElements::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  this->vtbl = (NiAVObjectVtbl *)&NiScreenElements::`vftable'; /*0x709d33*/
  TallGrassTriShape::~TallGrassTriShape(this); /*0x709d39*/
  if ( (a2 & 1) != 0 ) /*0x709d43*/
    FormHeapFree((unsigned int)this); /*0x709d46*/
  return this; /*0x709d50*/
}
