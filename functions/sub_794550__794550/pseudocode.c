// OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for arrays of 0x10-byte elements. Checks count*0x10 overflow, throws std::bad_alloc on overflow, and allocates through FormHeapAlloc; used by multiple outer-vector specializations including vector<vector<float>> and vector<vector<SFrondGuide>>.
OB_stVector16_010201A0 *__cdecl OB_stVector16_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x794550*/
  if ( count ) /*0x794559*/
  {
    if ( 0xFFFFFFFF / count < 0x10 ) /*0x794577*/
    {
      count = 0; /*0x794582*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x79458a*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x794599*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x7945a1*/
    }
  }
  else
  {
    v1 = 0; /*0x79455b*/
  }
  return (OB_stVector16_010201A0 *)FormHeapAlloc(0x10 * v1); /*0x794569*/
}
