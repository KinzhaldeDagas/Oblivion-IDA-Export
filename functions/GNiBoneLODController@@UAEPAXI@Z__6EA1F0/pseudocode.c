NiBoneLODController *__thiscall NiBoneLODController::`scalar deleting destructor'(NiBoneLODController *this, char a2)
{
  NiBoneLODController::~NiBoneLODController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
