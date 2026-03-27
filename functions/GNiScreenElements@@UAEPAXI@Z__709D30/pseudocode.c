NiScreenElements *__thiscall NiScreenElements::`scalar deleting destructor'(NiScreenElements *this, char a2)
{
  *(_DWORD *)this = &NiScreenElements::`vftable';
  TallGrassTriShape::~TallGrassTriShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
