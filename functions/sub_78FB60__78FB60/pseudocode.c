// OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for vectors with 4-byte elements. Validates count*4 overflow, throws bad_alloc on overflow, and allocates through FormHeapAlloc; FindPairs uses it for vector<bool>'s uint32 backing words.
unsigned int *__cdecl OB_stVector4_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x78fb60*/
  if ( count ) /*0x78fb69*/
  {
    if ( 0xFFFFFFFF / count < 4 ) /*0x78fb8b*/
    {
      count = 0; /*0x78fb96*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x78fb9e*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x78fbad*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x78fbb5*/
    }
  }
  else
  {
    v1 = 0; /*0x78fb6b*/
  }
  return (unsigned int *)FormHeapAlloc(4 * v1); /*0x78fb7d*/
}
