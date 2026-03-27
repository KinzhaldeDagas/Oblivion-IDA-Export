int __usercall _read_nolock@<eax>(int a1@<ebx>, int a2, LPWSTR lpWideCharStr, DWORD nNumberOfBytesToRead)
{
  DWORD v4; // edx
  int v5; // esi
  int v6; // eax
  char v7; // cl
  _BYTE *v8; // eax
  int v9; // edi
  char v10; // cl
  int v11; // ecx
  bool v12; // zf
  char v13; // cl
  int v14; // ecx
  char v15; // cl
  int v16; // ecx
  int v17; // eax
  char *v18; // eax
  _BYTE *v19; // edi
  bool v20; // cf
  char v21; // al
  _BYTE *v22; // eax
  _BYTE *v23; // edi
  int v24; // ecx
  int v25; // eax
  char v26; // dl
  int v27; // ecx
  _BYTE *v28; // edi
  DWORD LastError; // eax
  DWORD v31; // [esp+4h] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-18h] BYREF
  unsigned int v33; // [esp+Ch] [ebp-14h]
  unsigned int v34; // [esp+10h] [ebp-10h]
  LPVOID lpBuffer; // [esp+14h] [ebp-Ch]
  char v36; // [esp+1Eh] [ebp-2h]
  char Buffer; // [esp+1Fh] [ebp-1h] BYREF

  v4 = nNumberOfBytesToRead;
  v33 = 0xFFFFFFFE;
  v31 = nNumberOfBytesToRead;
  if ( a2 == 0xFFFFFFFE )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    JUMPOUT(0x999390);
  }
  if ( a2 < 0 || a2 >= uNumber )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(a1, 0, a2);
    JUMPOUT(0x99938F);
  }
  v5 = 0x28 * (a2 & 0x1F);
  v6 = v5 + dword_BAAAC0[a2 >> 5];
  v7 = *(_BYTE *)(v6 + 4);
  if ( (v7 & 1) == 0 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
LABEL_36:
    _invalid_parameter(4 * (a2 >> 5) + 0xBAAAC0, 0, v5);
    goto LABEL_99;
  }
  v34 = 0;
  if ( !nNumberOfBytesToRead || (v7 & 2) != 0 )
    JUMPOUT(0x99938C);
  if ( !lpWideCharStr )
    goto LABEL_35;
  v36 = (char)(2 * *(_BYTE *)(v6 + 0x24)) >> 1;
  if ( v36 == 1 )
  {
    if ( (nNumberOfBytesToRead & 1) == 0 )
    {
      nNumberOfBytesToRead = 4;
      if ( v4 >> 1 >= 4 )
        nNumberOfBytesToRead = v4 >> 1;
      lpBuffer = (LPVOID)unknown_libname_72();
      if ( !lpBuffer )
      {
        *_errno() = 0xC;
        *__doserrno() = 8;
LABEL_99:
        JUMPOUT(0x99938E);
      }
      goto LABEL_16;
    }
    goto LABEL_35;
  }
  if ( v36 == 2 )
  {
    if ( (nNumberOfBytesToRead & 1) == 0 )
    {
      nNumberOfBytesToRead &= ~1u;
      goto LABEL_15;
    }
LABEL_35:
    *__doserrno() = 0;
    *_errno() = 0x16;
    goto LABEL_36;
  }
LABEL_15:
  lpBuffer = lpWideCharStr;
