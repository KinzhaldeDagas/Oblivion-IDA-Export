int __userpurge sub_8C8400@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  float *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x8c8403*/
  {
    *a3 = 0; /*0x8c8452*/
    return (int)*(this + 3); /*0x8c8455*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v10); /*0x8c8412*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8c841e*/
    v6 = (float *)((char *)v4 + v5); /*0x8c8423*/
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5; /*0x8c8425*/
    v7 = sub_8C8390(v6); /*0x8c842a*/
    v8 = *(this + 2) == 0; /*0x8c842f*/
    *(this + 3) = (__m128 *)v7; /*0x8c8433*/
    if ( !v8 ) /*0x8c8436*/
      sub_8C8080(this, v7); /*0x8c843b*/
    *a3 = 1; /*0x8c8444*/
    return (int)*(this + 3); /*0x8c8447*/
  }
}
