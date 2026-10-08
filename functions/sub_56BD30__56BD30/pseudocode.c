// Verified BSTempEffect default Initialize virtual at vtable +0x4C: sets BSTempEffect.initializeCallbackDone (+0x14) true. Constructor initializes it false; destructor resets it.
void __thiscall BSTempEffect_Initialize(BSTempEffect *self)
{
  self->initializeCallbackDone = 1; /*0x56bd30*/
}
