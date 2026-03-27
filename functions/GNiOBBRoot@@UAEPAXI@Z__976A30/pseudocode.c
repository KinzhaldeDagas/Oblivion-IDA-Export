NiOBBRoot *__thiscall NiOBBRoot::`scalar deleting destructor'(NiOBBRoot *this, char a2)
{
  NiOBBRoot::~NiOBBRoot(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
