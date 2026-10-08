// ArrowProjectile scalar deleting destructor. Runs the complete destructor and frees this when deleteFlags bit 0 is set.
ArrowProjectile *__thiscall ArrowProjectile_ScalarDeletingDestructor(ArrowProjectile *this, unsigned int deleteFlags)
{
  ArrowProjectile_Destroy(this); /*0x60a213*/
  if ( (deleteFlags & 1) != 0 ) /*0x60a21d*/
    FormHeapFree((unsigned int)this); /*0x60a220*/
  return this; /*0x60a22a*/
}
