NiPropertyState *__thiscall NiPropertyState::`scalar deleting destructor'(NiPropertyState *this, char a2)
{
  NiPropertyState::~NiPropertyState(this); /*0x731a73*/
  if ( (a2 & 1) != 0 ) /*0x731a7d*/
    FormHeapFree((unsigned int)this); /*0x731a80*/
  return this; /*0x731a8a*/
}
