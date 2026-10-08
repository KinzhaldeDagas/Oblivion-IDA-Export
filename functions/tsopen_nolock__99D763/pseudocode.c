void __usercall _tsopen_nolock(int *a1@<eax>, _DWORD *a2, LPCSTR lpFileName, int a4, int a5, char a6)
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
  _BYTE *v19; // eax
  char v20; // cl
  _BYTE *v21; // eax
  int v22; // eax
  DWORD v23; // eax
  DWORD v24; // eax
  signed int v25; // edi
  __int64 v26; // rax
  int nolock; // eax
  __int64 v28; // rax
  DWORD v29; // eax
  int v30; // eax
  _BYTE *v31; // eax
  _BYTE *v32; // eax
  bool v33; // zf
  _BYTE *v34; // eax
  DWORD v35; // [esp-Ch] [ebp-40h]
  int v36; // [esp-Ch] [ebp-40h]
  int v37; // [esp-4h] [ebp-38h]
  int v38; // [esp-4h] [ebp-38h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+Ch] [ebp-28h] BYREF
  int v40; // [esp+1Ch] [ebp-18h] BYREF
  int v41; // [esp+20h] [ebp-14h] BYREF
  DWORD dwCreationDisposition; // [esp+24h] [ebp-10h]
  DWORD dwDesiredAccess; // [esp+28h] [ebp-Ch]
  DWORD dwShareMode; // [esp+2Ch] [ebp-8h] BYREF
  WCHAR_0 WideCharStr; // [esp+30h] [ebp-4h] BYREF
  char v46; // [esp+32h] [ebp-2h]
  char v47; // [esp+33h] [ebp-1h]

  v41 = 0; /*0x99d776*/
  v40 = 0; /*0x99d779*/
  v46 = 0; /*0x99d77c*/
  SecurityAttributes.nLength = 0xC; /*0x99d77f*/
  SecurityAttributes.lpSecurityDescriptor = 0; /*0x99d786*/
  if ( (char)a4 >= 0 ) /*0x99d78a*/
  {
    SecurityAttributes.bInheritHandle = 1; /*0x99d795*/
    v47 = 0; /*0x99d79c*/
  }
  else
  {
    SecurityAttributes.bInheritHandle = 0; /*0x99d78c*/
    v47 = 0x10; /*0x99d78f*/
  }
  v7 = sub_9A0B2A(0, 0x10, &v41); /*0x99d7a3*/
  if ( v7 ) /*0x99d7ab*/
    _invoke_watson(v7, v8, v37, 0, 0x10, (int)a1); /*0x99d7b2*/
  v9 = sub_981BF8(0, 0x10, &v40); /*0x99d7be*/
  if ( v9 ) /*0x99d7c6*/
    _invoke_watson(v9, v10, v38, 0, 0x10, (int)a1); /*0x99d7cd*/
  if ( (a4 & 0x8000) == 0 && ((a4 & 0x74000) != 0 || v41 != 0x8000) ) /*0x99d7eb*/
    v47 |= 0x80u; /*0x99d7ed*/
  if ( (a4 & 3) != 0 ) /*0x99d800*/
  {
    if ( (a4 & 3) == 1 ) /*0x99d803*/
    {
      dwDesiredAccess = 0x40000000; /*0x99d837*/
    }
    else
    {
      if ( (a4 & 3) != 2 ) /*0x99d806*/
      {
LABEL_15:
        *__doserrno() = 0; /*0x99d808*/
        *a1 = 0xFFFFFFFF; /*0x99d80f*/
        *_errno() = 0x16; /*0x99d81f*/
        _invalid_parameter(0, 0x10, 0x16); /*0x99d821*/
        goto LABEL_61; /*0x99d829*/
      }
      dwDesiredAccess = 0xC0000000; /*0x99d82e*/
    }
  }
  else
  {
    dwDesiredAccess = 0x80000000; /*0x99d840*/
  }
  switch ( a5 ) /*0x99d848*/
  {
    case 0x10: /*0x99d848*/
      dwShareMode = 0; /*0x99d87f*/
      break;
    case 0x20: /*0x99d848*/
      dwShareMode = 1; /*0x99d876*/
      break;
    case 0x30: /*0x99d848*/
      dwShareMode = 2; /*0x99d86d*/
      break;
    case 0x40: /*0x99d848*/
      dwShareMode = 3; /*0x99d868*/
      break;
    case 0x80: /*0x99d848*/
      dwShareMode = dwDesiredAccess == 0x80000000; /*0x99d863*/
      break;
    default:
      goto LABEL_15; /*0x99d859*/
  }
  v11 = a4 & 0x700; /*0x99d88a*/
  if ( v11 > 0x400 ) /*0x99d893*/
  {
    if ( v11 != 0x500 ) /*0x99d8d8*/
    {
      if ( v11 == 0x600 ) /*0x99d8df*/
      {
LABEL_52:
        dwCreationDisposition = 5; /*0x99d945*/
        goto LABEL_42; /*0x99d94c*/
      }
      if ( v11 != 0x700 ) /*0x99d8e3*/
        goto LABEL_15; /*0x99d8e3*/
    }
    dwCreationDisposition = 1; /*0x99d8e9*/
    goto LABEL_42; /*0x99d8e9*/
  }
  if ( (a4 & 0x700) == 0x400 || (a4 & 0x700) == 0 ) /*0x99d899*/
  {
    dwCreationDisposition = 3; /*0x99d8ca*/
    goto LABEL_42; /*0x99d8d1*/
  }
  if ( v11 == 0x100 ) /*0x99d8a0*/
  {
    dwCreationDisposition = 4; /*0x99d8c1*/
    goto LABEL_42; /*0x99d8c8*/
  }
  if ( v11 == 0x200 ) /*0x99d8a7*/
    goto LABEL_52; /*0x99d8a7*/
  if ( v11 != 0x300 ) /*0x99d8b2*/
    goto LABEL_15; /*0x99d8b2*/
  dwCreationDisposition = 2; /*0x99d8b8*/
