// Oblivion COMDAT-folded scalar deleting destructor shared by the Random and Uniform vtable slots at 0xA8C5D4 and 0xA8C600. Restores the Random base vftable, then calls FormHeapFree only when flags bit 0 is set.
OB_Random_010201A0 *__thiscall OB_Random_Uniform_scalar_deleting_dtor_010201A0(
        OB_Random_010201A0 *this,
        unsigned int flags)
{
  this->vftable = &Random::`vftable'; /*0x78e978*/
  if ( (flags & 1) != 0 ) /*0x78e97e*/
    FormHeapFree((unsigned int)this); /*0x78e981*/
  return this; /*0x78e98b*/
}
