NiMultiTargetTransformController *__thiscall NiMultiTargetTransformController::`scalar deleting destructor'(
        NiMultiTargetTransformController *this,
        char a2)
{
  NiMultiTargetTransformController::~NiMultiTargetTransformController(this); /*0x6c5f63*/
  if ( (a2 & 1) != 0 ) /*0x6c5f6d*/
    FormHeapFree((unsigned int)this); /*0x6c5f70*/
  return this; /*0x6c5f7a*/
}
