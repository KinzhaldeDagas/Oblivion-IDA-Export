errno_t __cdecl _splitpath_s(
        const char *FullPath,
        char *Drive,
        size_t DriveSize,
        char *Dir,
        size_t DirSize,
        char *Filename,
        size_t FilenameSize,
        char *Ext,
        size_t ExtSize)
{
  const char *v9; // ebx
  const char *v10; // edi
  int v11; // eax
  const char *v12; // esi
  const char *v14; // esi
  int v15; // eax
  const char *v16; // esi
  rsize_t v17; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF
  const char *FullPatha; // [esp+18h] [ebp+8h]

  v9 = FullPath; /*0x988d0b*/
  v10 = 0; /*0x988d10*/
  if ( !FullPath ) /*0x988d17*/
    return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d17*/
  if ( Drive ) /*0x988d22*/
  {
    if ( !(_DWORD)DriveSize ) /*0x988d32*/
      return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d32*/
  }
  else if ( (_DWORD)DriveSize ) /*0x988d27*/
  {
    return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d27*/
  }
  if ( HIDWORD(DriveSize) ) /*0x988d3b*/
  {
    if ( !Dir ) /*0x988d47*/
      return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d47*/
  }
  else if ( Dir ) /*0x988d40*/
  {
    return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d40*/
  }
  if ( (_DWORD)DirSize ) /*0x988d4c*/
  {
    if ( !HIDWORD(DirSize) ) /*0x988d58*/
      return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d58*/
  }
  else if ( HIDWORD(DirSize) ) /*0x988d51*/
  {
    return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988d51*/
  }
  if ( !Filename ) /*0x988d5d*/
  {
    if ( !(_DWORD)FilenameSize ) /*0x988d62*/
      goto LABEL_16; /*0x988d62*/
    return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988db9*/
  }
  if ( !(_DWORD)FilenameSize ) /*0x988db8*/
    return _splitpath_s_::_error_einval_25420((int)&savedregs, (int)FullPath); /*0x988db8*/
LABEL_16:
  if ( *FullPath == 0x5C && FullPath[1] == 0x5C && FullPath[2] == 0x3F && FullPath[3] == 0x5C ) /*0x988d79*/
    v9 = FullPath + 4; /*0x988d7b*/
  v11 = 1; /*0x988d80*/
  v12 = v9; /*0x988d81*/
  do /*0x988d8c*/
  {
    if ( !*v12 ) /*0x988d83*/
      break; /*0x988d86*/
    --v11; /*0x988d88*/
    ++v12; /*0x988d89*/
  }
  while ( v11 ); /*0x988d8c*/
  if ( *v12 == 0x3A ) /*0x988d91*/
  {
    if ( Drive ) /*0x988d95*/
    {
      if ( (unsigned int)DriveSize < 3 ) /*0x988d9b*/
        return _splitpath_s_::_error_erange_25451((int)v9, &savedregs, 0); /*0x988d9b*/
      strncpy_s(Drive, __PAIR64__((unsigned int)v9, DriveSize), (const char *)2, v17); /*0x988da8*/
    }
    v9 = v12 + 1; /*0x988db0*/
  }
  else if ( Drive ) /*0x988dc8*/
  {
    *Drive = 0; /*0x988dca*/
  }
  FullPatha = 0; /*0x988dcd*/
  v14 = v9; /*0x988dd3*/
  if ( !*v9 ) /*0x988dd0*/
    goto LABEL_47; /*0x988dd0*/
  do /*0x988dff*/
  {
    if ( _ismbblead(*v14) ) /*0x988ddb*/
    {
      ++v14; /*0x988de5*/
    }
    else
    {
      v15 = *(unsigned __int8 *)v14; /*0x988de8*/
      if ( *v14 == 0x2F || (_BYTE)v15 == 0x5C ) /*0x988df0*/
      {
        v10 = v14 + 1; /*0x988dfb*/
      }
      else if ( (_BYTE)v15 == 0x2E ) /*0x988df4*/
      {
        FullPatha = v14; /*0x988df6*/
      }
    }
    ++v14; /*0x988dfe*/
  }
  while ( *v14 ); /*0x988dff*/
  if ( v10 ) /*0x988e06*/
  {
    if ( HIDWORD(DriveSize) ) /*0x988e0c*/
    {
      if ( (unsigned int)Dir <= v10 - v9 ) /*0x988e15*/
        return _splitpath_s_::_error_erange_25451((int)v9, &savedregs, 0); /*0x988e15*/
      strncpy_s( /*0x988e23*/
        (char *)HIDWORD(DriveSize),
        __PAIR64__((unsigned int)v9, (unsigned int)Dir),
        (const char *)(v10 - v9),
        v17);
    }
    v9 = v10; /*0x988e2b*/
  }
  else
  {
LABEL_47:
    if ( HIDWORD(DriveSize) ) /*0x988e34*/
      *(_BYTE *)HIDWORD(DriveSize) = 0; /*0x988e36*/
  }
  if ( FullPatha && FullPatha >= v9 ) /*0x988e42*/
  {
    if ( !(_DWORD)DirSize ) /*0x988e48*/
    {
LABEL_54:
      if ( !Filename ) /*0x988e65*/
        goto LABEL_69; /*0x988e65*/
      v16 = (const char *)(v14 - FullPatha); /*0x988e6b*/
      if ( (unsigned int)FilenameSize > (unsigned int)v16 ) /*0x988e71*/
      {
        strncpy_s(Filename, __PAIR64__((unsigned int)FullPatha, FilenameSize), v16, v17); /*0x988e7d*/
LABEL_69:
        JUMPOUT(0x988F20); /*0x988f20*/
      }
      return _splitpath_s_::_error_erange_25451((int)v9, &savedregs, 0); /*0x988e71*/
    }
    if ( HIDWORD(DirSize) > FullPatha - v9 ) /*0x988e4f*/
    {
      strncpy_s((char *)DirSize, __PAIR64__((unsigned int)v9, HIDWORD(DirSize)), (const char *)(FullPatha - v9), v17); /*0x988e59*/
      goto LABEL_54; /*0x988e59*/
    }
  }
  else
  {
    if ( !(_DWORD)DirSize ) /*0x988e8e*/
      JUMPOUT(0x988F16); /*0x988f16*/
    if ( HIDWORD(DirSize) > v14 - v9 ) /*0x988e99*/
      JUMPOUT(0x988F06); /*0x988f06*/
  }
  return _splitpath_s_::_error_erange_25451((int)v9, &savedregs, 0);
}
