int __userpurge sub_8BEAD0@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  __m128 *v6; // eax
  bool v7; // zf
  int v9; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x8bead3*/
  {
    *a3 = 0; /*0x8beb52*/
    return (int)*(this + 3); /*0x8beb55*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000040uLL, v9); /*0x8beae2*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8beaf0*/
    v6 = (__m128 *)((char *)v4 + v5); /*0x8beaf5*/
    v6[0xFFFFFFFF].m128_i8[0xF] = v5; /*0x8beaf7*/
    v6->m128_i32[0] = 0; /*0x8beafa*/
    v6->m128_i32[1] = 0; /*0x8beb00*/
    v6[1].m128_f32[0] = 0.0; /*0x8beb07*/
    v6[1].m128_f32[1] = 0.0; /*0x8beb0a*/
    v6[1].m128_f32[2] = 0.0; /*0x8beb0d*/
    v6[1].m128_f32[3] = 0.0; /*0x8beb10*/
    v6[1].m128_f32[0] = 0.0; /*0x8beb13*/
    v6[1].m128_f32[1] = 0.0; /*0x8beb16*/
    v6[1].m128_f32[2] = 0.0; /*0x8beb19*/
    v6[1].m128_f32[3] = 0.0; /*0x8beb1c*/
    v6[2].m128_f32[0] = 0.0; /*0x8beb1f*/
    v6[2].m128_f32[1] = fConstant_2; /*0x8beb28*/
    v6[2].m128_i8[8] = 1; /*0x8beb2b*/
    v7 = *(this + 2) == 0; /*0x8beb2f*/
    *(this + 3) = v6; /*0x8beb33*/
    if ( !v7 ) /*0x8beb36*/
      sub_8BE860(this, (int)v6); /*0x8beb3b*/
    *a3 = 1; /*0x8beb44*/
    return (int)*(this + 3); /*0x8beb47*/
  }
}
