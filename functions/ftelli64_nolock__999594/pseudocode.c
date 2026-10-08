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

  v2 = _fileno(File); /*0x9995a1*/
  v19 = v2; /*0x9995ac*/
  if ( File->_cnt < 0 ) /*0x9995af*/
    File->_cnt = 0; /*0x9995b1*/
  v3 = _lseeki64(v2, 0, 1); /*0x9995b9*/
  v4 = HIDWORD(v3); /*0x9995be*/
  v17 = v3; /*0x9995c7*/
  if ( v3 < 0 ) /*0x9995cd*/
    return 0xFFFFFFFFFFFFFFFFuLL; /*0x9995cd*/
  flag = File->_flag; /*0x9995e0*/
  if ( (flag & 0x108) == 0 ) /*0x9995e8*/
    return __PAIR64__(v4, v3) - File->_cnt; /*0x9995f6*/
  ptr = File->_ptr; /*0x9995fb*/
  base = File->_base; /*0x9995fd*/
  v18 = (char *)(File->_ptr - base); /*0x999607*/
  if ( (flag & 3) != 0 ) /*0x99960a*/
  {
    if ( *(char *)(unk_BAAAC0[v19 >> 5] + 0x28 * (v19 & 0x1F) + 4) < 0 ) /*0x999627*/
    {
      for ( i = File->_base; i < ptr; ++i ) /*0x999629*/
      {
        if ( *i == 0xA ) /*0x999630*/
          ++v18; /*0x999632*/
      }
    }
  }
  else if ( (char)flag >= 0 ) /*0x99964d*/
  {
    *_errno() = 0x16; /*0x999654*/
    return 0xFFFFFFFFFFFFFFFFuLL; /*0x99965a*/
  }
  if ( !(v4 | (unsigned int)v17) ) /*0x99963d*/
    return (unsigned int)v18; /*0x999646*/
  if ( (File->_flag & 1) != 0 ) /*0x999663*/
  {
    cnt = File->_cnt; /*0x999669*/
    if ( !cnt ) /*0x99966e*/
    {
      v18 = 0; /*0x999670*/
      return (__int64)&v18[__PAIR64__(v4, v17)]; /*0x999673*/
    }
    v11 = 0x28 * (v19 & 0x1F); /*0x999681*/
    Filea = cnt + ptr - base; /*0x999692*/
    if ( *(char *)(unk_BAAAC0[v19 >> 5] + v11 + 4) >= 0 ) /*0x99969c*/
    {
LABEL_37:
      v17 -= Filea; /*0x99972c*/
      v4 = HIDWORD(v17); /*0x999736*/
      return (__int64)&v18[__PAIR64__(v4, v17)]; /*0x999736*/
    }
    if ( _lseeki64(v19, 0, 2) == v17 ) /*0x9996b6*/
    {
      v12 = File->_base; /*0x9996bd*/
      v13 = &v12[Filea]; /*0x9996c3*/
      while ( v12 < v13 ) /*0x9996d2*/
      {
        if ( *v12 == 0xA ) /*0x9996ca*/
          ++Filea; /*0x9996cc*/
        ++v12; /*0x9996cf*/
      }
      v14 = (File->_flag & 0x2000) == 0; /*0x9996d4*/
LABEL_35:
      if ( !v14 ) /*0x999727*/
        ++Filea; /*0x999729*/
      goto LABEL_37; /*0x999729*/
    }
    if ( (int)((unsigned __int64)_lseeki64(v19, v17, 0) >> 0x20) >= 0 ) /*0x9996f1*/
    {
      bufsiz = 0x200; /*0x999701*/
      if ( Filea > 0x200 || (v16 = File->_flag, (v16 & 8) == 0) || (v16 & 0x400) != 0 ) /*0x999718*/
        bufsiz = File->_bufsiz; /*0x99971a*/
      Filea = bufsiz; /*0x99971d*/
      v14 = (*(_BYTE *)(unk_BAAAC0[v19 >> 5] + v11 + 4) & 4) == 0; /*0x999722*/
      goto LABEL_35; /*0x999722*/
    }
    return 0xFFFFFFFFFFFFFFFFuLL; /*0x9995db*/
  }
  return (__int64)&v18[__PAIR64__(v4, v17)]; /*0x999743*/
}
