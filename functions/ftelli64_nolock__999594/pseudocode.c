__int64 __cdecl _ftelli64_nolock(FILE *File)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned int v4; // esi
  int flag; // edx
  char *ptr; // eax
  char *base; // ecx
  char *i; // edx
  int cnt; // edx
  int v11; // esi
  char *v12; // eax
  char *v13; // ecx
  bool v14; // zf
  int bufsiz; // eax
  int v16; // ecx
  __int64 v17; // [esp+Ch] [ebp-10h]
  char *v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  unsigned int Filea; // [esp+24h] [ebp+8h]

  v2 = _fileno(File);
  v19 = v2;
  if ( File->_cnt < 0 )
    File->_cnt = 0;
  v3 = _lseeki64(v2, 0, 1);
  v4 = HIDWORD(v3);
  v17 = v3;
  if ( v3 < 0 )
    return 0xFFFFFFFFFFFFFFFFuLL;
  flag = File->_flag;
  if ( (flag & 0x108) == 0 )
    return __PAIR64__(v4, v3) - File->_cnt;
  ptr = File->_ptr;
  base = File->_base;
  v18 = (char *)(File->_ptr - base);
  if ( (flag & 3) != 0 )
  {
    if ( *(char *)(dword_BAAAC0[v19 >> 5] + 0x28 * (v19 & 0x1F) + 4) < 0 )
    {
      for ( i = File->_base; i < ptr; ++i )
      {
        if ( *i == 0xA )
          ++v18;
      }
    }
  }
  else if ( (char)flag >= 0 )
  {
    *_errno() = 0x16;
    return 0xFFFFFFFFFFFFFFFFuLL;
  }
  if ( !(v4 | (unsigned int)v17) )
    return (unsigned int)v18;
  if ( (File->_flag & 1) != 0 )
  {
    cnt = File->_cnt;
    if ( !cnt )
    {
      v18 = 0;
      return (__int64)&v18[__PAIR64__(v4, v17)];
    }
    v11 = 0x28 * (v19 & 0x1F);
    Filea = cnt + ptr - base;
    if ( *(char *)(dword_BAAAC0[v19 >> 5] + v11 + 4) >= 0 )
    {
LABEL_37:
      v17 -= Filea;
      v4 = HIDWORD(v17);
      return (__int64)&v18[__PAIR64__(v4, v17)];
    }
    if ( _lseeki64(v19, 0, 2) == v17 )
    {
      v12 = File->_base;
      v13 = &v12[Filea];
      while ( v12 < v13 )
      {
        if ( *v12 == 0xA )
          ++Filea;
        ++v12;
      }
      v14 = (File->_flag & 0x2000) == 0;
LABEL_35:
      if ( !v14 )
        ++Filea;
      goto LABEL_37;
    }
    if ( (int)((unsigned __int64)_lseeki64(v19, v17, 0) >> 0x20) >= 0 )
    {
      bufsiz = 0x200;
      if ( Filea > 0x200 || (v16 = File->_flag, (v16 & 8) == 0) || (v16 & 0x400) != 0 )
        bufsiz = File->_bufsiz;
      Filea = bufsiz;
      v14 = (*(_BYTE *)(dword_BAAAC0[v19 >> 5] + v11 + 4) & 4) == 0;
      goto LABEL_35;
    }
    return 0xFFFFFFFFFFFFFFFFuLL;
  }
  return (__int64)&v18[__PAIR64__(v4, v17)];
}
