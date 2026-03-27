TallGrassTriShape *__thiscall TallGrassTriShape::`scalar deleting destructor'(TallGrassTriShape *this, char a2)
{
  TallGrassTriShape::~TallGrassTriShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
