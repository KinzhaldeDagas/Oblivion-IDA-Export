// Verified 0x30-byte QueuedTree task constructor: stores its TESObjectREFR at +0x20 and clears fields +0x18/+0x1C/+0x24/+0x28/+0x2C before installing QueuedTree vtable. The remaining zeroed pointer roles are Unknown. Fallout's constructor initializes a larger QueuedTree with queued-model, base-model, cloned-3D, and distant-attach task pointers.
QueuedTree_OblivionLayout *__thiscall QueuedTree_ctor(
        QueuedTree_OblivionLayout *this,
        TESObjectREFR *reference,
        unsigned __int8 priority)
{
  sub_436500((IOTask *)this, priority); /*0x437e28*/
  this->unknown_018 = 0; /*0x437e33*/
  this->unknown_01C = 0; /*0x437e36*/
  this->reference = reference; /*0x437e39*/
  this->unknown_024 = 0; /*0x437e3c*/
  this->unknown_028 = 0; /*0x437e3f*/
  this->unknown_02C = 0; /*0x437e42*/
  *((_DWORD *)this + 0xC) = 0; /*0x437e45*/
  *(_DWORD *)this->queuedBase_000_017 = &QueuedTree::`vftable'; /*0x437e48*/
  return this; /*0x437e50*/
}
