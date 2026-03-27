NiLightDimmerController *__thiscall NiLightDimmerController::`scalar deleting destructor'(
        NiLightDimmerController *this,
        char a2)
{
  *(_DWORD *)this = &NiLightDimmerController::`vftable';
  NiPoint3InterpController::~NiPoint3InterpController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
