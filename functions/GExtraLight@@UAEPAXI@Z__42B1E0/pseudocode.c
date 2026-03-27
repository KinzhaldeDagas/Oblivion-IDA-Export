ExtraLight *__thiscall ExtraLight::`scalar deleting destructor'(ExtraLight *this, char a2)
{
  ExtraLight::~ExtraLight(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
