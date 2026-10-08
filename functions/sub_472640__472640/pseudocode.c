void __thiscall sub_472640(_WORD *this, _WORD *a2)
{
  if ( a2 ) /*0x47264a*/
  {
    if ( *(this + 0x1E) == 0xFF && *(this + 0x38) == 0xFF && !Shared_GetWordAtOffset08(a2) ) /*0x47265f*/
      *(this + 0x38) = Shared_GetWordAtOffset08(a2); /*0x472670*/
    ActorAnimData_SetAnimGroupMovementVector(this, *(float *)&a2); /*0x472677*/
  }
}
