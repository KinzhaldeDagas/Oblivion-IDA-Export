NiBoolInterpolator *__thiscall NiBoolInterpolator::`scalar deleting destructor'(NiBoolInterpolator *this, char a2)
{
  NiBoolInterpolator::~NiBoolInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
