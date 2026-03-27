bhkHeightFieldShape *__thiscall sub_8C4450(bhkHeightFieldShape *this, char a2)
{
  *(_DWORD *)this = &bhkPlaneShape::`vftable';
  --dword_BA810C;
  bhkHeightFieldShape::~bhkHeightFieldShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
