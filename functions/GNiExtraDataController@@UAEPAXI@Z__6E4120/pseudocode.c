NiExtraDataController *__thiscall NiExtraDataController::`scalar deleting destructor'(
        NiExtraDataController *this,
        char a2)
{
  NiExtraDataController::~NiExtraDataController(this); /*0x6e4123*/
  if ( (a2 & 1) != 0 ) /*0x6e412d*/
    FormHeapFree((unsigned int)this); /*0x6e4130*/
  return this; /*0x6e413a*/
}
