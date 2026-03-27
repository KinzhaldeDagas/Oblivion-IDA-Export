NiOBBLeaf *__thiscall NiOBBLeaf::`scalar deleting destructor'(NiOBBLeaf *this, char a2)
{
  NiOBBLeaf::~NiOBBLeaf(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
