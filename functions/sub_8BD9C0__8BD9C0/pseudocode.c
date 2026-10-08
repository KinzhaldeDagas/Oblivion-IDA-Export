int __userpurge sub_8BD9C0@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  __m128 *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x8bd9c3*/
  {
    *a3 = 0; /*0x8bda12*/
    return (int)*(this + 3); /*0x8bda15*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v10); /*0x8bd9d2*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8bd9de*/
    v6 = (float *)((char *)v4 + v5); /*0x8bd9e3*/
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5; /*0x8bd9e5*/
    v7 = (__m128 *)sub_8BD940(v6); /*0x8bd9ea*/
    v8 = *(this + 2) == 0; /*0x8bd9ef*/
    *(this + 3) = v7; /*0x8bd9f3*/
    if ( !v8 ) /*0x8bd9f6*/
      sub_8BD720(this, (int)v7); /*0x8bd9fb*/
    *a3 = 1; /*0x8bda04*/
    return (int)*(this + 3); /*0x8bda07*/
  }
}
