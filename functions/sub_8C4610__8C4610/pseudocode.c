int __userpurge sub_8C4610@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  __m128 *v6; // eax
  bool v7; // zf
  int v9; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x8c4613*/
  {
    *a3 = 0; /*0x8c4687*/
    return (int)*(this + 3); /*0x8c468a*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v9); /*0x8c4622*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8c4630*/
    v6 = (__m128 *)((char *)v4 + v5); /*0x8c4635*/
    v6[0xFFFFFFFF].m128_i8[0xF] = v5; /*0x8c4637*/
    v6->m128_i32[0] = 0; /*0x8c463a*/
    v6[1].m128_f32[0] = 0.0; /*0x8c4640*/
    v6[1].m128_f32[1] = 0.0; /*0x8c4643*/
    v6[1].m128_f32[2] = 0.0; /*0x8c4646*/
    v6[1].m128_f32[3] = 0.0; /*0x8c4649*/
    v6[2].m128_f32[0] = 0.0; /*0x8c464c*/
    v6[2].m128_f32[1] = 0.0; /*0x8c464f*/
    v6[2].m128_f32[2] = 0.0; /*0x8c4652*/
    v6[2].m128_f32[3] = 0.0; /*0x8c4655*/
    v6[3].m128_f32[0] = 0.0; /*0x8c4658*/
    v6[3].m128_f32[1] = 0.0; /*0x8c465b*/
    v6[3].m128_f32[2] = 0.0; /*0x8c465e*/
    v6[3].m128_f32[3] = 0.0; /*0x8c4661*/
    v7 = *(this + 2) == 0; /*0x8c4664*/
    *(this + 3) = v6; /*0x8c4668*/
    if ( !v7 ) /*0x8c466b*/
      sub_8C41C0(this, (int)v6); /*0x8c4670*/
    *a3 = 1; /*0x8c4679*/
    return (int)*(this + 3); /*0x8c467c*/
  }
}
