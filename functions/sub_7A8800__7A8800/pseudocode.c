// OBLIVION AUTHORITY (2026-08-30): Advances the debug vector<bool> iterator by a signed bit distance, carrying across packed 32-bit words and preserving bitOffset 0..31.
OB_stVectorBoolIterator_010201A0 *__thiscall OB_stVectorBoolIterator_Advance_010201A0(
        OB_stVectorBoolIterator_010201A0 *this,
        int delta)
{
  int v2; // ebx
  unsigned int *begin; // ebx
  unsigned int bitOffset; // ebp
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // edx

  if ( !delta ) /*0x7a880a*/
    return this; /*0x7a880a*/
  if ( !this->owner || !this->word ) /*0x7a8815*/
    _invalid_parameter_noinfo(v2, delta, (int)this); /*0x7a881b*/
  begin = this->owner->words.begin; /*0x7a8823*/
  bitOffset = this->bitOffset; /*0x7a882c*/
  if ( delta >= 0 ) /*0x7a882f*/
  {
    if ( begin > this->owner->words.end ) /*0x7a8855*/
      _invalid_parameter_noinfo((int)begin, delta, (int)this); /*0x7a8857*/
    if ( delta + bitOffset + 0x20 * (this->word - begin) <= this->owner->logicalSize ) /*0x7a886f*/
      goto LABEL_14; /*0x7a886f*/
  }
  else
  {
    if ( begin > this->owner->words.end ) /*0x7a8834*/
      _invalid_parameter_noinfo((int)begin, delta, (int)this); /*0x7a8836*/
    if ( bitOffset + 0x20 * (this->word - begin) >= -delta ) /*0x7a884e*/
      goto LABEL_14; /*0x7a884e*/
  }
  _invalid_parameter_noinfo((int)begin, delta, (int)this); /*0x7a8871*/
LABEL_14:
  if ( delta < 0 ) /*0x7a887a*/
  {
    v6 = this->bitOffset; /*0x7a887c*/
    if ( v6 < -delta ) /*0x7a8885*/
    {
      v7 = delta + v6; /*0x7a888a*/
      this->word = (unsigned int *)((char *)this->word + 0xFFFFFFFC - 4 * ((0xFFFFFFFF - v7) >> 5)); /*0x7a889c*/
      this->bitOffset = v7 & 0x1F; /*0x7a88a2*/
      return this; /*0x7a88a9*/
    }
  }
  v9 = this->bitOffset; /*0x7a88ac*/
  this->word += (v9 + delta) >> 5; /*0x7a88bb*/
  this->bitOffset = (v9 + delta) & 0x1F; /*0x7a88c1*/
  return this; /*0x7a88a5*/
}
