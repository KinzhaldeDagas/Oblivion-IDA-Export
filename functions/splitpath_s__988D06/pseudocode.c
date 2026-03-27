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
  const char *FullPatha; // [esp+18h] [ebp+8h]

  v9 = FullPath;
  v10 = 0;
  if ( !FullPath )
    return _splitpath_s_::_error_einval_25420();
  if ( Drive )
  {
    if ( !(_DWORD)DriveSize )
      return _splitpath_s_::_error_einval_25420();
  }
  else if ( (_DWORD)DriveSize )
  {
    return _splitpath_s_::_error_einval_25420();
  }
  if ( HIDWORD(DriveSize) )
  {
    if ( !Dir )
      return _splitpath_s_::_error_einval_25420();
  }
  else if ( Dir )
  {
    return _splitpath_s_::_error_einval_25420();
  }
  if ( (_DWORD)DirSize )
  {
    if ( !HIDWORD(DirSize) )
      return _splitpath_s_::_error_einval_25420();
  }
  else if ( HIDWORD(DirSize) )
  {
    return _splitpath_s_::_error_einval_25420();
  }
  if ( !Filename )
  {
    if ( !(_DWORD)FilenameSize )
      goto LABEL_16;
    return _splitpath_s_::_error_einval_25420();
  }
  if ( !(_DWORD)FilenameSize )
    return _splitpath_s_::_error_einval_25420();
LABEL_16:
  if ( *FullPath == 0x5C && FullPath[1] == 0x5C && FullPath[2] == 0x3F && FullPath[3] == 0x5C )
    v9 = FullPath + 4;
  v11 = 1;
  v12 = v9;
  do
  {
    if ( !*v12 )
      break;
    --v11;
    ++v12;
  }
  while ( v11 );
  if ( *v12 != 0x3A )
  {
    if ( Drive )
      *Drive = 0;
LABEL_33:
    FullPatha = 0;
    v14 = v9;
    if ( !*v9 )
      goto LABEL_47;
    do
    {
      if ( _ismbblead(*v14) )
      {
        ++v14;
      }
      else
      {
        v15 = *(unsigned __int8 *)v14;
        if ( *v14 == 0x2F || (_BYTE)v15 == 0x5C )
        {
          v10 = v14 + 1;
        }
        else if ( (_BYTE)v15 == 0x2E )
        {
          FullPatha = v14;
        }
      }
      ++v14;
    }
    while ( *v14 );
    if ( v10 )
    {
      if ( HIDWORD(DriveSize) )
      {
        if ( (unsigned int)Dir <= v10 - v9 )
          return _splitpath_s_::_error_erange_25451(FullPatha);
        strncpy_s(
          (char *)HIDWORD(DriveSize),
          __PAIR64__((unsigned int)v9, (unsigned int)Dir),
          (const char *)(v10 - v9),
          v17);
      }
      v9 = v10;
    }
    else
    {
LABEL_47:
      if ( HIDWORD(DriveSize) )
        *(_BYTE *)HIDWORD(DriveSize) = 0;
    }
    if ( FullPatha && FullPatha >= v9 )
    {
      if ( !(_DWORD)DirSize )
      {
LABEL_54:
        if ( !Filename )
          goto LABEL_69;
        v16 = (const char *)(v14 - FullPatha);
        if ( (unsigned int)FilenameSize > (unsigned int)v16 )
        {
          strncpy_s(Filename, __PAIR64__((unsigned int)FullPatha, FilenameSize), v16, v17);
LABEL_69:
          JUMPOUT(0x988F20);
        }
        return _splitpath_s_::_error_erange_25451(FullPatha);
      }
      if ( HIDWORD(DirSize) > FullPatha - v9 )
      {
        strncpy_s((char *)DirSize, __PAIR64__((unsigned int)v9, HIDWORD(DirSize)), (const char *)(FullPatha - v9), v17);
        goto LABEL_54;
      }
    }
    else
    {
      if ( !(_DWORD)DirSize )
        JUMPOUT(0x988F16);
      if ( HIDWORD(DirSize) > v14 - v9 )
        JUMPOUT(0x988F06);
    }
    return _splitpath_s_::_error_erange_25451(FullPatha);
  }
  if ( !Drive )
  {
LABEL_28:
    v9 = v12 + 1;
    goto LABEL_33;
  }
  if ( (unsigned int)DriveSize >= 3 )
  {
    strncpy_s(Drive, __PAIR64__((unsigned int)v9, DriveSize), (const char *)2, v17);
    goto LABEL_28;
  }
  return ((errno_t (*)(void))_splitpath_s_::_error_erange_25451)();
}
