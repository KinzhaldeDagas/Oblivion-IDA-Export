// OBLIVION AUTHORITY (2026-08-30): Allocates count*8 bytes from the FormHeap for CLeafLodEngine::SLodEntry storage; each entry is {primaryLeaf, matchedLeaf}.
OB_CLeafLodEngine_SLodEntry_010201A0 *__cdecl OB_stVectorLeafLodEntry_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x7a8660*/
  if ( count ) /*0x7a8669*/
  {
    if ( 0xFFFFFFFF / count < 8 ) /*0x7a868b*/
    {
      count = 0; /*0x7a8696*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x7a869e*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x7a86ad*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x7a86b5*/
    }
  }
  else
  {
    v1 = 0; /*0x7a866b*/
  }
  return (OB_CLeafLodEngine_SLodEntry_010201A0 *)FormHeapAlloc(8 * v1); /*0x7a867d*/
}
