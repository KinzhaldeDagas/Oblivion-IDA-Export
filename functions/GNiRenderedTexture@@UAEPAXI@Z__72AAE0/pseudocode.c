NiRenderedTexture *__thiscall NiRenderedTexture::`scalar deleting destructor'(NiRenderedTexture *this, char a2)
{
  NiRenderedTexture::~NiRenderedTexture(this); /*0x72aae3*/
  if ( (a2 & 1) != 0 ) /*0x72aaed*/
    FormHeapFree((unsigned int)this); /*0x72aaf0*/
  return this; /*0x72aafa*/
}
