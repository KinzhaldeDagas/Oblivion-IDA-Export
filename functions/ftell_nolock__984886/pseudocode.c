int __cdecl _ftell_nolock(FILE *File)
{
  int v3; // eax
  int v4; // eax
  int flag; // edx
  char *ptr; // eax
  char *base; // ecx
  char *v8; // edx
  int cnt; // edx
  int v10; // esi
  _DWORD *v11; // ebx
  char *v12; // eax
  char *v13; // ecx
  bool v14; // zf
  int bufsiz; // eax
  int v16; // ecx
  char *v17; // [esp+8h] [ebp-Ch]
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]
  int Filea; // [esp+1Ch] [ebp+8h]

  if ( !File )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0xFFFFFFFF;
  }
  v3 = _fileno(File);
  v19 = v3;
  if ( File->_cnt < 0 )
    File->_cnt = 0;
  v4 = _lseek(v3, 0, 1);
  v18 = v4;
  if ( v4 < 0 )
    return 0xFFFFFFFF;
  flag = File->_flag;
  if ( (flag & 0x108) == 0 )
    return v4 - File->_cnt;
  ptr = File->_ptr;
  base = File->_base;
  v17 = (char *)(File->_ptr - base);
  if ( (flag & 3) != 0 )
  {
    if ( *(char *)(*(_DWORD *)(4 * (v19 >> 5) + 0xBAAAC0) + 0x28 * (v19 & 0x1F) + 4) < 0 )
    {
      v8 = File->_base;
      if ( base < ptr )
      {
        do
        {
          if ( *v8 == 0xA )
            ++v17;
          ++v8;
        }
        while ( v8 < ptr );
      }
    }
  }
  else if ( (char)flag >= 0 )
  {
    *_errno() = 0x16;
    return 0xFFFFFFFF;
  }
  if ( !v18 )
    return (int)v17;
  if ( (File->_flag & 1) == 0 )
    return (int)&v17[v18];
  cnt = File->_cnt;
  if ( cnt )
  {
    v10 = 0x28 * (v19 & 0x1F);
    v11 = (_DWORD *)(4 * (v19 >> 5) + 0xBAAAC0);
    Filea = cnt + ptr - base;
    if ( *(char *)(*v11 + v10 + 4) >= 0 )
    {
LABEL_39:
      v18 -= Filea;
      return (int)&v17[v18];
    }
    if ( _lseek(v19, 0, 2) == v18 )
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
LABEL_37:
      if ( !v14 )
        ++Filea;
      goto LABEL_39;
    }
    if ( _lseek(v19, v18, 0) >= 0 )
    {
      bufsiz = 0x200;
      if ( (unsigned int)Filea > 0x200 || (v16 = File->_flag, (v16 & 8) == 0) || (v16 & 0x400) != 0 )
        bufsiz = File->_bufsiz;
      Filea = bufsiz;
      v14 = (*(_BYTE *)(*v11 + v10 + 4) & 4) == 0;
      goto LABEL_37;
    }
    return 0xFFFFFFFF;
  }
  v17 = 0;
  return (int)&v17[v18];
}
