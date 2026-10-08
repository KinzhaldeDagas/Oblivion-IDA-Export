unsigned int __thiscall NiFile_DirectRead(void *self, void *destination, unsigned int byteCount)
{
  FILE *v3; // ebp
  int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // ebp
  unsigned int v9; // edi
  unsigned int v11; // eax
  size_t v12; // [esp-18h] [ebp-20h]
  size_t v13; // [esp-18h] [ebp-20h]
  size_t v14; // [esp-10h] [ebp-18h]
  FILE *v15; // [esp-8h] [ebp-10h]
  unsigned int v16; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)self + 0x24) ) /*0x747e84*/
    return 0; /*0x747f2e*/
  v6 = *((_DWORD *)self + 5); /*0x747e8e*/
  v7 = byteCount; /*0x747e92*/
  v15 = v3; /*0x747e96*/
  v8 = (char *)destination; /*0x747e97*/
  HIDWORD(v14) = v4; /*0x747e9b*/
  v9 = *((_DWORD *)self + 4) - v6; /*0x747e9f*/
  v16 = 0; /*0x747ea3*/
  if ( byteCount > v9 ) /*0x747eab*/
  {
    if ( v9 ) /*0x747eaf*/
    {
      memcpy(destination, (const void *)(v6 + *((_DWORD *)self + 6)), v9); /*0x747eb9*/
      v8 = (char *)destination + v9; /*0x747ec1*/
      v7 = byteCount - v9; /*0x747ec3*/
      v16 = v9; /*0x747ec5*/
    }
    NiFile_Flush((int)self); /*0x747ecb*/
    LODWORD(v14) = *((_DWORD *)self + 7); /*0x747ed8*/
    if ( v7 > *((_DWORD *)self + 3) ) /*0x747ed9*/
    {
      HIDWORD(v12) = v7; /*0x747edb*/
      LODWORD(v12) = 1; /*0x747edc*/
      return v16 + fread(v8, v12, v14, v15); /*0x747ef0*/
    }
    HIDWORD(v13) = *((_DWORD *)self + 3); /*0x747ef6*/
    LODWORD(v13) = 1; /*0x747ef7*/
    v11 = fread((void *)*((_DWORD *)self + 6), v13, v14, v15); /*0x747efa*/
    *((_DWORD *)self + 4) = v11; /*0x747f04*/
    if ( v11 < v7 ) /*0x747f07*/
      v7 = v11; /*0x747f09*/
  }
  memcpy(v8, (const void *)(*((_DWORD *)self + 5) + *((_DWORD *)self + 6)), v7); /*0x747f14*/
  *((_DWORD *)self + 5) += v7; /*0x747f20*/
  return v16 + v7; /*0x747eee*/
}
