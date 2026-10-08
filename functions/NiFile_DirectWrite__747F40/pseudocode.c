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

  if ( !*(_BYTE *)(this + 0x24) ) /*0x747f44*/
    return 0; /*0x747fe8*/
  v6 = *(_DWORD *)(this + 0x14); /*0x747f4e*/
  v7 = Count; /*0x747f52*/
  v8 = Src; /*0x747f57*/
  HIDWORD(v12) = a3; /*0x747f5b*/
  v9 = *(_DWORD *)(this + 0xC) - v6; /*0x747f5f*/
  v14 = 0; /*0x747f63*/
  if ( (unsigned int)Count <= v9 ) /*0x747f6b*/
    goto LABEL_9; /*0x747f6b*/
  if ( v9 ) /*0x747f6f*/
  {
    memcpy((void *)(v6 + *(_DWORD *)(this + 0x18)), Src, v9); /*0x747f79*/
    v8 = &Src[v9]; /*0x747f84*/
    v7 = Count - v9; /*0x747f86*/
    v14 = v9; /*0x747f88*/
    *(_DWORD *)(this + 0x14) = *(_DWORD *)(this + 0xC); /*0x747f8c*/
  }
  if ( !NiFile_Flush(this) ) /*0x747f91*/
    return 0; /*0x747fa1*/
  if ( v7 < *(_DWORD *)(this + 0xC) ) /*0x747fa7*/
  {
LABEL_9:
    memcpy((void *)(*(_DWORD *)(this + 0x14) + *(_DWORD *)(this + 0x18)), v8, v7); /*0x747fce*/
    *(_DWORD *)(this + 0x14) += v7; /*0x747fda*/
    return v14 + v7; /*0x747fdf*/
  }
  else
  {
    LODWORD(v12) = *(_DWORD *)(this + 0x1C); /*0x747fac*/
    HIDWORD(v11) = v7; /*0x747fad*/
    LODWORD(v11) = 1; /*0x747fae*/
    return v14 + fwrite(v8, v11, v12, a2); /*0x747fb9*/
  }
}
