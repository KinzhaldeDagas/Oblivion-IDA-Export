NiFlipController *__thiscall NiFlipController::`scalar deleting destructor'(NiFlipController *this, char a2)
{
  NiFlipController::~NiFlipController(this); /*0x6d2133*/
  if ( (a2 & 1) != 0 ) /*0x6d213d*/
    FormHeapFree((unsigned int)this); /*0x6d2140*/
  return this; /*0x6d214a*/
}
