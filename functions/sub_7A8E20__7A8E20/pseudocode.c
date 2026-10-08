// OBLIVION AUTHORITY (2026-08-30): Constructs/fills the vector<unsigned int> backing-word store used by FindPairs' vector<bool> paired-state table.
void __thiscall OB_stVectorUInt32_ctor_fill_010201A0(
        OB_stVectorUInt32_010201A0 *this,
        unsigned int count,
        const unsigned int *value)
{
  unsigned int *allocation; // eax
  unsigned int remaining; // ecx
  _DWORD *cursor; // edx

  this->begin = 0; /*0x7a8e2d*/
  this->end = 0; /*0x7a8e30*/
  this->capacity = 0; /*0x7a8e33*/
  if ( count ) /*0x7a8e36*/
  {
    if ( count > 0x3FFFFFFF ) /*0x7a8e3e*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x7a8e40*/
    allocation = OB_stVector4_Allocate_010201A0(count); /*0x7a8e47*/
    this->capacity = &allocation[count]; /*0x7a8e54*/
    this->begin = allocation; /*0x7a8e57*/
    this->end = allocation; /*0x7a8e5a*/
    remaining = count; /*0x7a8e5d*/
    cursor = allocation; /*0x7a8e5f*/
    do /*0x7a8e74*/
    {
      *cursor = *value; /*0x7a8e6a*/
      --remaining; /*0x7a8e6c*/
      ++cursor; /*0x7a8e6f*/
    }
    while ( remaining ); /*0x7a8e74*/
    this->end = &allocation[count]; /*0x7a8e7a*/
  }
}
