NiDefaultAVObjectPalette *__thiscall NiDefaultAVObjectPalette::`scalar deleting destructor'(
        NiDefaultAVObjectPalette *this,
        char a2)
{
  NiDefaultAVObjectPalette::~NiDefaultAVObjectPalette(this); /*0x6c5503*/
  if ( (a2 & 1) != 0 ) /*0x6c550d*/
    FormHeapFree((unsigned int)this); /*0x6c5510*/
  return this; /*0x6c551a*/
}
