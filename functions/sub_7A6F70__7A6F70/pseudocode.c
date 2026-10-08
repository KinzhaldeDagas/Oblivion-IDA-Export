// Oblivion Normal scalar-deleting destructor. Applies shared-table count/ownership handling, runs the PosGen/Random base teardown, and conditionally frees the object.
OB_Normal_010201A0 *__thiscall OB_Normal_scalar_deleting_dtor_010201A0(OB_Normal_010201A0 *this, unsigned int flags)
{
  bool v3; // zf

  this->vftable = &Normal::`vftable'; /*0x7a6f73*/
  v3 = OB_Normal_count_010201A0-- == 1; /*0x7a6f79*/
  if ( !v3 ) /*0x7a6f80*/
    this->notReady = 1; /*0x7a6f82*/
  v3 = this->notReady == 0; /*0x7a6f86*/
  this->vftable = &PosGen::`vftable'; /*0x7a6f8a*/
  if ( v3 ) /*0x7a6f90*/
  {
    FormHeapFree((unsigned int)this->sx); /*0x7a6f96*/
    FormHeapFree((unsigned int)this->sfx); /*0x7a6f9f*/
  }
  this->vftable = &Random::`vftable'; /*0x7a6fac*/
  if ( (flags & 1) != 0 ) /*0x7a6fb2*/
    FormHeapFree((unsigned int)this); /*0x7a6fb5*/
  return this; /*0x7a6fbf*/
}
