NiUnionBV *__thiscall NiUnionBV::`scalar deleting destructor'(NiUnionBV *this, char a2)
{
  NiUnionBV::~NiUnionBV(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
