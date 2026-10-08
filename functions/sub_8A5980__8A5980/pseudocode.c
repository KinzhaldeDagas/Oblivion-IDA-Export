int __userpurge sub_8A5980@<eax>(int *this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  float *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-18h]

  if ( *(this + 3) ) /*0x8a59a4*/
  {
    *a3 = 0; /*0x8a5a05*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x1000000F0uLL, v10); /*0x8a59b6*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8a59c2*/
    v6 = (float *)((char *)v4 + v5); /*0x8a59c7*/
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5; /*0x8a59c9*/
    v7 = sub_8A5790(v6); /*0x8a59da*/
    v8 = *(this + 2) == 0; /*0x8a59df*/
    *(this + 3) = (int)v7; /*0x8a59eb*/
    if ( !v8 ) /*0x8a59ee*/
      sub_8A2DE0(this, (int)v7); /*0x8a59f3*/
    *a3 = 1; /*0x8a59fc*/
  }
  return *(this + 3); /*0x8a5a0b*/
}
