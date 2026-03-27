NiColorInterpolator *__thiscall NiColorInterpolator::`scalar deleting destructor'(NiColorInterpolator *this, char a2)
{
  NiColorInterpolator::~NiColorInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
