NiPathController *__thiscall NiPathController::`scalar deleting destructor'(NiPathController *this, char a2)
{
  NiPathController::~NiPathController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
