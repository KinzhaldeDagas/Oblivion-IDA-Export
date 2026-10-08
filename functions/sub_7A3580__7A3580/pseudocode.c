// Oblivion binary evidence: compiler-folded copy constructor for the exact 0x10 four-byte vector layout. Allocates count*4 bytes, memmoves the source range, then initializes begin/end/capacity. Pointer-vector copies are intentionally shallow; pointed-object ownership remains with higher-level tree/LOD code.
OB_stVector4_010201A0 *__thiscall OB_stVector4_CopyCtor_010201A0(
        OB_stVector4_010201A0 *this,
        const OB_stVector4_010201A0 *source)
{
  int v2; // ebp
  unsigned int *begin; // eax
  unsigned int elementCount; // esi
  unsigned int *allocation; // eax
  unsigned int *sourceEnd; // esi
  unsigned int *sourceBegin; // ebp
  unsigned int *destinationBegin; // ecx
  bool emptyRange; // zf
  int copyElementCount; // esi
  const void *copyByteCount; // eax
  unsigned int *copiedEnd; // esi
  rsize_t v15; // [esp-4h] [ebp-10h]

  begin = source->begin; /*0x7a3585*/
  if ( begin ) /*0x7a3590*/
    elementCount = source->end - begin; /*0x7a359b*/
  else
    elementCount = 0; /*0x7a3592*/
  this->begin = 0; /*0x7a35a0*/
  this->end = 0; /*0x7a35a3*/
  this->capacity = 0; /*0x7a35a6*/
  if ( elementCount ) /*0x7a35a9*/
  {
    if ( elementCount > 0x3FFFFFFF ) /*0x7a35b1*/
      OB_stVector_ThrowLengthError_010201A0((int)this); /*0x7a35b3*/
    allocation = OB_stVector4_Allocate_010201A0(elementCount); /*0x7a35ba*/
    this->begin = allocation; /*0x7a35bf*/
    this->end = allocation; /*0x7a35c2*/
    this->capacity = &allocation[elementCount]; /*0x7a35c8*/
    sourceEnd = source->end; /*0x7a35cb*/
    if ( source->begin > sourceEnd ) /*0x7a35d4*/
      _invalid_parameter_noinfo((int)source, (int)this, (int)sourceEnd); /*0x7a35d6*/
    LODWORD(v15) = v2; /*0x7a35db*/
    sourceBegin = source->begin; /*0x7a35dc*/
    if ( sourceBegin > source->end ) /*0x7a35e2*/
      _invalid_parameter_noinfo((int)source, (int)this, (int)sourceEnd); /*0x7a35e4*/
    destinationBegin = this->begin; /*0x7a35e9*/
    copyElementCount = sourceEnd - sourceBegin; /*0x7a35ee*/
    emptyRange = copyElementCount == 0; /*0x7a35ee*/
    copyByteCount = (const void *)(4 * copyElementCount); /*0x7a35f1*/
    copiedEnd = &destinationBegin[copyElementCount]; /*0x7a35f8*/
    if ( !emptyRange ) /*0x7a35fb*/
      memmove_s( /*0x7a3601*/
        destinationBegin,
        __PAIR64__((unsigned int)sourceBegin, (unsigned int)copyByteCount),
        copyByteCount,
        v15);
    this->end = copiedEnd; /*0x7a3609*/
  }
  return this; /*0x7a360f*/
}
