NiPathController *__thiscall NiPathController::`scalar deleting destructor'(NiPathController *this, char a2)
{
  NiPathController::~NiPathController(this); /*0x6dd473*/
  if ( (a2 & 1) != 0 ) /*0x6dd47d*/
    FormHeapFree((unsigned int)this); /*0x6dd480*/
  return this; /*0x6dd48a*/
}
