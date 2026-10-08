// OBLIVION AUTHORITY (2026-08-30): Fills a vector<bool> iterator range one packed bit at a time, setting or clearing the selected bit in each 32-bit word.
void __cdecl OB_stVectorBool_FillRangeCore_010201A0(
        OB_stVectorBoolIterator_010201A0 first,
        OB_stVectorBoolIterator_010201A0 last,
        const bool *value)
{
  unsigned int *word; // esi
  unsigned int bitOffset; // edi
  unsigned int *begin; // ebp
  unsigned int *v6; // ebp
  unsigned int *v7; // ebp

  word = first.word; /*0x7a8ca7*/
  bitOffset = first.bitOffset; /*0x7a8cac*/
  while ( word != last.word || bitOffset != last.bitOffset ) /*0x7a8cba*/
  {
    if ( !first.owner ) /*0x7a8cc2*/
      _invalid_parameter_noinfo(0, bitOffset, (int)word); /*0x7a8cc4*/
    if ( *value ) /*0x7a8ccd*/
    {
      if ( !first.owner || !word ) /*0x7a8cd8*/
        _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8cda*/
      begin = first.owner->words.begin; /*0x7a8cdf*/
      if ( begin > first.owner->words.end ) /*0x7a8ce5*/
        _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8ce7*/
      if ( bitOffset + 0x20 * (word - begin) >= first.owner->logicalSize ) /*0x7a8cfa*/
        _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8cfc*/
      *word |= 1 << bitOffset; /*0x7a8d0a*/
    }
    else
    {
      if ( !first.owner || !word ) /*0x7a8d14*/
        _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8d16*/
      v6 = first.owner->words.begin; /*0x7a8d1b*/
      if ( v6 > first.owner->words.end ) /*0x7a8d21*/
        _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8d23*/
      if ( bitOffset + 0x20 * (word - v6) >= first.owner->logicalSize ) /*0x7a8d36*/
        _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8d38*/
      *word &= ~(1 << bitOffset); /*0x7a8d48*/
    }
    v7 = first.owner->words.begin; /*0x7a8d4a*/
    if ( v7 > first.owner->words.end ) /*0x7a8d50*/
      _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8d52*/
    if ( 0x20 * (word - v7) + bitOffset + 1 > first.owner->logicalSize ) /*0x7a8d67*/
      _invalid_parameter_noinfo((int)first.owner, bitOffset, (int)word); /*0x7a8d69*/
    if ( bitOffset >= 0x1F ) /*0x7a8d71*/
    {
      bitOffset = 0; /*0x7a8d7b*/
      ++word; /*0x7a8d7d*/
    }
    else
    {
      ++bitOffset; /*0x7a8d73*/
    }
  }
}
