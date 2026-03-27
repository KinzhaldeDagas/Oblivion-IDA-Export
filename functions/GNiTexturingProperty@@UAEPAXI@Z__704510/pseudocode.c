NiTexturingProperty *__thiscall NiTexturingProperty::`scalar deleting destructor'(NiTexturingProperty *this, char a2)
{
  NiTexturingProperty::~NiTexturingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
