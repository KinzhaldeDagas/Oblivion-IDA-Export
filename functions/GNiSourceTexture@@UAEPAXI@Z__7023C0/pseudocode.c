NiSourceTexture *__thiscall NiSourceTexture::`scalar deleting destructor'(NiSourceTexture *this, char a2)
{
  NiSourceTexture::~NiSourceTexture(this); /*0x7023c3*/
  if ( (a2 & 1) != 0 ) /*0x7023cd*/
    FormHeapFree((unsigned int)this); /*0x7023d0*/
  return this; /*0x7023da*/
}
