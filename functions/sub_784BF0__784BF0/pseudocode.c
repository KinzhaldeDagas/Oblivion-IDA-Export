// Oblivion 1.2.0.416: vector clear implemented as checked erase(begin,end).
void __thiscall OB_stVector24_Clear_010201A0(OB_stVector24_010201A0 *this)
{
  int v1; // edi
  unsigned __int8 *end; // ebx
  unsigned __int8 *begin; // edi
  OB_stVector24Iterator_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = this->end; /*0x784bf7*/
  if ( this->begin > end ) /*0x784bfe*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x784c00*/
  begin = this->begin; /*0x784c05*/
  if ( begin > this->end ) /*0x784c0b*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x784c0d*/
  OB_stVector24_EraseRange_010201A0( /*0x784c1d*/
    this,
    &result,
    (OB_stVector24Iterator_010201A0)__PAIR64__((unsigned int)begin, (unsigned int)this),
    (OB_stVector24Iterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
}
