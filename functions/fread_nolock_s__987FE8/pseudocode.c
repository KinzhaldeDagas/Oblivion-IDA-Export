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

  Dst = (char *)DstBuf;
  v18 = DstSize;
  if ( !HIDWORD(DstSize) || !(_DWORD)ElementSize )
  {
LABEL_29:
    LODWORD(result) = 0;
    return result;
  }
  v5 = ElementSize * HIDWORD(DstSize);
  v6 = HIDWORD(ElementSize);
  v7 = ElementSize * HIDWORD(DstSize);
  if ( (*(_WORD *)(HIDWORD(ElementSize) + 0xC) & 0x10C) != 0 )
    v16 = *(_DWORD *)(HIDWORD(ElementSize) + 0x18);
  else
    v16 = 0x1000;
  if ( !v5 )
  {
LABEL_25:
    LODWORD(result) = ElementSize;
    return result;
  }
  while ( 1 )
  {
    if ( (*(_WORD *)(HIDWORD(ElementSize) + 0xC) & 0x10C) != 0 )
    {
      v8 = *(_DWORD *)(HIDWORD(ElementSize) + 4);
      if ( v8 )
      {
        if ( v8 < 0 )
          goto LABEL_33;
        v5 = v7;
        if ( v7 >= v8 )
          v5 = *(_DWORD *)(HIDWORD(ElementSize) + 4);
        if ( v5 <= v18 )
        {
          HIDWORD(v13) = *(_DWORD *)HIDWORD(ElementSize);
          LODWORD(v13) = v18;
          memcpy_s(Dst, v13, (const void *)v5, v15);
          *(_DWORD *)(HIDWORD(ElementSize) + 4) -= v5;
          *(_DWORD *)HIDWORD(ElementSize) += v5;
          Dst += v5;
          v7 -= v5;
          v18 -= v5;
          v5 = ElementSize * HIDWORD(DstSize);
          goto LABEL_24;
        }
        v6 = 0;
        if ( (_DWORD)DstSize != 0xFFFFFFFF )
          _memset((int)DstBuf, 0, DstSize);
LABEL_28:
        *_errno() = 0x22;
        _invalid_parameter(v7, v5, v6);
        goto LABEL_29;
      }
    }
    if ( v7 < v16 )
    {
      LODWORD(result) = _filbuf((FILE *)HIDWORD(ElementSize));
      if ( (_DWORD)result == 0xFFFFFFFF )
        goto LABEL_34;
      if ( v18 )
      {
        v12 = Dst++;
        *v12 = result;
        --v7;
        --v18;
        v16 = *(_DWORD *)(HIDWORD(ElementSize) + 0x18);
        goto LABEL_24;
      }
LABEL_30:
      if ( (_DWORD)DstSize != 0xFFFFFFFF )
        _memset((int)DstBuf, 0, DstSize);
      goto LABEL_28;
    }
    v10 = v7;
    if ( v16 )
      v10 = v7 - v7 % v16;
    if ( v10 > v18 )
      goto LABEL_30;
    v14 = v10;
    v11 = _fileno((FILE *)HIDWORD(ElementSize));
    LODWORD(result) = _read(v11, Dst, v14);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == 0xFFFFFFFF )
    {
LABEL_33:
      *(_DWORD *)(HIDWORD(ElementSize) + 0xC) |= 0x20u;
      goto LABEL_34;
    }
    Dst += result;
    v7 -= result;
    v18 -= result;
LABEL_24:
    if ( !v7 )
      goto LABEL_25;
  }
  *(_DWORD *)(HIDWORD(ElementSize) + 0xC) |= 0x10u;
LABEL_34:
  LODWORD(result) = (v5 - v7) / HIDWORD(DstSize);
  HIDWORD(result) = (v5 - v7) % HIDWORD(DstSize);
  return result;
}
