ExtraLight *__thiscall ExtraLight::`scalar deleting destructor'(ExtraLight *this, char a2)
{
  ExtraLight::~ExtraLight(this); /*0x42b1e3*/
  if ( (a2 & 1) != 0 ) /*0x42b1ed*/
    FormHeapFree((unsigned int)this); /*0x42b1f0*/
  return this; /*0x42b1fa*/
}
