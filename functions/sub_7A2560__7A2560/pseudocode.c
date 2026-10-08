// Oblivion leaf-texture vector allocator: rejects count*0x54 overflow, then allocates exactly count 0x54-byte records through FormHeap.
OB_SIdvLeafTexture_010201A0 *__cdecl OB_stVector_SIdvLeafTexture_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x7a2560*/
  if ( count ) /*0x7a2569*/
  {
    if ( 0xFFFFFFFF / count < 0x54 ) /*0x7a2587*/
    {
      count = 0; /*0x7a2592*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x7a259a*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x7a25a9*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x7a25b1*/
    }
  }
  else
  {
    v1 = 0; /*0x7a256b*/
  }
  return (OB_SIdvLeafTexture_010201A0 *)FormHeapAlloc(0x54 * v1); /*0x7a2579*/
}
