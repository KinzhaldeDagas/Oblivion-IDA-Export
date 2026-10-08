NiSkinInstance *__thiscall NiSkinInstance::`scalar deleting destructor'(NiSkinInstance *this, char a2)
{
  NiSkinInstance::~NiSkinInstance(this); /*0x56cdc3*/
  if ( (a2 & 1) != 0 ) /*0x56cdcd*/
    FormHeapFree((unsigned int)this); /*0x56cdd0*/
  return this; /*0x56cdda*/
}
