// Oblivion-authoritative allocator for count SFrondVertex elements. Allocates count*0x38 bytes from FormHeap and throws std::bad_alloc on multiplication overflow.
OB_SFrondVertex_010201A0 *__cdecl OB_stVector_SFrondVertex_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x799f30*/
  if ( count ) /*0x799f39*/
  {
    if ( 0xFFFFFFFF / count < 0x38 ) /*0x799f63*/
    {
      count = 0; /*0x799f6e*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x799f76*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x799f85*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x799f8d*/
    }
  }
  else
  {
    v1 = 0; /*0x799f3b*/
  }
  return (OB_SFrondVertex_010201A0 *)FormHeapAlloc(0x38 * v1); /*0x799f55*/
}
