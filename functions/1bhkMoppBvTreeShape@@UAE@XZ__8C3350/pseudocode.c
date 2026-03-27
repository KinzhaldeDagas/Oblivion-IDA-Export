void __thiscall bhkMoppBvTreeShape::~bhkMoppBvTreeShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMoppBvTreeShape::`vftable';
  sub_89D700(this);
  --dword_BA80F4;
  bhkBvTreeShape::~bhkBvTreeShape(this);
}
