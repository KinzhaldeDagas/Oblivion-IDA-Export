// Oblivion byte-vector insert-one wrapper: converts a checked iterator to an offset, inserts one byte through byte insert-fill, and returns the relocated checked iterator.
OB_stVectorByteIterator_010201A0 *__thiscall OB_stVectorByte_InsertOne_010201A0(
        OB_stVectorByte_010201A0 *this,
        OB_stVectorByteIterator_010201A0 *result,
        OB_stVectorByteIterator_010201A0 position,
        const unsigned __int8 *value)
{
  int v4; // ebx
  unsigned __int8 *begin; // edi
  unsigned __int8 *v7; // ebx
  unsigned __int8 *v8; // edi
  unsigned __int8 *v9; // edi

  begin = this->begin; /*0x78c86b*/
  if ( begin && this->end != begin ) /*0x78c877*/
  {
    if ( begin > this->end ) /*0x78c881*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x78c883*/
    if ( !position.owner || position.owner != this ) /*0x78c88e*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x78c890*/
    v7 = (unsigned __int8 *)(position.current - begin); /*0x78c899*/
  }
  else
  {
    v7 = 0; /*0x78c87b*/
  }
  OB_stVectorByte_InsertFill_010201A0(this, position, 1u, value); /*0x78c8aa*/
  v8 = this->begin; /*0x78c8af*/
  if ( v8 > this->end ) /*0x78c8b5*/
    _invalid_parameter_noinfo((int)v7, (int)v8, (int)this); /*0x78c8b7*/
  v9 = &v8[(_DWORD)v7]; /*0x78c8c0*/
  if ( v9 > this->end || v9 < this->begin ) /*0x78c8ca*/
    _invalid_parameter_noinfo((int)v7, (int)v9, (int)this); /*0x78c8cc*/
  result->current = v9; /*0x78c8d5*/
  result->owner = this; /*0x78c8d9*/
  return result; /*0x78c8d8*/
}
