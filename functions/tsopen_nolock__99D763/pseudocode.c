int __usercall _tsopen_nolock@<eax>(int *a1@<eax>, _DWORD *a2, LPCSTR lpFileName, int a4, int a5, char a6)
{
  signed int v7; // eax
  int v8; // edx
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  DWORD v12; // edi
  int v13; // eax
  HANDLE v14; // eax
  void *v15; // edi
  _BYTE *v16; // eax
  DWORD LastError; // eax
  DWORD FileType; // eax
  _BYTE *v20; // eax
  char v21; // cl
  _BYTE *v22; // eax
  int v23; // eax
  DWORD v24; // eax
  DWORD v25; // eax
  signed int v26; // edi
  unsigned __int64 v27; // rax
  int nolock; // eax
  unsigned __int64 v29; // rax
  DWORD v30; // eax
  int v31; // eax
  _BYTE *v32; // eax
  _BYTE *v33; // eax
  bool v34; // zf
  _BYTE *v35; // eax
  DWORD v36; // [esp-Ch] [ebp-40h]
  int v37; // [esp-Ch] [ebp-40h]
  int v38; // [esp-4h] [ebp-38h]
  int v39; // [esp-4h] [ebp-38h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+Ch] [ebp-28h] BYREF
  int v41; // [esp+1Ch] [ebp-18h] BYREF
  int v42; // [esp+20h] [ebp-14h] BYREF
  DWORD dwCreationDisposition; // [esp+24h] [ebp-10h]
  DWORD dwDesiredAccess; // [esp+28h] [ebp-Ch]
  DWORD dwShareMode; // [esp+2Ch] [ebp-8h] BYREF
  WCHAR_0 WideCharStr; // [esp+30h] [ebp-4h] BYREF
  char v47; // [esp+32h] [ebp-2h]
  char v48; // [esp+33h] [ebp-1h]

  v42 = 0;
  v41 = 0;
  v47 = 0;
  SecurityAttributes.nLength = 0xC;
  SecurityAttributes.lpSecurityDescriptor = 0;
  if ( (char)a4 >= 0 )
  {
    SecurityAttributes.bInheritHandle = 1;
    v48 = 0;
  }
  else
  {
    SecurityAttributes.bInheritHandle = 0;
    v48 = 0x10;
  }
  v7 = sub_9A0B2A(&v42);
  if ( v7 )
    _invoke_watson(v7, v8, v38, 0, 0x10, (int)a1);
  v9 = sub_981BF8(&v41);
  if ( v9 )
    _invoke_watson(v9, v10, v39, 0, 0x10, (int)a1);
  if ( (a4 & 0x8000) == 0 && ((a4 & 0x74000) != 0 || v42 != 0x8000) )
    v48 |= 0x80u;
  switch ( a4 & 3 )
  {
    case 0:
      dwDesiredAccess = 0x80000000;
LABEL_19:
      switch ( a5 )
      {
        case 0x10:
          dwShareMode = 0;
          break;
        case 0x20:
          dwShareMode = 1;
          break;
        case 0x30:
          dwShareMode = 2;
          break;
        case 0x40:
          dwShareMode = 3;
          break;
        case 0x80:
          dwShareMode = dwDesiredAccess == 0x80000000;
          break;
        default:
          goto LABEL_15;
      }
      v11 = a4 & 0x700;
      if ( v11 <= 0x400 )
      {
        if ( (a4 & 0x700) == 0x400 || (a4 & 0x700) == 0 )
        {
          dwCreationDisposition = 3;
          goto LABEL_42;
        }
        if ( v11 == 0x100 )
        {
          dwCreationDisposition = 4;
          goto LABEL_42;
        }
        if ( v11 != 0x200 )
        {
          if ( v11 != 0x300 )
            break;
          dwCreationDisposition = 2;
LABEL_42:
          v12 = 0x80;
          if ( (a4 & 0x100) != 0 && (char)(a6 & ~(_BYTE)dword_BA9D90) >= 0 )
            v12 = 1;
          if ( (a4 & 0x40) != 0 )
          {
            dwDesiredAccess |= 0x10000u;
            v12 |= 0x4000000u;
            if ( v41 == 2 )
              dwShareMode |= 4u;
          }
          if ( (a4 & 0x1000) != 0 )
            v12 |= 0x100u;
          if ( (a4 & 0x20) != 0 )
          {
            v12 |= 0x8000000u;
          }
          else if ( (a4 & 0x10) != 0 )
          {
            v12 |= 0x10000000u;
          }
          v13 = _alloc_osfhnd();
          *a1 = v13;
          if ( v13 == 0xFFFFFFFF )
          {
            *__doserrno() = 0;
            *a1 = 0xFFFFFFFF;
            *_errno() = 0x18;
LABEL_60:
            _errno();
            return _tsopen_nolock_::_exit_28157(a2, lpFileName, a4);
          }
          v36 = dwCreationDisposition;
          *a2 = 1;
          v14 = CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, &SecurityAttributes, v36, v12, 0);
          v15 = v14;
          if ( v14 == (HANDLE)0xFFFFFFFF )
          {
            v16 = (_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4);
            *v16 &= ~1u;
LABEL_59:
            LastError = GetLastError();
            _dosmaperr(LastError);
            goto LABEL_60;
          }
          FileType = GetFileType(v14);
          switch ( FileType )
          {
            case 0u:
              v20 = (_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4);
              *v20 &= ~1u;
              CloseHandle(v15);
              goto LABEL_59;
            case 2u:
              v48 |= 0x40u;
              break;
            case 3u:
              v48 |= 8u;
              break;
          }
          _set_osfhnd(*a1, v15);
          v21 = v48 | 1;
          *(_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4) = v48 | 1;
          v22 = (_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 0x24);
          *v22 &= 0x80u;
          HIBYTE(WideCharStr) = v21 & 0x48;
          v48 = v21;
          if ( (v21 & 0x48) == 0 )
          {
            if ( v21 >= 0 )
              goto LABEL_128;
            if ( (a4 & 2) != 0 )
            {
              dwShareMode = _lseek_nolock(*a1, 0xFFFFFFFF, 2u);
              if ( dwShareMode == 0xFFFFFFFF )
              {
                if ( *__doserrno() != 0x83 )
                {
LABEL_72:
                  _close_nolock(*a1);
                  goto LABEL_60;
                }
              }
              else
              {
                v37 = *a1;
                LOBYTE(WideCharStr) = 0;
                if ( !_read_nolock(0, v37, &WideCharStr, 1u)
                  && (_BYTE)WideCharStr == 0x1A
                  && _chsize_nolock(*a1, dwShareMode, (int)dwShareMode >> 0x1F) == 0xFFFFFFFF
                  || _lseek_nolock(*a1, 0, 0) == 0xFFFFFFFF )
                {
                  goto LABEL_72;
                }
              }
            }
          }
          if ( v48 >= 0 )
          {
LABEL_128:
            v32 = (_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 0x24);
            *v32 ^= (v47 ^ *v32) & 0x7F;
            v33 = (_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 0x24);
            v34 = HIBYTE(WideCharStr) == 0;
            *v33 = *v33 & 0x7F | (BYTE2(a4) << 7);
            if ( v34 && (a4 & 8) != 0 )
            {
              v35 = (_BYTE *)(dword_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4);
              *v35 |= 0x20u;
            }
            return _tsopen_nolock_::_exit_28157(a2, lpFileName, a4);
          }
          if ( (a4 & 0x74000) == 0 )
          {
            if ( (v42 & 0x74000) != 0 )
              a4 |= v42 & 0x74000;
            else
              a4 |= 0x4000u;
          }
          v23 = a4 & 0x74000;
          if ( (a4 & 0x74000) == 0x4000 )
          {
            v47 = 0;
            goto LABEL_93;
          }
          if ( v23 == 0x10000 || v23 == 0x14000 )
          {
            if ( (a4 & 0x301) != 0x301 )
              goto LABEL_93;
          }
          else if ( v23 != 0x20000 && v23 != 0x24000 )
          {
            if ( v23 == 0x40000 || v23 == 0x44000 )
              v47 = 1;
LABEL_93:
            if ( (a4 & 0x70000) == 0 )
              goto LABEL_128;
            dwShareMode = 0;
            if ( (v48 & 0x40) != 0 )
              goto LABEL_128;
            v24 = dwDesiredAccess & 0xC0000000;
            if ( (dwDesiredAccess & 0xC0000000) == 0x40000000 )
            {
              v25 = dwCreationDisposition;
              if ( !dwCreationDisposition )
                goto LABEL_128;
              if ( dwCreationDisposition <= 2 )
                goto LABEL_102;
              if ( dwCreationDisposition > 4 )
                goto LABEL_101;
              if ( _lseeki64_nolock(*a1, 0, 0, 2u) )
              {
                v29 = _lseeki64_nolock(*a1, 0, 0, 0);
                v30 = HIDWORD(v29) & v29;
                goto LABEL_117;
              }
            }
            else
            {
              if ( v24 == 0x80000000 )
                goto LABEL_107;
              if ( v24 != 0xC0000000 )
                goto LABEL_128;
              v25 = dwCreationDisposition;
              if ( !dwCreationDisposition )
                goto LABEL_128;
              if ( dwCreationDisposition > 2 )
              {
                if ( dwCreationDisposition > 4 )
                {
LABEL_101:
                  if ( v25 != 5 )
                    goto LABEL_128;
                  goto LABEL_102;
                }
                if ( _lseeki64_nolock(*a1, 0, 0, 2u) )
                {
                  v27 = _lseeki64_nolock(*a1, 0, 0, 0);
                  if ( (HIDWORD(v27) & (unsigned int)v27) == 0xFFFFFFFF )
                    goto LABEL_72;
LABEL_107:
                  nolock = _read_nolock(0, *a1, (LPWSTR)&dwShareMode, 3u);
                  if ( nolock == 0xFFFFFFFF )
                    goto LABEL_72;
                  if ( nolock != 2 )
                  {
                    if ( nolock != 3 )
                    {
LABEL_124:
                      v30 = _lseek_nolock(*a1, 0, 0);
LABEL_117:
                      if ( v30 == 0xFFFFFFFF )
                        goto LABEL_72;
                      goto LABEL_128;
                    }
                    if ( dwShareMode == 0xBFBBEF )
                    {
                      v47 = 1;
                      goto LABEL_128;
                    }
                  }
                  if ( (unsigned __int16)dwShareMode == 0xFFFE )
                  {
                    _close_nolock(*a1);
                    *_errno() = 0x16;
                    return _tsopen_nolock_::_exit_28157(a2, lpFileName, a4);
                  }
                  if ( (unsigned __int16)dwShareMode == 0xFEFF )
                  {
                    if ( _lseek_nolock(*a1, 2, 0) == 0xFFFFFFFF )
                      goto LABEL_72;
                    v47 = 2;
                    goto LABEL_128;
                  }
                  goto LABEL_124;
                }
              }
            }
LABEL_102:
            v26 = 0;
            if ( v47 == 1 )
            {
              dwShareMode = 0xBFBBEF;
              dwCreationDisposition = 3;
LABEL_126:
              while ( 1 )
              {
                v31 = _write(*a1, (char *)&dwShareMode + v26, dwCreationDisposition - v26);
                if ( v31 == 0xFFFFFFFF )
                  goto LABEL_72;
                v26 += v31;
                if ( (int)dwCreationDisposition <= v26 )
                  goto LABEL_128;
              }
            }
            if ( v47 == 2 )
            {
              dwShareMode = 0xFEFF;
              dwCreationDisposition = 2;
              goto LABEL_126;
            }
            goto LABEL_128;
          }
          v47 = 2;
          goto LABEL_93;
        }
LABEL_52:
        dwCreationDisposition = 5;
        goto LABEL_42;
      }
      if ( v11 != 0x500 )
      {
        if ( v11 == 0x600 )
          goto LABEL_52;
        if ( v11 != 0x700 )
          break;
      }
      dwCreationDisposition = 1;
      goto LABEL_42;
    case 1:
      dwDesiredAccess = 0x40000000;
      goto LABEL_19;
    case 2:
      dwDesiredAccess = 0xC0000000;
      goto LABEL_19;
  }
LABEL_15:
  *__doserrno() = 0;
  *a1 = 0xFFFFFFFF;
  *_errno() = 0x16;
  _invalid_parameter(0, 0x10, 0x16);
  return _tsopen_nolock_::_exit_28157(a2, lpFileName, a4);
}
