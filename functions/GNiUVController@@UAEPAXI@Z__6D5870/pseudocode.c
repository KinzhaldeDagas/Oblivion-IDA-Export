NiUVController *__thiscall NiUVController::`scalar deleting destructor'(NiUVController *this, char a2)
{
  NiUVController::~NiUVController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
