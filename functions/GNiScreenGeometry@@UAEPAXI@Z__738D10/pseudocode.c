NiScreenGeometry *__thiscall NiScreenGeometry::`scalar deleting destructor'(NiScreenGeometry *this, char a2)
{
  *(_DWORD *)this = &NiScreenGeometry::`vftable';
  TallGrassTriShape::~TallGrassTriShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
