void __thiscall NiMultiTargetTransformController::~NiMultiTargetTransformController(
        NiMultiTargetTransformController *this)
{
  void (__thiscall ***interpolators)(void *, int); // ecx

  this->__vftable = (NiMultiTargetTransformControllerVtbl *)&NiMultiTargetTransformController::`vftable'; /*0x6cf968*/
  interpolators = (void (__thiscall ***)(void *, int))this->members.interpolators; /*0x6cf96e*/
  if ( interpolators ) /*0x6cf97b*/
  {
    if ( interpolators[0xFFFFFFFF] ) /*0x6cf97d*/
      (**interpolators)(interpolators, 3); /*0x6cf98c*/
    else
      FormHeapFree((unsigned int)(interpolators + 0xFFFFFFFF)); /*0x6cf991*/
  }
  FormHeapFree((unsigned int)this->members.targets); /*0x6cf99d*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr((NiPSysResetOnLoopCtlr *)this); /*0x6cf9af*/
}
