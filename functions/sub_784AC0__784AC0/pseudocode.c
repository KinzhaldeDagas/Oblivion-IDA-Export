// Oblivion 1.2.0.416: checked erase(first,last) for 0x18-byte records; compacts the tail, destroys remnants, updates end, and returns an iterator.
OB_stVector24Iterator_010201A0 *__thiscall OB_stVector24_EraseRange_010201A0(
        OB_stVector24_010201A0 *this,
        OB_stVector24Iterator_010201A0 *result,
        OB_stVector24Iterator_010201A0 first,
        OB_stVector24Iterator_010201A0 last)
{
  int v4; // ebx
  int v5; // edi
  OB_stVector24_010201A0 *owner; // esi
  unsigned __int8 *current; // ecx
  unsigned __int8 *v9; // eax
  unsigned __int8 *end; // edi
  unsigned __int8 *v11; // ebx
  unsigned __int8 *i; // esi

  owner = first.owner; /*0x784ac2*/
  if ( !first.owner || first.owner != last.owner ) /*0x784ad0*/
    _invalid_parameter_noinfo(v4, v5, (int)first.owner); /*0x784ad2*/
  current = first.current; /*0x784adb*/
  if ( first.current != last.current ) /*0x784ae1*/
  {
    v9 = OB_stVector24_CopyRangeAdapter_010201A0(last.current, this->end, first.current); /*0x784aeb*/
    end = this->end; /*0x784af0*/
    v11 = v9; /*0x784af3*/
    for ( i = v9; i != end; i += 0x18 ) /*0x784afc*/
      Shared_NoOpVirtual_60D0A0(i); /*0x784b02*/
    current = first.current; /*0x784b0e*/
    owner = first.owner; /*0x784b12*/
    this->end = v11; /*0x784b17*/
  }
  result->owner = owner; /*0x784b1f*/
  result->current = current; /*0x784b22*/
  return result; /*0x784b21*/
}
