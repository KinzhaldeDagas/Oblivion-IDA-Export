NiMultiTargetTransformController *__thiscall NiMultiTargetTransformController::`scalar deleting destructor'(
        NiMultiTargetTransformController *this,
        char a2)
{
  NiMultiTargetTransformController::~NiMultiTargetTransformController(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
