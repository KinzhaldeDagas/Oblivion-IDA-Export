int __userpurge sub_8BE4F0@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  __m128 *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x8be4f3*/
  {
    *a3 = 0; /*0x8be542*/
    return (int)*(this + 3); /*0x8be545*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v10); /*0x8be502*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8be50e*/
    v6 = (float *)((char *)v4 + v5); /*0x8be513*/
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5; /*0x8be515*/
    v7 = (__m128 *)sub_8BE470(v6); /*0x8be51a*/
    v8 = *(this + 2) == 0; /*0x8be51f*/
    *(this + 3) = v7; /*0x8be523*/
    if ( !v8 ) /*0x8be526*/
      sub_8BE190(this, (int)v7); /*0x8be52b*/
    *a3 = 1; /*0x8be534*/
    return (int)*(this + 3); /*0x8be537*/
  }
}
