unsigned int __userpurge NiFile_DirectRead@<eax>(int this@<ecx>, FILE *a2@<ebp>, int a3@<edi>, char *Dst, size_t Count)
{
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // ebp
  unsigned int v9; // edi
  unsigned int v11; // eax
  size_t v12; // [esp-18h] [ebp-20h]
  size_t v13; // [esp-18h] [ebp-20h]
  size_t v14; // [esp-10h] [ebp-18h]
  unsigned int v16; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 0x24) )
    return 0;
  v6 = *(_DWORD *)(this + 0x14);
  v7 = Count;
  v8 = Dst;
  HIDWORD(v14) = a3;
  v9 = *(_DWORD *)(this + 0x10) - v6;
  v16 = 0;
  if ( (unsigned int)Count > v9 )
  {
    if ( v9 )
    {
      LODWORD(v14) = *(_DWORD *)(this + 0x10) - v6;
      memcpy(Dst, (const void *)(v6 + *(_DWORD *)(this + 0x18)), v14);
      v8 = &Dst[v9];
      v7 = Count - v9;
      v16 = v9;
    }
    NiFile_Flush(this);
    LODWORD(v14) = *(_DWORD *)(this + 0x1C);
    if ( v7 > *(_DWORD *)(this + 0xC) )
    {
      HIDWORD(v12) = v7;
      LODWORD(v12) = 1;
      return v16 + fread(v8, v12, v14, a2);
    }
    HIDWORD(v13) = *(_DWORD *)(this + 0xC);
    LODWORD(v13) = 1;
    v11 = fread((void *)*(_DWORD *)(this + 0x18), v13, v14, a2);
    *(_DWORD *)(this + 0x10) = v11;
    if ( v11 < v7 )
      v7 = v11;
  }
  LODWORD(v14) = v7;
  memcpy(v8, (const void *)(*(_DWORD *)(this + 0x14) + *(_DWORD *)(this + 0x18)), v14);
  *(_DWORD *)(this + 0x14) += v7;
  return v16 + v7;
}
