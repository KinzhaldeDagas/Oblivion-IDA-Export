NiRollController *__thiscall NiRollController::`scalar deleting destructor'(NiRollController *this, char a2)
{
  NiRollController::~NiRollController(this); /*0x6d9183*/
  if ( (a2 & 1) != 0 ) /*0x6d918d*/
    FormHeapFree((unsigned int)this); /*0x6d9190*/
  return this; /*0x6d919a*/
}
