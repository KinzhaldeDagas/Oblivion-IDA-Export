int __userpurge CompressedArchiveFile::CompressedArchiveFile___@<eax>(FILE **this@<ecx>, char *Dst, size_t Size)
{
  unsigned int v3; // ebp
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // edi
  bool v8; // cc
  int v9; // eax
  int v10; // edi
  int v11; // eax
  const char *v12; // eax
  FILE *v13; // eax
  size_t v15; // [esp-4h] [ebp-14h]
  int v16; // [esp+4h] [ebp-Ch]
  size_t v17; // [esp+8h] [ebp-8h]
  int Sizea; // [esp+18h] [ebp+8h]

  v3 = Size;
  v5 = (int)*(this + 0x5B);
  v6 = (int)*(this + 0x57);
  v7 = (unsigned int)*(this + 0x5C) - v5;
  v8 = (unsigned int)Size <= v7;
  Sizea = 0;
  if ( v8 )
  {
    if ( Dst )
    {
      LODWORD(v15) = v3;
      memcpy(Dst, (char *)*(this + 0x58) + v5, v15);
    }
    *(this + 0x5B) = (FILE *)((char *)*(this + 0x5B) + v3);
    return v3;
  }
  if ( v7 )
  {
    if ( Dst )
    {
      LODWORD(v15) = (char *)*(this + 0x5C) - v5;
      memcpy(Dst, (char *)*(this + 0x58) + v5, v15);
      Dst += v7;
    }
    v3 -= v7;
    Sizea = v7;
  }
  *(this + 0x5B) = 0;
  *(this + 0x5C) = 0;
  if ( !v3 )
    return Sizea;
  while ( 2 )
  {
    v9 = (int)*(this + 0x5A);
    *(_DWORD *)(v6 + 0x10) = v9;
    *(_DWORD *)(v6 + 0xC) = *(this + 0x58);
    if ( !v9 )
      goto LABEL_21;
    while ( 1 )
    {
      v10 = (char *)*(this + 4) - (char *)*(this + 5);
      *(_DWORD *)(v6 + 4) = v10;
      *(_DWORD *)v6 = (char *)*(this + 6) + (_DWORD)*(this + 5);
      if ( v10 )
        break;
LABEL_14:
      *(this + 5) = (FILE *)((char *)*(this + 5) + v10 - *(_DWORD *)(v6 + 4));
      *(this + 0x52) = (FILE *)((char *)*(this + 0x52) + v10 - *(_DWORD *)(v6 + 4));
      if ( !*(_DWORD *)(v6 + 4) )
      {
        NiFile_Flush((int)this);
        *(this + 4) = (FILE *)sub_42C3E0(this, *(this + 6), (unsigned int)*(this + 3), SHIDWORD(v15));
      }
      if ( !*(_DWORD *)(v6 + 0x10) )
        goto LABEL_21;
    }
    v11 = zlib_Inflate((unsigned __int8 **)v6, 2, SHIDWORD(v15), v16, v17);
    if ( v11 != 0xFFFFFFFE && v11 != 2 && v11 != 0xFFFFFFFD && v11 != 0xFFFFFFFC )
    {
      if ( v11 == 1 )
        goto LABEL_21;
      goto LABEL_14;
    }
    Zlib_inflateEnd((_DWORD *)v6);
    v12 = (const char *)(this + 0xF);
    if ( this == (FILE **)0xFFFFFFC4 )
      v12 = "<Unknown>";
    PrintError("Error inflating ZLib stream for file %s.", v12);
    v3 = 0;
LABEL_21:
    v13 = (FILE *)((char *)*(this + 0x5A) - *(_DWORD *)(v6 + 0x10));
    *(this + 0x5C) = v13;
    if ( !v13 )
      return Sizea;
    if ( v3 > (unsigned int)v13 )
    {
      Sizea += (int)v13;
      v3 -= (unsigned int)v13;
      if ( Dst )
      {
        LODWORD(v15) = v13;
        memcpy(Dst, *(this + 0x58), v15);
        Dst = &Dst[(_DWORD)*(this + 0x5C)];
      }
      if ( !v3 )
        return Sizea;
      continue;
    }
    break;
  }
  if ( Dst )
  {
    LODWORD(v15) = v3;
    memcpy(Dst, *(this + 0x58), v15);
  }
  *(this + 0x5B) = (FILE *)((char *)*(this + 0x5B) + v3);
  return v3 + Sizea;
}
