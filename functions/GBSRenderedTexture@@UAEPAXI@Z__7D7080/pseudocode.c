BSRenderedTexture *__thiscall BSRenderedTexture::`scalar deleting destructor'(BSRenderedTexture *this, char a2)
{
  BSRenderedTexture::~BSRenderedTexture(this); /*0x7d7083*/
  if ( (a2 & 1) != 0 ) /*0x7d708d*/
    FormHeapFree((unsigned int)this); /*0x7d7090*/
  return this; /*0x7d709a*/
}
