// Verified scalar deleting destructor calls NonActorMagicTarget::~NonActorMagicTarget and frees the 0x20-byte allocation with FormHeapFree only when the low bit of freeMemory is set. The destructor itself does not clear the EffectNode chain.
NonActorMagicTarget *__thiscall NonActorMagicTarget_ScalarDeletingDestructor(
        NonActorMagicTarget *this,
        bool freeMemory)
{
  NonActorMagicTarget::~NonActorMagicTarget(this); /*0x6a33f3*/
  if ( freeMemory ) /*0x6a33f8*/
    FormHeapFree((unsigned int)this); /*0x6a3400*/
  return this; /*0x6a340a*/
}
