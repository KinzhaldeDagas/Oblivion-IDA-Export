// OBLIVION AUTHORITY (2026-08-30): clear() wrapper for a trivial 4-byte-element vector; validates begin/end and erases the full range while retaining capacity.
void __thiscall OB_stVector4_Clear_010201A0(OB_stVector4_010201A0 *this)
{
  int v1; // edi
  unsigned int *end; // ebx
  unsigned int *begin; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = this->end; /*0x784a77*/
  if ( this->begin > end ) /*0x784a7e*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x784a80*/
  begin = this->begin; /*0x784a85*/
  if ( begin > this->end ) /*0x784a8b*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x784a8d*/
  OB_stVector4_EraseRange_010201A0( /*0x784a9d*/
    this,
    &result,
    (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)begin, (unsigned int)this),
    (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
}
