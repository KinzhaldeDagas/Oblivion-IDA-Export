// OBLIVION AUTHORITY (2026-08-30): Deep copy constructor for vector<unsigned short>; allocates exact source size and copies its 2-byte elements.
OB_stVectorUShort_010201A0 *__thiscall OB_stVectorUShort_CopyCtor_010201A0(
        OB_stVectorUShort_010201A0 *this,
        const OB_stVectorUShort_010201A0 *source)
{
  unsigned int v2; // ebp
  unsigned int v3; // esi
  unsigned __int16 *begin; // ecx
  int v6; // eax
  int v7; // esi
  unsigned __int16 *v8; // eax
  unsigned __int16 *end; // esi
  unsigned __int16 *v10; // ebp
  unsigned __int16 *v11; // ecx
  bool v12; // zf
  int v13; // esi
  const void *v14; // eax
  unsigned __int16 *v15; // esi
  rsize_t v17; // [esp-8h] [ebp-10h]

  begin = source->begin; /*0x795488*/
  if ( begin ) /*0x79548f*/
    v6 = source->end - begin; /*0x79549a*/
  else
    v6 = 0; /*0x795491*/
  this->begin = 0; /*0x79549e*/
  this->end = 0; /*0x7954a1*/
  this->capacityEnd = 0; /*0x7954a4*/
  if ( v6 ) /*0x7954a7*/
  {
    v17 = __PAIR64__(v2, v3); /*0x7954b4*/
    v7 = v6; /*0x7954b5*/
    v8 = (unsigned __int16 *)FormHeapAlloc(2 * v6); /*0x7954b9*/
    this->begin = v8; /*0x7954c0*/
    this->end = v8; /*0x7954c3*/
    this->capacityEnd = &v8[v7]; /*0x7954c6*/
    end = source->end; /*0x7954c9*/
    if ( source->begin > end ) /*0x7954d2*/
      _invalid_parameter_noinfo((int)source, (int)this, (int)end); /*0x7954d4*/
    v10 = source->begin; /*0x7954d9*/
    if ( v10 > source->end ) /*0x7954df*/
      _invalid_parameter_noinfo((int)source, (int)this, (int)end); /*0x7954e1*/
    v11 = this->begin; /*0x7954e6*/
    v13 = end - v10; /*0x7954eb*/
    v12 = v13 == 0; /*0x7954eb*/
    v14 = (const void *)(2 * v13); /*0x7954ed*/
    v15 = &v11[v13]; /*0x7954f0*/
    if ( !v12 ) /*0x7954f3*/
      memmove_s(v11, __PAIR64__((unsigned int)v10, (unsigned int)v14), v14, v17); /*0x7954f9*/
    this->end = v15; /*0x795501*/
  }
  return this; /*0x795508*/
}
