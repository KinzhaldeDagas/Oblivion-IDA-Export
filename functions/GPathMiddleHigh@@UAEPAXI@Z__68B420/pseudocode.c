NiDX92DBufferData **__thiscall PathMiddleHigh::`scalar deleting destructor'(NiDX92DBufferData **this, char a2)
{
  PathMiddleHigh::~PathMiddleHigh(this); /*0x68b423*/
  if ( (a2 & 1) != 0 ) /*0x68b42d*/
    FormHeapFree((unsigned int)this); /*0x68b430*/
  return this; /*0x68b43a*/
}
