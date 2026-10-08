NiPalette *__thiscall NiPalette::`scalar deleting destructor'(NiPalette *this, char a2)
{
  NiPalette::~NiPalette(this); /*0x732673*/
  if ( (a2 & 1) != 0 ) /*0x73267d*/
    FormHeapFree((unsigned int)this); /*0x732680*/
  return this; /*0x73268a*/
}
