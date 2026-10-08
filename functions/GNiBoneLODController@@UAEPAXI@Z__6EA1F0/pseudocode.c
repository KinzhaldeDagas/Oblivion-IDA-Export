NiBoneLODController *__thiscall NiBoneLODController::`scalar deleting destructor'(NiBoneLODController *this, char a2)
{
  NiBoneLODController::~NiBoneLODController(this); /*0x6ea1f3*/
  if ( (a2 & 1) != 0 ) /*0x6ea1fd*/
    FormHeapFree((unsigned int)this); /*0x6ea200*/
  return this; /*0x6ea20a*/
}
