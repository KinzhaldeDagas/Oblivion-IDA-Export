// OBLIVION AUTHORITY (2026-08-30): Fill constructor for vector<unsigned int>; used by CIndexedGeometry::CombineStrips to create per-LOD triangle totals initialized to zero.
void __thiscall OB_stVectorUInt32_FillCtor_010201A0(
        OB_stVectorUInt32_010201A0 *this,
        unsigned int count,
        const unsigned int *value)
{
  unsigned int *v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // edx

  this->begin = 0; /*0x7956bd*/
  this->end = 0; /*0x7956c0*/
  this->capacity = 0; /*0x7956c3*/
  if ( count ) /*0x7956c6*/
  {
    v4 = (unsigned int *)FormHeapAlloc(4 * count); /*0x7956db*/
    this->capacity = &v4[count]; /*0x7956e8*/
    this->begin = v4; /*0x7956eb*/
    this->end = v4; /*0x7956ee*/
    v5 = count; /*0x7956f1*/
    v6 = v4; /*0x7956f3*/
    do /*0x79570c*/
    {
      *v6 = *value; /*0x795702*/
      --v5; /*0x795704*/
      ++v6; /*0x795707*/
    }
    while ( v5 ); /*0x79570c*/
    this->end = &v4[count]; /*0x795710*/
  }
}
