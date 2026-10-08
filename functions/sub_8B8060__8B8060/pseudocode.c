int __userpurge sub_8B8060@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, int a3@<esi>, _BYTE *a4)
{
  FreeEntry *v5; // eax
  unsigned __int8 v6; // cl
  float *v7; // eax
  float *v8; // esi
  bool v9; // zf
  __m128 *v10; // eax

  if ( *(this + 3) ) /*0x8b8063*/
  {
    *a4 = 0; /*0x8b810a*/
    return *(this + 3); /*0x8b810d*/
  }
  else
  {
    v5 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000030uLL, a3); /*0x8b8077*/
    v6 = 0x10 - ((unsigned __int8)v5 & 0xF); /*0x8b8083*/
    *((_BYTE *)v5 + v6 - 1) = v6; /*0x8b8088*/
    *(FreeEntry **)((char *)&v5->prev + v6) = 0; /*0x8b808c*/
    v7 = (float *)((char *)v5 + v6); /*0x8b8093*/
    v8 = v7 + 4; /*0x8b809b*/
    v7[1] = flt_B2EFC4; /*0x8b809e*/
    v7[4] = 0.0; /*0x8b80a3*/
    v7[5] = 0.0; /*0x8b80a5*/
    v7[6] = 0.0; /*0x8b80a8*/
    v7[7] = 0.0; /*0x8b80ab*/
    v7[4] = 1.0; /*0x8b80b0*/
    v7[5] = 1.0; /*0x8b80b2*/
    v7[6] = 1.0; /*0x8b80b5*/
    v9 = *(this + 2) == 0; /*0x8b80b8*/
    *(this + 3) = v7; /*0x8b80bc*/
    if ( !v9 ) /*0x8b80bf*/
    {
      sub_8AEA60(this, (int)v7); /*0x8b80c4*/
      v10 = (__m128 *)*(this + 2); /*0x8b80c9*/
      if ( v10 ) /*0x8b80ce*/
      {
        sub_47DCD0(v8, v10 + 1); /*0x8b80d6*/
        *a4 = 1; /*0x8b80df*/
        return *(this + 3); /*0x8b80e7*/
      }
      sub_47DCD0(v8, (__m128 *)&unk_BA7A40); /*0x8b80f2*/
    }
    *a4 = 1; /*0x8b80fb*/
    return *(this + 3); /*0x8b80fe*/
  }
}
