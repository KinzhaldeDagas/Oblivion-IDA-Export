NiPoint3InterpController *__thiscall NiPoint3InterpController::`scalar deleting destructor'(
        NiPoint3InterpController *this,
        char a2)
{
  NiPoint3InterpController::~NiPoint3InterpController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
