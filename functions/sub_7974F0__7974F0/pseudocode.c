// OBLIVION AUTHORITY (2026-08-30): Constructs vector<vector<unsigned short>> with count empty inner vectors; CombineStrips uses it for temporary per-LOD strip-length storage.
OB_stVector_stVectorUShort_010201A0 *__thiscall OB_stVector_stVectorUShort_FillCtorEmpty_010201A0(
        OB_stVector_stVectorUShort_010201A0 *this,
        unsigned int count)
{
  OB_stVectorUShort_010201A0 value; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+24h] [ebp-4h]

  memset(&value.begin, 0, 0xC); /*0x797519*/
  v5 = 0; /*0x797531*/
  OB_stVector_stVectorUShort_FillCtor_010201A0(this, count, &value); /*0x797535*/
  if ( value.begin ) /*0x797540*/
    FormHeapFree((unsigned int)value.begin); /*0x797543*/
  return this; /*0x79754d*/
}
