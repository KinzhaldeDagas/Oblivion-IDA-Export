NiFlipController *__thiscall NiFlipController::`scalar deleting destructor'(NiFlipController *this, char a2)
{
  NiFlipController::~NiFlipController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
