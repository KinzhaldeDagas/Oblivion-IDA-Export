void __thiscall NiMultiTargetTransformController::~NiMultiTargetTransformController(
        NiMultiTargetTransformController *this)
{
  void (__thiscall ***interpolators)(void *, int); // ecx

  this->__vftable = (NiMultiTargetTransformControllerVtbl *)&NiMultiTargetTransformController::`vftable';
  interpolators = (void (__thiscall ***)(void *, int))this->members.interpolators;
  if ( interpolators )
  {
    if ( interpolators[0xFFFFFFFF] )
      (**interpolators)(interpolators, 3);
    else
      FormHeapFree((unsigned int)(interpolators + 0xFFFFFFFF));
  }
  FormHeapFree((unsigned int)this->members.targets);
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr((NiPSysResetOnLoopCtlr *)this);
}
