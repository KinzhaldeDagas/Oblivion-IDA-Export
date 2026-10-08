// Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
void __thiscall OB_stString28_Dtor_010201A0(OB_stString28_010201A0 *this)
{
  if ( this->capacity >= 0x10 ) /*0x79ab07*/
    FormHeapFree((unsigned int)this->storage.heapData); /*0x79ab0d*/
  this->capacity = 0xF; /*0x79ab17*/
  this->size = 0; /*0x79ab1e*/
  this->storage.inlineData[0] = 0; /*0x79ab21*/
}
