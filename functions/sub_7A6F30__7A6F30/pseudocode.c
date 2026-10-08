// Oblivion PosGen scalar-deleting destructor. Releases the two 60-float rejection tables when initialized, restores the Random vtable, and conditionally frees the object.
OB_PosGen_010201A0 *__thiscall OB_PosGen_scalar_deleting_dtor_010201A0(OB_PosGen_010201A0 *this, unsigned int flags)
{
  bool v3; // zf

  v3 = this->notReady == 0; /*0x7a6f33*/
  this->vftable = &PosGen::`vftable'; /*0x7a6f37*/
  if ( v3 ) /*0x7a6f3d*/
  {
    FormHeapFree((unsigned int)this->sx); /*0x7a6f43*/
    FormHeapFree((unsigned int)this->sfx); /*0x7a6f4c*/
  }
  this->vftable = &Random::`vftable'; /*0x7a6f59*/
  if ( (flags & 1) != 0 ) /*0x7a6f5f*/
    FormHeapFree((unsigned int)this); /*0x7a6f62*/
  return this; /*0x7a6f6c*/
}