LABEL_16:
  v8 = lpBuffer;
  v9 = v5 + dword_BAAAC0[a2 >> 5];
  if ( (*(_BYTE *)(v9 + 4) & 0x48) != 0 )
  {
    v10 = *(_BYTE *)(v9 + 5);
    if ( v10 != 0xA )
    {
      if ( nNumberOfBytesToRead )
      {
        *(_BYTE *)lpBuffer = v10;
        v11 = dword_BAAAC0[a2 >> 5];
        ++v8;
        --nNumberOfBytesToRead;
        v12 = v36 == 0;
        v34 = 1;
        *(_BYTE *)(v5 + v11 + 5) = 0xA;
        if ( !v12 )
        {
          v13 = *(_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 0x25);
          if ( v13 != 0xA )
          {
            if ( nNumberOfBytesToRead )
            {
              *v8 = v13;
              v14 = dword_BAAAC0[a2 >> 5];
              ++v8;
              --nNumberOfBytesToRead;
              v12 = v36 == 1;
              v34 = 2;
              *(_BYTE *)(v5 + v14 + 0x25) = 0xA;
              if ( v12 )
              {
                v15 = *(_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 0x26);
                if ( v15 != 0xA )
                {
                  if ( nNumberOfBytesToRead )
                  {
                    *v8 = v15;
                    v16 = dword_BAAAC0[a2 >> 5];
                    ++v8;
                    --nNumberOfBytesToRead;
                    v34 = 3;
                    *(_BYTE *)(v5 + v16 + 0x26) = 0xA;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( !ReadFile(*(HANDLE *)(v5 + dword_BAAAC0[a2 >> 5]), v8, nNumberOfBytesToRead, &NumberOfBytesRead, 0)
    || (int)NumberOfBytesRead < 0
    || NumberOfBytesRead > nNumberOfBytesToRead )
  {
    JUMPOUT(0x999356);
  }
  v17 = dword_BAAAC0[a2 >> 5];
  v34 += NumberOfBytesRead;
  v18 = (char *)(v5 + v17 + 4);
  if ( *v18 < 0 )
  {
    if ( v36 == 2 )
      JUMPOUT(0x999220);
    if ( NumberOfBytesRead && *(_BYTE *)lpBuffer == 0xA )
      *v18 |= 4u;
    else
      *v18 &= ~4u;
    v19 = lpBuffer;
    v20 = lpBuffer < (char *)lpBuffer + v34;
    nNumberOfBytesToRead = (DWORD)lpBuffer;
    v34 += (unsigned int)lpBuffer;
    if ( v20 )
    {
      do
      {
        v21 = *(_BYTE *)nNumberOfBytesToRead;
        if ( *(_BYTE *)nNumberOfBytesToRead == 0x1A )
        {
          v22 = (_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 4);
          if ( (*v22 & 0x40) != 0 )
            *v19++ = *(_BYTE *)nNumberOfBytesToRead;
          else
            *v22 |= 2u;
          break;
        }
        if ( v21 == 0xD )
        {
          if ( nNumberOfBytesToRead < v34 - 1 )
          {
            if ( *(_BYTE *)(nNumberOfBytesToRead + 1) == 0xA )
            {
              nNumberOfBytesToRead += 2;
              goto LABEL_49;
            }
            ++nNumberOfBytesToRead;
LABEL_60:
            *v19 = 0xD;
            goto LABEL_61;
          }
          ++nNumberOfBytesToRead;
          if ( !ReadFile(*(HANDLE *)(v5 + dword_BAAAC0[a2 >> 5]), &Buffer, 1u, &NumberOfBytesRead, 0) && GetLastError()
            || !NumberOfBytesRead )
          {
            goto LABEL_60;
          }
          if ( (*(_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 4) & 0x48) != 0 )
          {
            if ( Buffer != 0xA )
            {
              *v19 = 0xD;
              *(_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 5) = Buffer;
              goto LABEL_61;
            }
LABEL_49:
            *v19 = 0xA;
LABEL_61:
            ++v19;
            continue;
          }
          if ( v19 == lpBuffer && Buffer == 0xA )
            goto LABEL_49;
          _lseeki64_nolock(a2, 0xFFFFFFFF, 0xFFFFFFFF, 1u);
          if ( Buffer != 0xA )
            goto LABEL_60;
        }
        else
        {
          *v19++ = v21;
          ++nNumberOfBytesToRead;
        }
      }
      while ( nNumberOfBytesToRead < v34 );
    }
    v34 = v19 - (_BYTE *)lpBuffer;
    if ( v36 == 1 && v19 != lpBuffer )
    {
      v23 = v19 + 0xFFFFFFFF;
      LOBYTE(v24) = *v23;
      if ( (char)*v23 < 0 )
      {
        v25 = 1;
        v24 = (unsigned __int8)v24;
        while ( !byte_B31D38[v24] && v25 <= 4 && v23 >= lpBuffer )
        {
          v24 = (unsigned __int8)*--v23;
          ++v25;
        }
        v26 = *v23;
        if ( !byte_B31D38[(unsigned __int8)*v23] )
        {
          *_errno() = 0x2A;
LABEL_89:
          v33 = 0xFFFFFFFF;
          return _read_nolock_::_error_return_25326(a2, lpWideCharStr, nNumberOfBytesToRead);
        }
        if ( byte_B31D38[(unsigned __int8)*v23] + 1 == v25 )
        {
          v23 += v25;
        }
        else
        {
          v27 = v5 + dword_BAAAC0[a2 >> 5];
          if ( (*(_BYTE *)(v27 + 4) & 0x48) != 0 )
          {
            v28 = v23 + 1;
            *(_BYTE *)(v27 + 5) = v26;
            if ( v25 >= 2 )
              *(_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 0x25) = *v28++;
            if ( v25 == 3 )
              *(_BYTE *)(v5 + dword_BAAAC0[a2 >> 5] + 0x26) = *v28++;
            v23 = &v28[-v25];
          }
          else
          {
            _lseeki64_nolock(a2, -v25, -v25 >> 0x1F, 1u);
          }
        }
      }
      else
      {
        ++v23;
      }
      v34 = MultiByteToWideChar(0xFDE9u, 0, (LPCSTR)lpBuffer, v23 - (_BYTE *)lpBuffer, lpWideCharStr, v31 >> 1);
      if ( v34 )
        JUMPOUT(0x999219);
      LastError = GetLastError();
      _dosmaperr(LastError);
      goto LABEL_89;
    }
  }
  return _read_nolock_::_error_return_25326(a2, lpWideCharStr, nNumberOfBytesToRead);
}
