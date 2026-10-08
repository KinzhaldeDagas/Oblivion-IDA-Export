size_t __cdecl _fread_nolock_s(void *DstBuf, size_t DstSize, size_t ElementSize, size_t Count, FILE *File)
{
  unsigned int v5; // edi
  int v6; // esi
  unsigned int v7; // ebx
  int v8; // eax
  size_t result; // rax
  unsigned int v10; // eax
  int v11; // eax
  char *v12; // ecx
  rsize_t v13; // [esp-Ch] [ebp-28h]
  unsigned int v14; // [esp-4h] [ebp-20h]
  rsize_t v15; // [esp+0h] [ebp-1Ch]
  unsigned int v16; // [esp+10h] [ebp-Ch]
  char *Dst; // [esp+14h] [ebp-8h]
  unsigned int v18; // [esp+18h] [ebp-4h]

  Dst = (char *)DstBuf; /*0x987ff9*/
  v18 = DstSize; /*0x987fff*/
  if ( !HIDWORD(DstSize) || !(_DWORD)ElementSize ) /*0x98800c*/
  {
LABEL_29:
    LODWORD(result) = 0; /*0x988138*/
    return result; /*0x98813e*/
  }
  v5 = ElementSize * HIDWORD(DstSize); /*0x988012*/
  v6 = HIDWORD(ElementSize); /*0x988016*/
  v7 = ElementSize * HIDWORD(DstSize); /*0x988022*/
  if ( (*(_WORD *)(HIDWORD(ElementSize) + 0xC) & 0x10C) != 0 ) /*0x988024*/
    v16 = *(_DWORD *)(HIDWORD(ElementSize) + 0x18); /*0x988029*/
  else
    v16 = 0x1000; /*0x98802e*/
  if ( !v5 ) /*0x988037*/
  {
LABEL_25:
    LODWORD(result) = ElementSize; /*0x988104*/
    return result; /*0x988107*/
  }
  while ( 1 ) /*0x98803d*/
  {
    if ( (*(_WORD *)(HIDWORD(ElementSize) + 0xC) & 0x10C) != 0 ) /*0x988043*/
    {
      v8 = *(_DWORD *)(HIDWORD(ElementSize) + 4); /*0x988045*/
      if ( v8 ) /*0x98804a*/
      {
        if ( v8 < 0 ) /*0x98804c*/
          goto LABEL_33; /*0x98804c*/
        v5 = v7; /*0x988054*/
        if ( v7 >= v8 ) /*0x988056*/
          v5 = *(_DWORD *)(HIDWORD(ElementSize) + 4); /*0x988058*/
        if ( v5 <= v18 ) /*0x98805d*/
        {
          HIDWORD(v13) = *(_DWORD *)HIDWORD(ElementSize); /*0x988064*/
          LODWORD(v13) = v18; /*0x988066*/
          memcpy_s(Dst, v13, (const void *)v5, v15); /*0x98806c*/
          *(_DWORD *)(HIDWORD(ElementSize) + 4) -= v5; /*0x988071*/
          *(_DWORD *)HIDWORD(ElementSize) += v5; /*0x988074*/
          Dst += v5; /*0x988076*/
          v7 -= v5; /*0x988079*/
          v18 -= v5; /*0x98807e*/
          v5 = ElementSize * HIDWORD(DstSize); /*0x988081*/
          goto LABEL_24; /*0x988084*/
        }
        v6 = 0; /*0x988109*/
        if ( (_DWORD)DstSize != 0xFFFFFFFF ) /*0x98810f*/
          _memset((int)DstBuf, 0, DstSize); /*0x988118*/
LABEL_28:
        *_errno() = 0x22; /*0x988120*/
        _invalid_parameter(v7, v5, v6); /*0x988130*/
        goto LABEL_29; /*0x988130*/
      }
    }
    if ( v7 < v16 ) /*0x988089*/
    {
      LODWORD(result) = _filbuf((FILE *)HIDWORD(ElementSize)); /*0x9880d5*/
      if ( (_DWORD)result == 0xFFFFFFFF ) /*0x9880de*/
        goto LABEL_34; /*0x9880de*/
      if ( v18 ) /*0x9880e8*/
      {
        v12 = Dst++; /*0x9880ea*/
        *v12 = result; /*0x9880f0*/
        --v7; /*0x9880f5*/
        --v18; /*0x9880f6*/
        v16 = *(_DWORD *)(HIDWORD(ElementSize) + 0x18); /*0x9880f9*/
        goto LABEL_24; /*0x9880f9*/
      }
LABEL_30:
      if ( (_DWORD)DstSize != 0xFFFFFFFF ) /*0x988143*/
        _memset((int)DstBuf, 0, DstSize); /*0x98814d*/
      goto LABEL_28; /*0x98814d*/
    }
    v10 = v7; /*0x98808f*/
    if ( v16 ) /*0x988091*/
      v10 = v7 - v7 % v16; /*0x98809a*/
    if ( v10 > v18 ) /*0x98809f*/
      goto LABEL_30; /*0x98809f*/
    v14 = v10; /*0x9880a5*/
    v11 = _fileno((FILE *)HIDWORD(ElementSize)); /*0x9880aa*/
    LODWORD(result) = _read(v11, Dst, v14); /*0x9880b1*/
    if ( !(_DWORD)result ) /*0x9880bb*/
      break; /*0x9880bb*/
    if ( (_DWORD)result == 0xFFFFFFFF ) /*0x9880c4*/
    {
LABEL_33:
      *(_DWORD *)(HIDWORD(ElementSize) + 0xC) |= 0x20u; /*0x988169*/
      goto LABEL_34; /*0x988169*/
    }
    Dst += result; /*0x9880ca*/
    v7 -= result; /*0x9880cd*/
    v18 -= result; /*0x9880cf*/
LABEL_24:
    if ( !v7 ) /*0x9880fe*/
      goto LABEL_25; /*0x9880fe*/
  }
  *(_DWORD *)(HIDWORD(ElementSize) + 0xC) |= 0x10u; /*0x988178*/
LABEL_34:
  LODWORD(result) = (v5 - v7) / HIDWORD(DstSize); /*0x98816d*/
  HIDWORD(result) = (v5 - v7) % HIDWORD(DstSize); /*0x988173*/
  return result; /*0x98813a*/
}
