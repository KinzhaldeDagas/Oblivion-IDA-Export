// OBLIVION AUTHORITY (2026-08-30): Constructs vector<vector<unsigned short*>> with count empty inner vectors; CombineStrips uses it for temporary per-LOD strip-pointer storage.
OB_stVector_stVectorUShortPtr_010201A0 *__thiscall OB_stVector_stVectorUShortPtr_FillCtorEmpty_010201A0(
        OB_stVector_stVectorUShortPtr_010201A0 *this,
        unsigned int count)
{
  OB_stVectorUShortPtr_010201A0 value; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+24h] [ebp-4h]

  memset(&value.begin, 0, 0xC); /*0x797599*/
  v5 = 0; /*0x7975b1*/
  OB_stVector_stVectorUShortPtr_FillCtor_010201A0(this, count, &value); /*0x7975b5*/
  if ( value.begin ) /*0x7975c0*/
    FormHeapFree((unsigned int)value.begin); /*0x7975c3*/
  return this; /*0x7975cd*/
}
