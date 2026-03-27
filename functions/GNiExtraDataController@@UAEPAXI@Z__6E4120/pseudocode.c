NiExtraDataController *__thiscall NiExtraDataController::`scalar deleting destructor'(
        NiExtraDataController *this,
        char a2)
{
  NiExtraDataController::~NiExtraDataController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
