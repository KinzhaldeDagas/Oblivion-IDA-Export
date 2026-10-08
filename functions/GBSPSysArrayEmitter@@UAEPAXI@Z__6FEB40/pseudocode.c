BSPSysArrayEmitter *__thiscall BSPSysArrayEmitter::`scalar deleting destructor'(BSPSysArrayEmitter *this, char a2)
{
  BSPSysArrayEmitter::~BSPSysArrayEmitter(this); /*0x6feb43*/
  if ( (a2 & 1) != 0 ) /*0x6feb4d*/
    FormHeapFree((unsigned int)this); /*0x6feb50*/
  return this; /*0x6feb5a*/
}
