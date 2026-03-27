NiRollController *__thiscall NiRollController::`scalar deleting destructor'(NiRollController *this, char a2)
{
  NiRollController::~NiRollController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
