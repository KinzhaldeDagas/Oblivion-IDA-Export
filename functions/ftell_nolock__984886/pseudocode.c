int __cdecl _ftell_nolock(FILE *File)
{
  int v1; // esi
  int v4; // eax
  int v5; // eax
  int flag; // edx
  char *ptr; // eax
  char *base; // ecx
  char *v9; // edx
  int cnt; // edx
  int v11; // esi
  _DWORD *v12; // ebx
  char *v13; // eax
  char *v14; // ecx
  bool v15; // zf
  int bufsiz; // eax
  int v17; // ecx
  char *v18; // [esp+8h] [ebp-Ch]
  int v19; // [esp+Ch] [ebp-8h]
  int v20; // [esp+10h] [ebp-4h]
  int Filea; // [esp+1Ch] [ebp+8h]

  if ( !File ) /*0x984895*/
  {
    *_errno() = 0x16; /*0x9848a1*/
    _invalid_parameter(0, 0, v1); /*0x9848a7*/
    return 0xFFFFFFFF; /*0x9848b2*/
  }
  v4 = _fileno(File); /*0x9848b8*/
  v20 = v4; /*0x9848c1*/
  if ( File->_cnt < 0 ) /*0x9848c4*/
    File->_cnt = 0; /*0x9848c6*/
  v5 = _lseek(v4, 0, 1); /*0x9848cd*/
  v19 = v5; /*0x9848d7*/
  if ( v5 < 0 ) /*0x9848da*/
    return 0xFFFFFFFF; /*0x9848da*/
  flag = File->_flag; /*0x9848dc*/
  if ( (flag & 0x108) == 0 ) /*0x9848e4*/
    return v5 - File->_cnt; /*0x9848e9*/
  ptr = File->_ptr; /*0x9848ee*/
  base = File->_base; /*0x9848f0*/
  v18 = (char *)(File->_ptr - base); /*0x9848fb*/
  if ( (flag & 3) != 0 ) /*0x9848fe*/
  {
    if ( *(char *)(*(_DWORD *)(4 * (v20 >> 5) + 0xBAAAC0) + 0x28 * (v20 & 0x1F) + 4) < 0 ) /*0x98491b*/
    {
      v9 = File->_base; /*0x98491d*/
      if ( base < ptr ) /*0x984921*/
      {
        do /*0x984932*/
        {
          if ( *v9 == 0xA ) /*0x984928*/
            ++v18; /*0x98492a*/
          ++v9; /*0x98492f*/
        }
        while ( v9 < ptr ); /*0x984932*/
      }
    }
  }
  else if ( (char)flag >= 0 ) /*0x984943*/
  {
    *_errno() = 0x16; /*0x98494a*/
    return 0xFFFFFFFF; /*0x984950*/
  }
  if ( !v19 ) /*0x984937*/
    return (int)v18; /*0x98493c*/
  if ( (File->_flag & 1) == 0 ) /*0x984959*/
    return (int)&v18[v19]; /*0x984959*/
  cnt = File->_cnt; /*0x98495f*/
  if ( cnt ) /*0x984964*/
  {
    v11 = 0x28 * (v20 & 0x1F); /*0x984977*/
    v12 = (_DWORD *)(4 * (v20 >> 5) + 0xBAAAC0); /*0x984981*/
    Filea = cnt + ptr - base; /*0x984988*/
    if ( *(char *)(*v12 + v11 + 4) >= 0 ) /*0x984992*/
    {
LABEL_39:
      v19 -= Filea; /*0x984a0b*/
      return (int)&v18[v19]; /*0x984a0e*/
    }
    if ( _lseek(v20, 0, 2) == v19 ) /*0x9849a6*/
    {
      v13 = File->_base; /*0x9849a8*/
      v14 = &v13[Filea]; /*0x9849ae*/
      while ( v13 < v14 ) /*0x9849bd*/
      {
        if ( *v13 == 0xA ) /*0x9849b5*/
          ++Filea; /*0x9849b7*/
        ++v13; /*0x9849ba*/
      }
      v15 = (File->_flag & 0x2000) == 0; /*0x9849bf*/
LABEL_37:
      if ( !v15 ) /*0x984a06*/
        ++Filea; /*0x984a08*/
      goto LABEL_39; /*0x984a08*/
    }
    if ( _lseek(v20, v19, 0) >= 0 ) /*0x9849d9*/
    {
      bufsiz = 0x200; /*0x9849e0*/
      if ( (unsigned int)Filea > 0x200 || (v17 = File->_flag, (v17 & 8) == 0) || (v17 & 0x400) != 0 ) /*0x9849f7*/
        bufsiz = File->_bufsiz; /*0x9849f9*/
      Filea = bufsiz; /*0x9849fc*/
      v15 = (*(_BYTE *)(*v12 + v11 + 4) & 4) == 0; /*0x984a01*/
      goto LABEL_37; /*0x984a01*/
    }
    return 0xFFFFFFFF; /*0x9849de*/
  }
  v18 = 0; /*0x984966*/
  return (int)&v18[v19]; /*0x984a1a*/
}
