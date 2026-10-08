size_t __cdecl _fwrite_nolock(const void *DstBuf, size_t Size, size_t Count, FILE *File)
{
  size_t result; // rax
  unsigned int v5; // ebx
  signed int v6; // edi
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // et2
  int v11; // [esp+8h] [ebp-4h]

  LODWORD(result) = HIDWORD(Size) * Size; /*0x987e4f*/
  v5 = HIDWORD(Size) * Size; /*0x987e59*/
  if ( HIDWORD(Size) * (_DWORD)Size ) /*0x987e4f*/
  {
    if ( (*(_WORD *)(Count + 0xC) & 0x10C) != 0 ) /*0x987e6b*/
      v11 = *(_DWORD *)(Count + 0x18); /*0x987e70*/
    else
      v11 = 0x1000; /*0x987e75*/
    while ( 1 ) /*0x987e8b*/
    {
      if ( (*(_DWORD *)(Count + 0xC) & 0x108) != 0 && (v6 = *(_DWORD *)(Count + 4)) != 0 ) /*0x987e92*/
      {
        if ( v6 < 0 ) /*0x987e94*/
        {
          *(_DWORD *)(Count + 0xC) |= 0x20u; /*0x987f55*/
          goto LABEL_23; /*0x987f59*/
        }
        if ( v5 < v6 ) /*0x987e9c*/
          v6 = v5; /*0x987e9e*/
        memcpy(*(void **)Count, DstBuf, v6); /*0x987ea6*/
        *(_DWORD *)(Count + 4) -= v6; /*0x987eab*/
        *(_DWORD *)Count += v6; /*0x987eae*/
        v5 -= v6; /*0x987eb3*/
        DstBuf = (char *)DstBuf + v6; /*0x987eb5*/
      }
      else if ( v5 < v11 ) /*0x987ec0*/
      {
        if ( _flsbuf(*(char *)DstBuf, (FILE *)Count) == 0xFFFFFFFF ) /*0x987f2e*/
          goto LABEL_22; /*0x987f2e*/
        DstBuf = (char *)DstBuf + 1; /*0x987f30*/
        --v5; /*0x987f36*/
        v11 = *(_DWORD *)(Count + 0x18); /*0x987f39*/
        if ( v11 <= 0 ) /*0x987f3c*/
          v11 = 1; /*0x987f3e*/
      }
      else
      {
        if ( (*(_DWORD *)(Count + 0xC) & 0x108) != 0 && _flush((FILE *)Count) ) /*0x987ec7*/
          goto LABEL_22; /*0x987ecf*/
        v7 = v5; /*0x987ed5*/
        if ( v11 ) /*0x987ed7*/
          v7 = v5 - v5 % v11; /*0x987ee0*/
        v8 = _fileno((FILE *)Count); /*0x987ee7*/
        LODWORD(result) = _write(v8, DstBuf, v7); /*0x987eee*/
        if ( (_DWORD)result == 0xFFFFFFFF ) /*0x987ef9*/
          goto LABEL_21; /*0x987ef9*/
        v9 = v7; /*0x987efd*/
        if ( (unsigned int)result <= v7 ) /*0x987eff*/
          v9 = result; /*0x987f01*/
        DstBuf = (char *)DstBuf + v9; /*0x987f03*/
        v5 -= v9; /*0x987f06*/
        if ( (unsigned int)result < v7 ) /*0x987f0a*/
        {
LABEL_21:
          *(_DWORD *)(Count + 0xC) |= 0x20u; /*0x987f0c*/
LABEL_22:
          LODWORD(result) = HIDWORD(Size) * Size; /*0x987f10*/
LABEL_23:
          v10 = ((unsigned int)result - v5) % (unsigned int)Size; /*0x987f13*/
          LODWORD(result) = ((unsigned int)result - v5) / (unsigned int)Size; /*0x987f17*/
          HIDWORD(result) = v10; /*0x987f17*/
          return result; /*0x987f1a*/
        }
      }
      if ( !v5 ) /*0x987f47*/
        break; /*0x987f47*/
      LODWORD(result) = HIDWORD(Size) * Size; /*0x987e7f*/
    }
    LODWORD(result) = HIDWORD(Size); /*0x987f4d*/
  }
  return result; /*0x987f52*/
}
