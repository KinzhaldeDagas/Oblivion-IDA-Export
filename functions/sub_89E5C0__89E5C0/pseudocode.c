int __userpurge sub_89E5C0@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  __m128 *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x89e5c3*/
  {
    *a3 = 0; /*0x89e612*/
    return (int)*(this + 3); /*0x89e615*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v10); /*0x89e5d2*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x89e5de*/
    v6 = (float *)((char *)v4 + v5); /*0x89e5e3*/
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5; /*0x89e5e5*/
    v7 = (__m128 *)sub_47F9F0(v6); /*0x89e5ea*/
    v8 = *(this + 2) == 0; /*0x89e5ef*/
    *(this + 3) = v7; /*0x89e5f3*/
    if ( !v8 ) /*0x89e5f6*/
      sub_89E370(this, v7->m128_f32); /*0x89e5fb*/
    *a3 = 1; /*0x89e604*/
    return (int)*(this + 3); /*0x89e607*/
  }
}
