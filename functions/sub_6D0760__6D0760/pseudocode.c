// NiGeomMorpherController target setter. Accepts a compatible NiObjectNET target, delegates to NiTimeController::SetTarget, resets morph-controller state when morphData exists, and marks targetSetPending +0x5B; incompatible targets clear the controller target.
void __thiscall NiGeomMorpherController_SetTarget(NiGeomMorpherController *this, NiObjectNET *target)
{
  if ( (*((int (__thiscall **)(NiObjectNET *))target->vtbl + 3))(target) ) /*0x6d076f*/
  {
    NiTimeController::SetTarget(&this->super, target); /*0x6d0778*/
    if ( this->morphData ) /*0x6d077d*/
    {
      ((void (__thiscall *)(NiGeomMorpherController *))this->super.vtbl[1].super.DumpChildAttributes)(this); /*0x6d078d*/
      this->targetSetPending = 1; /*0x6d0790*/
    }
  }
  else
  {
    NiTimeController::SetTarget(&this->super, 0); /*0x6d079a*/
  }
}
