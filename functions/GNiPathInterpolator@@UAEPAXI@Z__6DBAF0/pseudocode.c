NiPathInterpolator *__thiscall NiPathInterpolator::`scalar deleting destructor'(NiPathInterpolator *this, char a2)
{
  NiPathInterpolator::~NiPathInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
