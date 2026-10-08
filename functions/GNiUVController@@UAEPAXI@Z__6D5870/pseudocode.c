NiUVController *__thiscall NiUVController::`scalar deleting destructor'(NiUVController *this, char a2)
{
  NiUVController::~NiUVController(this); /*0x6d5873*/
  if ( (a2 & 1) != 0 ) /*0x6d587d*/
    FormHeapFree((unsigned int)this); /*0x6d5880*/
  return this; /*0x6d588a*/
}
