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
  char *v19; // edi
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
  int savedregs; // [esp+20h] [ebp+0h] BYREF
  char *nNumberOfBytesToReada; // [esp+30h] [ebp+10h]

  v4 = nNumberOfBytesToRead; /*0x998df7*/
  v33 = 0xFFFFFFFE; /*0x998e03*/
  v31 = nNumberOfBytesToRead; /*0x998e06*/
  if ( a2 == 0xFFFFFFFE ) /*0x998e09*/
  {
    *__doserrno() = 0; /*0x998e10*/
    *_errno() = 9; /*0x998e18*/
    JUMPOUT(0x999390); /*0x999390*/
  }
  if ( a2 < 0 || a2 >= MEMORY[0xBAAAA0] ) /*0x998e33*/
  {
    *__doserrno() = 0; /*0x998e3a*/
    *_errno() = 9; /*0x998e46*/
    _invalid_parameter(a1, 0, a2); /*0x998e4c*/
    JUMPOUT(0x99938F); /*0x99938f*/
  }
  v5 = 0x28 * (a2 & 0x1F); /*0x998e61*/
  v6 = v5 + unk_BAAAC0[a2 >> 5]; /*0x998e71*/
  v7 = *(_BYTE *)(v6 + 4); /*0x998e73*/
  if ( (v7 & 1) == 0 ) /*0x998e79*/
  {
    *__doserrno() = 0; /*0x998e80*/
    *_errno() = 9; /*0x998e87*/
LABEL_36:
    _invalid_parameter(4 * (a2 >> 5) + 0xBAAAC0, 0, v5); /*0x998fd9*/
    goto LABEL_99; /*0x998fe6*/
  }
  v34 = 0; /*0x998e94*/
  if ( !nNumberOfBytesToRead || (v7 & 2) != 0 ) /*0x998ea0*/
    JUMPOUT(0x99938C); /*0x99938c*/
  if ( !lpWideCharStr ) /*0x998eab*/
    goto LABEL_35; /*0x998eab*/
  v36 = (char)(2 * *(_BYTE *)(v6 + 0x24)) >> 1; /*0x998eb8*/
  if ( v36 == 1 ) /*0x998ebf*/
  {
    if ( (nNumberOfBytesToRead & 1) == 0 ) /*0x998fc5*/
    {
      nNumberOfBytesToRead = 4; /*0x998ff1*/
      if ( v4 >> 1 >= 4 ) /*0x998ff4*/
        nNumberOfBytesToRead = v4 >> 1; /*0x998ff6*/
      lpBuffer = unknown_libname_72(nNumberOfBytesToRead); /*0x999004*/
      if ( !lpBuffer ) /*0x999007*/
      {
        *_errno() = 0xC; /*0x999012*/
        *__doserrno() = 8; /*0x99901d*/
LABEL_99:
        JUMPOUT(0x99938E); /*0x99938e*/
      }
      goto LABEL_16; /*0x999007*/
    }
    goto LABEL_35; /*0x998fc5*/
  }
  if ( v36 == 2 ) /*0x998ec6*/
  {
    if ( (nNumberOfBytesToRead & 1) == 0 ) /*0x998ece*/
    {
      nNumberOfBytesToRead &= ~1u; /*0x998ed7*/
      goto LABEL_15; /*0x998ed7*/
    }
LABEL_35:
    *__doserrno() = 0; /*0x998fc7*/
    *_errno() = 0x16; /*0x998fd3*/
    goto LABEL_36; /*0x998fd3*/
  }
LABEL_15:
  lpBuffer = lpWideCharStr; /*0x998eda*/