LABEL_42:
  v12 = 0x80; /*0x99d8f0*/
  if ( (a4 & 0x100) != 0 && (char)(a6 & ~byte_BA9BB4[0x1DC]) >= 0 ) /*0x99d90e*/
    v12 = 1; /*0x99d912*/
  if ( (a4 & 0x40) != 0 ) /*0x99d916*/
  {
    dwDesiredAccess |= 0x10000u; /*0x99d918*/
    v12 |= 0x4000000u; /*0x99d91f*/
    if ( v40 == 2 ) /*0x99d929*/
      dwShareMode |= 4u; /*0x99d92b*/
  }
  if ( (a4 & 0x1000) != 0 ) /*0x99d934*/
    v12 |= 0x100u; /*0x99d936*/
  if ( (a4 & 0x20) != 0 ) /*0x99d93b*/
  {
    v12 |= 0x8000000u; /*0x99d93d*/
  }
  else if ( (a4 & 0x10) != 0 ) /*0x99d951*/
  {
    v12 |= 0x10000000u; /*0x99d953*/
  }
  _alloc_osfhnd(); /*0x99d959*/
  *a1 = v13; /*0x99d961*/
  if ( v13 == 0xFFFFFFFF ) /*0x99d963*/
  {
    *__doserrno() = 0; /*0x99d96a*/
    *a1 = 0xFFFFFFFF; /*0x99d96c*/
    *_errno() = 0x18; /*0x99d974*/
LABEL_60:
    _errno(); /*0x99d9cc*/
    goto LABEL_61; /*0x99d9cc*/
  }
  v35 = dwCreationDisposition; /*0x99d981*/
  *a2 = 1; /*0x99d984*/
  v14 = CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, &SecurityAttributes, v35, v12, 0); /*0x99d997*/
  v15 = v14; /*0x99d99d*/
  if ( v14 == (HANDLE)0xFFFFFFFF ) /*0x99d9a2*/
  {
    v16 = (_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4); /*0x99d9b8*/
    *v16 &= ~1u; /*0x99d9bc*/
LABEL_59:
    LastError = GetLastError(); /*0x99d9bf*/
    _dosmaperr(LastError); /*0x99d9c6*/
    goto LABEL_60; /*0x99d9c6*/
  }
  FileType = GetFileType(v14); /*0x99d9d9*/
  switch ( FileType ) /*0x99d9e1*/
  {
    case 0u: /*0x99d9e1*/
      v19 = (_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4); /*0x99d9f7*/
      *v19 &= ~1u; /*0x99d9fb*/
      CloseHandle(v15); /*0x99d9ff*/
      goto LABEL_59; /*0x99da05*/
    case 2u: /*0x99d9e1*/
      v47 |= 0x40u; /*0x99da0c*/
      break;
    case 3u: /*0x99d9e1*/
      v47 |= 8u; /*0x99da17*/
      break;
  }
  _set_osfhnd(*a1, v15); /*0x99da1e*/
  v20 = v47 | 1; /*0x99da3c*/
  *(_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4) = v47 | 1; /*0x99da3f*/
  v21 = (_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 0x24); /*0x99da57*/
  *v21 &= 0x80u; /*0x99da5b*/
  HIBYTE(WideCharStr) = v20 & 0x48; /*0x99da61*/
  v47 = v20; /*0x99da65*/
  if ( (v20 & 0x48) == 0 ) /*0x99da68*/
  {
    if ( v20 >= 0 ) /*0x99da71*/
      goto LABEL_129; /*0x99da71*/
    if ( (a4 & 2) != 0 ) /*0x99da7b*/
    {
      dwShareMode = _lseek_nolock(*a1, 0xFFFFFFFF, 2u); /*0x99da8f*/
      if ( dwShareMode == 0xFFFFFFFF ) /*0x99da92*/
      {
        if ( *__doserrno() != 0x83 ) /*0x99da9f*/
        {
LABEL_73:
          _close_nolock(*a1); /*0x99daa1*/
          goto LABEL_60; /*0x99daa8*/
        }
      }
      else
      {
        v36 = *a1; /*0x99dab3*/
        LOBYTE(WideCharStr) = 0; /*0x99dab5*/
        if ( !_read_nolock(0, v36, &WideCharStr, 1u) /*0x99daec*/
          && (_BYTE)WideCharStr == 0x1A
          && _chsize_nolock(*a1, (int)dwShareMode) == 0xFFFFFFFF
          || _lseek_nolock(*a1, 0, 0) == 0xFFFFFFFF )
        {
          goto LABEL_73; /*0x99daec*/
        }
      }
    }
  }
  if ( v47 < 0 ) /*0x99daf2*/
  {
    if ( (a4 & 0x74000) == 0 ) /*0x99db05*/
    {
      if ( (v41 & 0x74000) != 0 ) /*0x99db0c*/
        a4 |= v41 & 0x74000; /*0x99db13*/
      else
        a4 |= 0x4000u; /*0x99db0e*/
    }
    v22 = a4 & 0x74000; /*0x99db19*/
    if ( (a4 & 0x74000) == 0x4000 ) /*0x99db1d*/
    {
      v46 = 0; /*0x99db63*/
      goto LABEL_94; /*0x99db63*/
    }
    if ( v22 == 0x10000 || v22 == 0x14000 ) /*0x99db2b*/
    {
      if ( (a4 & 0x301) != 0x301 ) /*0x99db5b*/
        goto LABEL_94; /*0x99db5b*/
    }
    else if ( v22 != 0x20000 && v22 != 0x24000 ) /*0x99db39*/
    {
      if ( v22 == 0x40000 || v22 == 0x44000 ) /*0x99db47*/
        v46 = 1; /*0x99db49*/
LABEL_94:
      if ( (a4 & 0x70000) == 0 ) /*0x99db6d*/
        goto LABEL_129; /*0x99db6d*/
      dwShareMode = 0; /*0x99db77*/
      if ( (v47 & 0x40) != 0 ) /*0x99db7a*/
        goto LABEL_129; /*0x99db7a*/
      v23 = dwDesiredAccess & 0xC0000000; /*0x99db88*/
      if ( (dwDesiredAccess & 0xC0000000) == 0x40000000 ) /*0x99db8f*/
      {
        v24 = dwCreationDisposition; /*0x99dc4c*/
        if ( !dwCreationDisposition ) /*0x99dc51*/
          goto LABEL_129; /*0x99dc51*/
        if ( dwCreationDisposition <= 2 ) /*0x99dc5a*/
          goto LABEL_103; /*0x99dc5a*/
        if ( dwCreationDisposition > 4 ) /*0x99dc63*/
          goto LABEL_102; /*0x99dc63*/
        if ( _lseeki64_nolock(*a1, 0, 0, 2u) ) /*0x99dc6f*/
        {
          v28 = _lseeki64_nolock(*a1, 0, 0, 0); /*0x99dc84*/
          v29 = HIDWORD(v28) & v28; /*0x99dc8c*/
          goto LABEL_118; /*0x99dc8c*/
        }
      }
      else
      {
        if ( v23 == 0x80000000 ) /*0x99db95*/
          goto LABEL_108; /*0x99db9a*/
        if ( v23 != 0xC0000000 ) /*0x99db9e*/
          goto LABEL_129; /*0x99db9e*/
        v24 = dwCreationDisposition; /*0x99dba4*/
        if ( !dwCreationDisposition ) /*0x99dba9*/
          goto LABEL_129; /*0x99dba9*/
        if ( dwCreationDisposition > 2 ) /*0x99dbb2*/
        {
          if ( dwCreationDisposition > 4 ) /*0x99dbb7*/
          {
LABEL_102:
            if ( v24 != 5 ) /*0x99dbbc*/
              goto LABEL_129; /*0x99dbbc*/
            goto LABEL_103; /*0x99dbbc*/
          }
          if ( _lseeki64_nolock(*a1, 0, 0, 2u) ) /*0x99dbef*/
          {
            v26 = _lseeki64_nolock(*a1, 0, 0, 0); /*0x99dc00*/
            if ( (HIDWORD(v26) & (unsigned int)v26) == 0xFFFFFFFF ) /*0x99dc0d*/
              goto LABEL_73; /*0x99dc0d*/
LABEL_108:
            nolock = _read_nolock(0, *a1, (LPWSTR)&dwShareMode, 3u); /*0x99dc13*/
            if ( nolock == 0xFFFFFFFF ) /*0x99dc26*/
              goto LABEL_73; /*0x99dc26*/
            if ( nolock != 2 ) /*0x99dc2f*/
            {
              if ( nolock != 3 ) /*0x99dc34*/
              {
LABEL_125:
                v29 = _lseek_nolock(*a1, 0, 0); /*0x99dce7*/
LABEL_118:
                if ( v29 == 0xFFFFFFFF ) /*0x99dc91*/
                  goto LABEL_73; /*0x99dc91*/
                goto LABEL_129; /*0x99dc91*/
              }
              if ( dwShareMode == 0xBFBBEF ) /*0x99dc41*/
              {
                v46 = 1; /*0x99dc43*/
                goto LABEL_129; /*0x99dc47*/
              }
            }
            if ( (unsigned __int16)dwShareMode == 0xFFFE ) /*0x99dca9*/
            {
              _close_nolock(*a1); /*0x99dcad*/
              *_errno() = 0x16; /*0x99dcbb*/
              goto LABEL_61; /*0x99dcbf*/
            }
            if ( (unsigned __int16)dwShareMode == 0xFEFF ) /*0x99dcc9*/
            {
              if ( _lseek_nolock(*a1, 2, 0) == 0xFFFFFFFF ) /*0x99dcdb*/
                goto LABEL_73; /*0x99dcdb*/
              v46 = 2; /*0x99dce1*/
              goto LABEL_129; /*0x99dce5*/
            }
            goto LABEL_125; /*0x99dcc9*/
          }
        }
      }
LABEL_103:
      v25 = 0; /*0x99dbc2*/
      if ( v46 == 1 ) /*0x99dbc9*/
      {
        dwShareMode = 0xBFBBEF; /*0x99dcf5*/
        dwCreationDisposition = 3; /*0x99dcfc*/
LABEL_127:
        while ( 1 ) /*0x99dd10*/
        {
          v30 = _write(*a1, (char *)&dwShareMode + v25, dwCreationDisposition - v25); /*0x99dd10*/
          if ( v30 == 0xFFFFFFFF ) /*0x99dd1b*/
            goto LABEL_73; /*0x99dd1b*/
          v25 += v30; /*0x99dd21*/
          if ( (int)dwCreationDisposition <= v25 ) /*0x99dd26*/
            goto LABEL_129; /*0x99dd26*/
        }
      }
      if ( v46 == 2 ) /*0x99dbd0*/
      {
        dwShareMode = 0xFEFF; /*0x99dbd6*/
        dwCreationDisposition = 2; /*0x99dbdd*/
        goto LABEL_127; /*0x99dbe4*/
      }
      goto LABEL_129; /*0x99dbd0*/
    }
    v46 = 2; /*0x99db5d*/
    goto LABEL_94; /*0x99db61*/
  }
LABEL_129:
  v31 = (_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 0x24); /*0x99dd28*/
  *v31 ^= (v46 ^ *v31) & 0x7F; /*0x99dd48*/
  v32 = (_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 0x24); /*0x99dd5e*/
  v33 = HIBYTE(WideCharStr) == 0; /*0x99dd72*/
  *v32 = *v32 & 0x7F | (BYTE2(a4) << 7); /*0x99dd75*/
  if ( v33 && (a4 & 8) != 0 ) /*0x99dd7d*/
  {
    v34 = (_BYTE *)(unk_BAAAC0[*a1 >> 5] + 0x28 * (*a1 & 0x1F) + 4); /*0x99dd93*/
    *v34 |= 0x20u; /*0x99dd97*/
  }
LABEL_61:
  _tsopen_nolock_::_exit_28157(); /*0x99d9d3*/
}
