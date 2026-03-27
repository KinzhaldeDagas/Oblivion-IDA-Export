BSScissorTriShape *__thiscall BSScissorTriShape::`scalar deleting destructor'(BSScissorTriShape *this, char a2)
{
  *(_DWORD *)this = &BSScissorTriShape::`vftable';
  TallGrassTriShape::~TallGrassTriShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
