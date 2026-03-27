NiDynamicEffect *__thiscall NiDynamicEffect::`scalar deleting destructor'(NiDynamicEffect *this, char a2)
{
  NiDynamicEffect::~NiDynamicEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
