NiPoint3InterpController *__thiscall NiPoint3InterpController::`scalar deleting destructor'(
        NiPoint3InterpController *this,
        char a2)
{
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6ec1b3*/
  if ( (a2 & 1) != 0 ) /*0x6ec1bd*/
    FormHeapFree((unsigned int)this); /*0x6ec1c0*/
  return this; /*0x6ec1ca*/
}
