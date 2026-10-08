// Verified BSTempEffect destructor: resets duration, elapsed, parent cell and initializeCallbackDone (+0x14), restores base vtable, then invokes NiRefObject destructor.
LONG __thiscall BSTempEffect_Destructor(BSTempEffect *self)
{
  self->durationSeconds = 0.0; /*0x56bc54*/
  self->vtable = &BSTempEffect::`vftable'; /*0x56bc57*/
  self->elapsedSeconds = 0.0; /*0x56bc5d*/
  self->parentCell = 0; /*0x56bc60*/
  self->initializeCallbackDone = 0; /*0x56bc63*/
  return NiRefObject_destr(self);
}
