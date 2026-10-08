int __userpurge sub_8C5640@<eax>(int *this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  __m128 *v6; // eax
  __m128 *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-18h]

  if ( *(this + 3) ) /*0x8c5664*/
  {
    *a3 = 0; /*0x8c56c2*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000030uLL, v10); /*0x8c5673*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8c567f*/
    v6 = (__m128 *)((char *)v4 + v5); /*0x8c5684*/
    v6[0xFFFFFFFF].m128_i8[0xF] = v5; /*0x8c5686*/
    v7 = sub_8C5580(v6); /*0x8c5697*/
    v8 = *(this + 2) == 0; /*0x8c569c*/
    *(this + 3) = (int)v7; /*0x8c56a8*/
    if ( !v8 ) /*0x8c56ab*/
      sub_8C5110(this, v7); /*0x8c56b0*/
    *a3 = 1; /*0x8c56b9*/
  }
  return *(this + 3); /*0x8c56c8*/
}
