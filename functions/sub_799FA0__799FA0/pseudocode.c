// Allocates count compact 0x30-byte SFrondGuide records from FormHeap and throws std::bad_alloc on count*0x30 overflow.
OB_SFrondGuide_010201A0 *__cdecl OB_stVector_SFrondGuide_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x799fa0*/
  if ( count ) /*0x799fa9*/
  {
    if ( 0xFFFFFFFF / count < 0x30 ) /*0x799fca*/
    {
      count = 0; /*0x799fd5*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x799fdd*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x799fec*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x799ff4*/
    }
  }
  else
  {
    v1 = 0; /*0x799fab*/
  }
  return (OB_SFrondGuide_010201A0 *)FormHeapAlloc(0x30 * v1); /*0x799fbc*/
}
