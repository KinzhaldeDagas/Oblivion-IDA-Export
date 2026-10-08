// Allocates count contiguous 0x0C-byte OB_CBranchChildRef records from FormHeap. Checks count*12 overflow and throws std::bad_alloc before allocation on overflow.
OB_CBranchChildRef_010201A0 *__cdecl OB_stVectorBranchChildRef_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x78faa0*/
  if ( count ) /*0x78faa9*/
  {
    if ( 0xFFFFFFFF / count < 0xC ) /*0x78facb*/
    {
      count = 0; /*0x78fad6*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x78fade*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x78faed*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x78faf5*/
    }
  }
  else
  {
    v1 = 0; /*0x78faab*/
  }
  return (OB_CBranchChildRef_010201A0 *)FormHeapAlloc(0xC * v1); /*0x78fabd*/
}
