// OBLIVION AUTHORITY (2026-08-30): Validates the begin/end debug iterators and dispatches the packed vector<bool> range fill.
void __cdecl OB_stVectorBool_FillRangeChecked_010201A0(
        OB_stVectorBoolIterator_010201A0 first,
        OB_stVectorBoolIterator_010201A0 last,
        const bool *value)
{
  int v3; // ebx
  OB_stVectorBoolIterator_010201A0 v4; // [esp-1Ch] [ebp-24h] BYREF
  OB_stVectorBoolIterator_010201A0 v5; // [esp-10h] [ebp-18h] BYREF
  const bool *v6; // [esp-4h] [ebp-Ch]

  v6 = value; /*0x7a8ea2*/
  v5.owner = 0; /*0x7a8eaa*/
  v5.word = last.word; /*0x7a8eb0*/
  v5.bitOffset = last.bitOffset; /*0x7a8eb3*/
  if ( !last.owner ) /*0x7a8eb6*/
    _invalid_parameter_noinfo(v3, 0, (int)&v5); /*0x7a8eb8*/
  v5.owner = last.owner; /*0x7a8ec5*/
  v4.owner = 0; /*0x7a8ed2*/
  v4.word = first.word; /*0x7a8ed8*/
  v4.bitOffset = first.bitOffset; /*0x7a8edb*/
  if ( !first.owner ) /*0x7a8ede*/
    _invalid_parameter_noinfo(v3, 0, (int)&v4); /*0x7a8ee0*/
  v4.owner = first.owner; /*0x7a8ee5*/
  OB_stVectorBool_FillRangeCore_010201A0(v4, v5, v6); /*0x7a8ee7*/
}
