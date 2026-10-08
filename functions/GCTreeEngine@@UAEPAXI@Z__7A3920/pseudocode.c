// Oblivion CTreeEngine scalar deleting destructor. Calls the decoded 0x110-byte CTreeEngine destructor, then frees through FormHeap only when flags bit 0 is set.
OB_CTreeEngine_010201A0 *__thiscall OB_CTreeEngine_scalar_deleting_dtor_010201A0(
        OB_CTreeEngine_010201A0 *this,
        unsigned int flags)
{
  OB_CTreeEngine_dtor_010201A0(this); /*0x7a3923*/
  if ( (flags & 1) != 0 ) /*0x7a392d*/
    FormHeapFree((unsigned int)this); /*0x7a3930*/
  return this; /*0x7a393a*/
}
