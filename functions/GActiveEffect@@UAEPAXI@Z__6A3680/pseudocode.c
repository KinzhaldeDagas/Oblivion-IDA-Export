// Verified scalar deleting destructor invokes ActiveEffect::~ActiveEffect and FormHeapFree(this) only when freeMemory bit 0 is set.
ActiveEffect *__thiscall ActiveEffect_ScalarDeletingDestructor(ActiveEffect *this, bool freeMemory)
{
  ActiveEffect::~ActiveEffect(this); /*0x6a3683*/
  if ( freeMemory ) /*0x6a3688*/
    FormHeapFree((unsigned int)this); /*0x6a3690*/
  return this; /*0x6a369a*/
}
