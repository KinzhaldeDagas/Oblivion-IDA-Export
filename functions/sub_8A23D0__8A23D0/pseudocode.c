int __userpurge sub_8A23D0@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  float *v7; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-4h]

  if ( *(this + 3) )
  {
    *a3 = 0;
    return (int)*(this + 3);
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000060uLL, v10);
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF);
    v6 = (float *)((char *)v4 + v5);
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5;
    v7 = sub_564B70(v6);
    v8 = *(this + 2) == 0;
    *(this + 3) = (__m128 *)v7;
    if ( !v8 )
      sub_8A20A0(this, (int)v7);
    *a3 = 1;
    return (int)*(this + 3);
  }
}
