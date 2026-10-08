// Oblivion collision-vector allocator: checks count*0x1C for overflow, throws std::bad_alloc on overflow, and allocates through FormHeap.
OB_CollisionObject_010201A0 *__cdecl OB_stVector_CollisionObject_Allocate_010201A0(unsigned int count)
{
  unsigned int v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = count; /*0x787740*/
  if ( count ) /*0x787749*/
  {
    if ( 0xFFFFFFFF / count < 0x1C ) /*0x787771*/
    {
      count = 0; /*0x78777c*/
      std::exception::exception((std::exception *)v3, (const char **)&count); /*0x787784*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x787793*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x78779b*/
    }
  }
  else
  {
    v1 = 0; /*0x78774b*/
  }
  return (OB_CollisionObject_010201A0 *)FormHeapAlloc(0x1C * v1); /*0x787763*/
}
