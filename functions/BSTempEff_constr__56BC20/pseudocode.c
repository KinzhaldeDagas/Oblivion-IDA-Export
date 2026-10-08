// Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
BSTempEffect *__thiscall BSTempEffect_Constructor(BSTempEffect *self, TESObjectCELL *parentCell, float durationSeconds)
{
  NiObject_constr((NiObject *)self); /*0x56bc23*/
  self->durationSeconds = durationSeconds;      // BloodOnDeath decode 2026-05-26: BSTempEffect constructor stores duration at +0x08 and owning cell at +0x0C; elapsed starts at +0x10. /*0x56bc30*/
  self->parentCell = parentCell; /*0x56bc35*/
  self->elapsedSeconds = 0.0; /*0x56bc38*/
  self->vtable = &BSTempEffect::`vftable'; /*0x56bc3b*/
  self->initializeCallbackDone = 0; /*0x56bc41*/
  return self; /*0x56bc47*/
}
