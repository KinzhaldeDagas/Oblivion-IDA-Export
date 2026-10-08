// Oblivion Normal destructor. Decrements the shared Normal instance count; non-final instances mark their PosGen base notReady so only the final owner releases the shared sx/sfx tables.
void __thiscall OB_Normal_dtor_010201A0(OB_Normal_010201A0 *this)
{
  bool v2; // zf

  this->vftable = &Normal::`vftable'; /*0x7a6e08*/
  v2 = OB_Normal_count_010201A0-- == 1; /*0x7a6e0e*/
  if ( !v2 ) /*0x7a6e14*/
    this->notReady = 1; /*0x7a6e16*/
  v2 = this->notReady == 0; /*0x7a6e19*/
  this->vftable = &PosGen::`vftable'; /*0x7a6e1d*/
  if ( v2 ) /*0x7a6e23*/
  {
    FormHeapFree((unsigned int)this->sx); /*0x7a6e29*/
    FormHeapFree((unsigned int)this->sfx); /*0x7a6e32*/
  }
  this->vftable = &Random::`vftable'; /*0x7a6e3a*/
}
