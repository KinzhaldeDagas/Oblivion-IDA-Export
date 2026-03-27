size_t __cdecl _fwrite_nolock(const void *DstBuf, size_t Size, size_t Count, FILE *File)
{
  int v4; // edi
  size_t result; // rax
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // et2
  size_t v12; // [esp-Ch] [ebp-18h]
  int v13; // [esp+8h] [ebp-4h]

  LODWORD(result) = HIDWORD(Size) * Size;
  v6 = HIDWORD(Size) * Size;
  if ( HIDWORD(Size) * (_DWORD)Size )
  {
    if ( (*(_WORD *)(Count + 0xC) & 0x10C) != 0 )
      v13 = *(_DWORD *)(Count + 0x18);
    else
      v13 = 0x1000;
    HIDWORD(v12) = v4;
    while ( 1 )
    {
      if ( (*(_DWORD *)(Count + 0xC) & 0x108) != 0 && (v7 = *(_DWORD *)(Count + 4)) != 0 )
      {
        if ( v7 < 0 )
        {
          *(_DWORD *)(Count + 0xC) |= 0x20u;
          goto LABEL_24;
        }
        if ( v6 < v7 )
          v7 = v6;
        LODWORD(v12) = v7;
        memcpy(*(void **)Count, DstBuf, v12);
        *(_DWORD *)(Count + 4) -= v7;
        *(_DWORD *)Count += v7;
        v6 -= v7;
        DstBuf = (char *)DstBuf + v7;
      }
      else if ( v6 < v13 )
      {
        if ( _flsbuf(*(char *)DstBuf, (FILE *)Count) == 0xFFFFFFFF )
          goto LABEL_23;
        DstBuf = (char *)DstBuf + 1;
        --v6;
        v13 = *(_DWORD *)(Count + 0x18);
        if ( v13 <= 0 )
          v13 = 1;
      }
      else
      {
        if ( (*(_DWORD *)(Count + 0xC) & 0x108) != 0 && _flush((FILE *)Count) )
          goto LABEL_23;
        v8 = v6;
        if ( v13 )
          v8 = v6 - v6 % v13;
        v9 = _fileno((FILE *)Count);
        LODWORD(result) = _write(v9, DstBuf, v8);
        if ( (_DWORD)result == 0xFFFFFFFF )
          goto LABEL_22;
        v10 = v8;
        if ( (unsigned int)result <= v8 )
          v10 = result;
        DstBuf = (char *)DstBuf + v10;
        v6 -= v10;
        if ( (unsigned int)result < v8 )
        {
LABEL_22:
          *(_DWORD *)(Count + 0xC) |= 0x20u;
LABEL_23:
          LODWORD(result) = HIDWORD(Size) * Size;
LABEL_24:
          v11 = ((unsigned int)result - v6) % (unsigned int)Size;
          LODWORD(result) = ((unsigned int)result - v6) / (unsigned int)Size;
          HIDWORD(result) = v11;
          return result;
        }
      }
      if ( !v6 )
        break;
      LODWORD(result) = HIDWORD(Size) * Size;
    }
    LODWORD(result) = HIDWORD(Size);
  }
  return result;
}
