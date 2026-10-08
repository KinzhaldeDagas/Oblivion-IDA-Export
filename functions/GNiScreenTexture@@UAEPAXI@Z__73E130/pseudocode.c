NiScreenTexture *__thiscall NiScreenTexture::`scalar deleting destructor'(NiScreenTexture *this, char a2)
{
  NiScreenTexture::~NiScreenTexture(this); /*0x73e133*/
  if ( (a2 & 1) != 0 ) /*0x73e13d*/
    FormHeapFree((unsigned int)this); /*0x73e140*/
  return this; /*0x73e14a*/
}
