NiDitherProperty *__thiscall NiDitherProperty::`scalar deleting destructor'(NiDitherProperty *this, char a2)
{
  NiDitherProperty::~NiDitherProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
