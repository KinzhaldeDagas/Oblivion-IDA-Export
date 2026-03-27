int __userpurge sub_8C4610@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  int v6; // eax
  bool v7; // zf
  int v9; // [esp+0h] [ebp-4h]

  if ( *(this + 3) )
  {
    *a3 = 0;
    return (int)*(this + 3);
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v9);
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF);
    v6 = (int)v4 + v5;
    *(_BYTE *)(v6 - 1) = v5;
    *(_DWORD *)v6 = 0;
    *(float *)(v6 + 0x10) = 0.0;
    *(float *)(v6 + 0x14) = 0.0;
    *(float *)(v6 + 0x18) = 0.0;
    *(float *)(v6 + 0x1C) = 0.0;
    *(float *)(v6 + 0x20) = 0.0;
    *(float *)(v6 + 0x24) = 0.0;
    *(float *)(v6 + 0x28) = 0.0;
    *(float *)(v6 + 0x2C) = 0.0;
    *(float *)(v6 + 0x30) = 0.0;
    *(float *)(v6 + 0x34) = 0.0;
    *(float *)(v6 + 0x38) = 0.0;
    *(float *)(v6 + 0x3C) = 0.0;
    v7 = *(this + 2) == 0;
    *(this + 3) = (__m128 *)v6;
    if ( !v7 )
      sub_8C41C0(this, v6);
    *a3 = 1;
    return (int)*(this + 3);
  }
}
