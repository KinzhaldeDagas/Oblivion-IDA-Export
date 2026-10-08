// Allocates count contiguous 0x18-byte OB_CBranchFlareEntry records from FormHeap. Checks count*24 overflow and throws std::bad_alloc before allocation on overflow.
OB_CBranchFlareEntry_010201A0 *__cdecl OB_stVectorBranchFlareEntry_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x78fb00*/
  if ( count ) /*0x78fb09*/
  {
    if ( 0xFFFFFFFF / count < 0x18 ) /*0x78fb2d*/
    {
      count = 0; /*0x78fb38*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x78fb40*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x78fb4f*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x78fb57*/
    }
  }
  else
  {
    v1 = 0; /*0x78fb0b*/
  }
  return (OB_CBranchFlareEntry_010201A0 *)FormHeapAlloc(0x18 * v1); /*0x78fb1f*/
}
