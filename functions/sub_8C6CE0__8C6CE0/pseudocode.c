int __userpurge sub_8C6CE0@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // ebx
  unsigned __int8 v5; // al
  int v6; // ebx
  bool v7; // zf
  float *v8; // ecx
  int v10; // [esp+0h] [ebp-20h]

  if ( *(this + 3) )
  {
    *a3 = 0;
    return *(this + 3);
  }
  v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000040uLL, v10);
  v5 = 0x10 - ((unsigned __int8)v4 & 0xF);
  v6 = (int)v4 + v5;
  *(_BYTE *)(v6 - 1) = v5;
  *(_DWORD *)v6 = 0;
  *(float *)(v6 + 4) = 0.0;
  *(_DWORD *)(v6 + 8) = &NiTLargeArray<hkNiTriStripsData>::`vftable';
  *(_DWORD *)(v6 + 0x10) = 0;
  *(_DWORD *)(v6 + 0x1C) = 1;
  *(_DWORD *)(v6 + 0x14) = 0;
  *(_DWORD *)(v6 + 0x18) = 0;
  *(_DWORD *)(v6 + 0xC) = 0;
  *(float *)(v6 + 0x20) = 0.0;
  *(float *)(v6 + 0x24) = 0.0;
  *(float *)(v6 + 0x28) = 0.0;
  *(float *)(v6 + 0x2C) = 0.0;
  *(float *)(v6 + 0x20) = 1.0;
  *(float *)(v6 + 0x24) = 1.0;
  *(float *)(v6 + 0x28) = 1.0;
  v7 = *(this + 2) == 0;
  *(this + 3) = v6;
  if ( v7 )
    goto LABEL_6;
  sub_8CE4C0(v6);
  v8 = (float *)*(this + 2);
  if ( !v8 )
  {
    *(float *)(v6 + 0x20) = 1.0;
    *(float *)(v6 + 0x24) = 1.0;
    *(float *)(v6 + 0x28) = 1.0;
LABEL_6:
    *a3 = 1;
    return *(this + 3);
  }
  sub_916310(v8, v6);
  *a3 = 1;
  return *(this + 3);
}
