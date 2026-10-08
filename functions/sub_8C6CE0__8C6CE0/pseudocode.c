int __userpurge sub_8C6CE0@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // ebx
  unsigned __int8 v5; // al
  int v6; // ebx
  bool v7; // zf
  __m128 *v8; // ecx
  int v10; // [esp+0h] [ebp-20h]

  if ( *(this + 3) ) /*0x8c6d08*/
  {
    *a3 = 0; /*0x8c6db0*/
    return *(this + 3); /*0x8c6db0*/
  }
  v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000040uLL, v10); /*0x8c6d1f*/
  v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8c6d28*/
  v6 = (int)v4 + v5; /*0x8c6d2d*/
  *(_BYTE *)(v6 - 1) = v5; /*0x8c6d2f*/
  *(_DWORD *)v6 = 0; /*0x8c6d32*/
  *(float *)(v6 + 4) = 0.0; /*0x8c6d3e*/
  *(_DWORD *)(v6 + 8) = &NiTLargeArray<hkNiTriStripsData>::`vftable'; /*0x8c6d41*/
  *(_DWORD *)(v6 + 0x10) = 0; /*0x8c6d48*/
  *(_DWORD *)(v6 + 0x1C) = 1; /*0x8c6d4b*/
  *(_DWORD *)(v6 + 0x14) = 0; /*0x8c6d52*/
  *(_DWORD *)(v6 + 0x18) = 0; /*0x8c6d55*/
  *(_DWORD *)(v6 + 0xC) = 0; /*0x8c6d58*/
  *(float *)(v6 + 0x20) = 0.0; /*0x8c6d5b*/
  *(float *)(v6 + 0x24) = 0.0; /*0x8c6d5e*/
  *(float *)(v6 + 0x28) = 0.0; /*0x8c6d61*/
  *(float *)(v6 + 0x2C) = 0.0; /*0x8c6d64*/
  *(float *)(v6 + 0x20) = 1.0; /*0x8c6d69*/
  *(float *)(v6 + 0x24) = 1.0; /*0x8c6d6c*/
  *(float *)(v6 + 0x28) = 1.0; /*0x8c6d6f*/
  v7 = *(this + 2) == 0; /*0x8c6d72*/
  *(this + 3) = v6; /*0x8c6d75*/
  if ( v7 ) /*0x8c6d78*/
    goto LABEL_6; /*0x8c6d78*/
  sub_8CE4C0(this, (_DWORD *)v6); /*0x8c6d7d*/
  v8 = (__m128 *)*(this + 2); /*0x8c6d82*/
  if ( !v8 ) /*0x8c6d87*/
  {
    *(float *)(v6 + 0x20) = 1.0; /*0x8c6d9a*/
    *(float *)(v6 + 0x24) = 1.0; /*0x8c6d9d*/
    *(float *)(v6 + 0x28) = 1.0; /*0x8c6da0*/
LABEL_6:
    *a3 = 1; /*0x8c6da3*/
    return *(this + 3); /*0x8c6daa*/
  }
  sub_916310(v8, v6); /*0x8c6d8a*/
  *a3 = 1; /*0x8c6d93*/
  return *(this + 3); /*0x8c6db6*/
}