LABEL_16:
  v8 = lpBuffer; /*0x998edd*/
  v9 = v5 + unk_BAAAC0[a2 >> 5]; /*0x998ee2*/
  if ( (*(_BYTE *)(v9 + 4) & 0x48) != 0 ) /*0x998ee9*/
  {
    v10 = *(_BYTE *)(v9 + 5); /*0x998eeb*/
    if ( v10 != 0xA ) /*0x998ef1*/
    {
      if ( nNumberOfBytesToRead ) /*0x998ef8*/
      {
        *(_BYTE *)lpBuffer = v10; /*0x998efa*/
        v11 = unk_BAAAC0[a2 >> 5]; /*0x998efc*/
        ++v8; /*0x998efe*/
        --nNumberOfBytesToRead; /*0x998eff*/
        v12 = v36 == 0; /*0x998f02*/
        v34 = 1; /*0x998f05*/
        *(_BYTE *)(v5 + v11 + 5) = 0xA; /*0x998f0c*/
        if ( !v12 ) /*0x998f11*/
        {
          v13 = *(_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 0x25); /*0x998f15*/
          if ( v13 != 0xA ) /*0x998f1c*/
          {
            if ( nNumberOfBytesToRead ) /*0x998f21*/
            {
              *v8 = v13; /*0x998f23*/
              v14 = unk_BAAAC0[a2 >> 5]; /*0x998f25*/
              ++v8; /*0x998f27*/
              --nNumberOfBytesToRead; /*0x998f28*/
              v12 = v36 == 1; /*0x998f2b*/
              v34 = 2; /*0x998f2f*/
              *(_BYTE *)(v5 + v14 + 0x25) = 0xA; /*0x998f36*/
              if ( v12 ) /*0x998f3b*/
              {
                v15 = *(_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 0x26); /*0x998f3f*/
                if ( v15 != 0xA ) /*0x998f46*/
                {
                  if ( nNumberOfBytesToRead ) /*0x998f4b*/
                  {
                    *v8 = v15; /*0x998f4d*/
                    v16 = unk_BAAAC0[a2 >> 5]; /*0x998f4f*/
                    ++v8; /*0x998f51*/
                    --nNumberOfBytesToRead; /*0x998f52*/
                    v34 = 3; /*0x998f55*/
                    *(_BYTE *)(v5 + v16 + 0x26) = 0xA; /*0x998f5c*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( !ReadFile(*(HANDLE *)(v5 + unk_BAAAC0[a2 >> 5]), v8, nNumberOfBytesToRead, &NumberOfBytesRead, 0) /*0x998f8c*/
    || (int)NumberOfBytesRead < 0
    || NumberOfBytesRead > nNumberOfBytesToRead )
  {
    JUMPOUT(0x999356); /*0x999356*/
  }
  v17 = unk_BAAAC0[a2 >> 5]; /*0x998f92*/
  v34 += NumberOfBytesRead; /*0x998f94*/
  v18 = (char *)(v5 + v17 + 4); /*0x998f97*/
  if ( *v18 < 0 ) /*0x998f9e*/
  {
    if ( v36 == 2 ) /*0x998fa8*/
      JUMPOUT(0x999220); /*0x999220*/
    if ( NumberOfBytesRead && *(_BYTE *)lpBuffer == 0xA ) /*0x998fb8*/
      *v18 |= 4u; /*0x998fba*/
    else
      *v18 &= ~4u; /*0x99902b*/
    v19 = (char *)lpBuffer; /*0x99902e*/
    v20 = lpBuffer < (char *)lpBuffer + v34; /*0x999036*/
    nNumberOfBytesToReada = (char *)lpBuffer; /*0x999038*/
    v34 += (unsigned int)lpBuffer; /*0x99903b*/
    if ( v20 ) /*0x99903e*/
    {
      do /*0x999047*/
      {
        v21 = *nNumberOfBytesToReada; /*0x999047*/
        if ( *nNumberOfBytesToReada == 0x1A ) /*0x99904b*/
        {
          v22 = (_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 4); /*0x999101*/
          if ( (*v22 & 0x40) != 0 ) /*0x999108*/
            *v19++ = *nNumberOfBytesToReada; /*0x999111*/
          else
            *v22 |= 2u; /*0x99910a*/
          break; /*0x99910d*/
        }
        if ( v21 == 0xD ) /*0x999053*/
        {
          if ( (unsigned int)nNumberOfBytesToReada < v34 - 1 ) /*0x999067*/
          {
            if ( nNumberOfBytesToReada[1] == 0xA ) /*0x99906f*/
            {
              nNumberOfBytesToReada += 2; /*0x999073*/
              goto LABEL_49; /*0x999073*/
            }
            ++nNumberOfBytesToReada; /*0x99907b*/
LABEL_60:
            *v19 = 0xD; /*0x9990ed*/
            goto LABEL_61; /*0x9990ed*/
          }
          ++nNumberOfBytesToReada; /*0x999080*/
          if ( !ReadFile(*(HANDLE *)(v5 + unk_BAAAC0[a2 >> 5]), &Buffer, 1u, &NumberOfBytesRead, 0) && GetLastError() /*0x9990ac*/
            || !NumberOfBytesRead )
          {
            goto LABEL_60; /*0x9990ac*/
          }
          if ( (*(_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 4) & 0x48) != 0 ) /*0x9990b5*/
          {
            if ( Buffer != 0xA ) /*0x9990bb*/
            {
              *v19 = 0xD; /*0x9990bd*/
              *(_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 5) = Buffer; /*0x9990c5*/
              goto LABEL_61; /*0x9990c9*/
            }
LABEL_49:
            *v19 = 0xA; /*0x999076*/
LABEL_61:
            ++v19; /*0x9990f0*/
            continue; /*0x9990f0*/
          }
          if ( v19 == lpBuffer && Buffer == 0xA ) /*0x9990d4*/
            goto LABEL_49; /*0x9990d4*/
          _lseeki64_nolock(a2, 0xFFFFFFFF, 0xFFFFFFFF, 1u); /*0x9990df*/
          if ( Buffer != 0xA ) /*0x9990eb*/
            goto LABEL_60; /*0x9990eb*/
        }
        else
        {
          *v19++ = v21; /*0x999055*/
          ++nNumberOfBytesToReada; /*0x999059*/
        }
      }
      while ( (unsigned int)nNumberOfBytesToReada < v34 ); /*0x999047*/
    }
    v34 = v19 - (_BYTE *)lpBuffer; /*0x99911d*/
    if ( v36 == 1 && v19 != lpBuffer ) /*0x999116*/
    {
      v23 = v19 + 0xFFFFFFFF; /*0x99912e*/
      LOBYTE(v24) = *v23; /*0x99912f*/
      if ( (char)*v23 < 0 ) /*0x999133*/
      {
        v25 = 1; /*0x99913d*/
        v24 = (unsigned __int8)v24; /*0x99913e*/
        while ( !byte_B31D38[v24] && v25 <= 4 && v23 >= lpBuffer ) /*0x99914b*/
        {
          v24 = (unsigned __int8)*--v23; /*0x99914e*/
          ++v25; /*0x999151*/
        }
        v26 = *v23; /*0x99915b*/
        if ( !byte_B31D38[(unsigned __int8)*v23] ) /*0x999160*/
        {
          *_errno() = 0x2A; /*0x999170*/
LABEL_89:
          v33 = 0xFFFFFFFF; /*0x9991f2*/
          return _read_nolock_::_error_return_25326((int)&savedregs); /*0x9991f3*/
        }
        if ( byte_B31D38[(unsigned __int8)*v23] + 1 == v25 ) /*0x99917b*/
        {
          v23 += v25; /*0x99917d*/
        }
        else
        {
          v27 = v5 + unk_BAAAC0[a2 >> 5]; /*0x999183*/
          if ( (*(_BYTE *)(v27 + 4) & 0x48) != 0 ) /*0x999189*/
          {
            v28 = v23 + 1; /*0x99918b*/
            *(_BYTE *)(v27 + 5) = v26; /*0x99918f*/
            if ( v25 >= 2 ) /*0x999192*/
              *(_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 0x25) = *v28++; /*0x999198*/
            if ( v25 == 3 ) /*0x9991a0*/
              *(_BYTE *)(v5 + unk_BAAAC0[a2 >> 5] + 0x26) = *v28++; /*0x9991a6*/
            v23 = &v28[-v25]; /*0x9991ab*/
          }
          else
          {
            _lseeki64_nolock(a2, -v25, -v25 >> 0x1F, 1u); /*0x9991b9*/
          }
        }
      }
      else
      {
        ++v23; /*0x999135*/
      }
      v34 = MultiByteToWideChar(0xFDE9u, 0, (LPCSTR)lpBuffer, v23 - (_BYTE *)lpBuffer, lpWideCharStr, v31 >> 1); /*0x9991e0*/
      if ( v34 ) /*0x9991e3*/
        JUMPOUT(0x999219); /*0x999219*/
      LastError = GetLastError(); /*0x9991e5*/
      _dosmaperr(LastError); /*0x9991ec*/
      goto LABEL_89; /*0x9991ec*/
    }
  }
  return _read_nolock_::_error_return_25326((int)&savedregs);
}
