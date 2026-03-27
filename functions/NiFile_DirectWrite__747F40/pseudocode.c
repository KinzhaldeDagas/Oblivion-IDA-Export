unsigned int __userpurge NiFile_DirectWrite@<eax>(
        int this@<ecx>,
        FILE *a2@<ebp>,
        int a3@<edi>,
        char *Src,
        size_t Count)
{
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // ebp
  unsigned int v9; // edi
  size_t v11; // [esp-18h] [ebp-20h]
  size_t v12; // [esp-10h] [ebp-18h]
  unsigned int v14; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 0x24) )
    return 0;
  v6 = *(_DWORD *)(this + 0x14);
  v7 = Count;
  v8 = Src;
  HIDWORD(v12) = a3;
  v9 = *(_DWORD *)(this + 0xC) - v6;
  v14 = 0;
  if ( (unsigned int)Count <= v9 )
    goto LABEL_9;
  if ( v9 )
  {
    LODWORD(v12) = *(_DWORD *)(this + 0xC) - v6;
    memcpy((void *)(v6 + *(_DWORD *)(this + 0x18)), Src, v12);
    v8 = &Src[v9];
    v7 = Count - v9;
    v14 = v9;
    *(_DWORD *)(this + 0x14) = *(_DWORD *)(this + 0xC);
  }
  if ( !NiFile_Flush(this) )
    return 0;
  if ( v7 < *(_DWORD *)(this + 0xC) )
  {
LABEL_9:
    LODWORD(v12) = v7;
    memcpy((void *)(*(_DWORD *)(this + 0x14) + *(_DWORD *)(this + 0x18)), v8, v12);
    *(_DWORD *)(this + 0x14) += v7;
    return v14 + v7;
  }
  else
  {
    LODWORD(v12) = *(_DWORD *)(this + 0x1C);
    HIDWORD(v11) = v7;
    LODWORD(v11) = 1;
    return v14 + fwrite(v8, v11, v12, a2);
  }
}
