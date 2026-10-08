// OBLIVION AUTHORITY (2026-08-30): Clears vector<unsigned short> while retaining capacity by reducing end to begin.
void __thiscall OB_stVectorUShort_Clear_010201A0(OB_stVectorUShort_010201A0 *this)
{
  int v1; // ebp
  int v2; // edi
  unsigned __int16 *end; // ebx
  unsigned __int16 *begin; // edi
  int v6; // eax
  unsigned __int16 *v7; // ebp
  rsize_t v8; // [esp-10h] [ebp-1Ch]
  rsize_t v9; // [esp-4h] [ebp-10h]

  end = this->end; /*0x794f44*/
  if ( this->begin > end ) /*0x794f4b*/
    _invalid_parameter_noinfo((int)end, v2, (int)this); /*0x794f4d*/
  begin = this->begin; /*0x794f52*/
  if ( begin > this->end ) /*0x794f58*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x794f5a*/
  if ( begin != end ) /*0x794f61*/
  {
    v6 = this->end - end; /*0x794f68*/
    LODWORD(v9) = v1; /*0x794f6f*/
    v7 = &begin[v6]; /*0x794f70*/
    if ( v6 > 0 ) /*0x794f73*/
    {
      HIDWORD(v8) = end; /*0x794f76*/
      LODWORD(v8) = 2 * v6; /*0x794f77*/
      memmove_s(begin, v8, (const void *)(2 * v6), v9); /*0x794f79*/
    }
    this->end = v7; /*0x794f81*/
  }
}
