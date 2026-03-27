CBillboardLeaf *__thiscall CBillboardLeaf::`scalar deleting destructor'(CBillboardLeaf *this, char a2)
{
  CBillboardLeaf::~CBillboardLeaf(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
