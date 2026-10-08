// OBLIVION AUTHORITY (2026-08-30): Initializes raw storage for a 4-byte-element vector used here by CIndexedGeometry triangle counts/colors. Resets the triplet, checks max_size, allocates count*4, and returns success.
bool __thiscall OB_stVectorUInt32_Buy_010201A0(OB_stVectorUInt32_010201A0 *this, unsigned int count)
{
  unsigned int *v4; // eax

  this->begin = 0; /*0x79500b*/
  this->end = 0; /*0x79500e*/
  this->capacity = 0; /*0x795011*/
  if ( !count ) /*0x795014*/
    return 0; /*0x795016*/
  v4 = (unsigned int *)FormHeapAlloc(4 * count); /*0x79502f*/
  this->capacity = &v4[count]; /*0x795039*/
  this->begin = v4; /*0x79503c*/
  this->end = v4; /*0x79503f*/
  return 1; /*0x795018*/
}
