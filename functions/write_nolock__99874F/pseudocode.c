int __usercall _write_nolock@<eax>(int a1@<ebx>, int a2@<edi>, int a3, char *a4, DWORD nNumberOfBytesToWrite)
{
  int v6; // ebx
  _DWORD *v7; // edi
  int v8; // eax
  char v9; // cl
  BOOL v10; // esi
  UINT ConsoleCP; // eax
  char *v12; // esi
  DWORD v13; // eax
  signed int v14; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  DWORD v18; // ecx
  CHAR *v19; // eax
  CHAR *v20; // edx
  CHAR v21; // dl
  signed int v22; // esi
  unsigned int v23; // esi
  DWORD v24; // ecx
  CHAR *v25; // eax
  __int16 *v26; // edx
  __int16 v27; // dx
  signed int v28; // esi
  DWORD v29; // ecx
  WCHAR *v30; // eax
  WCHAR v31; // dx
  int v32; // esi
  int v33; // edi
  unsigned int v34; // esi
  size_t v35; // [esp-Ch] [ebp-8Ch]
  int v36; // [esp-Ch] [ebp-8Ch]
  DWORD Mode; // [esp+4h] [ebp-7Ch] BYREF
  BOOL v38; // [esp+8h] [ebp-78h]
  char *v39; // [esp+Ch] [ebp-74h]
  _DWORD *v40; // [esp+10h] [ebp-70h]
  DWORD v41; // [esp+14h] [ebp-6Ch] BYREF
  int v42; // [esp+18h] [ebp-68h]
  char *SrcCh; // [esp+1Ch] [ebp-64h]
  DWORD v44; // [esp+20h] [ebp-60h]
  char *v45; // [esp+24h] [ebp-5Ch]
  char v46; // [esp+2Bh] [ebp-55h]
  wchar_t DstCh[2]; // [esp+2Ch] [ebp-54h] BYREF
  DWORD NumberOfBytesWritten; // [esp+30h] [ebp-50h] BYREF
  CHAR Buffer[340]; // [esp+34h] [ebp-4Ch] BYREF
  CHAR v50[688]; // [esp+188h] [ebp+108h] BYREF
  WCHAR WideCharStr[170]; // [esp+438h] [ebp+3B8h] BYREF
  CHAR MultiByteStr[8]; // [esp+58Ch] [ebp+50Ch] BYREF

  SrcCh = a4;
  v44 = 0;
  v42 = 0;
  if ( !nNumberOfBytesToWrite )
    return 0;
  if ( !a4 )
  {
    *__doserrno() = 0;
    *_errno() = 0x16;
    _invalid_parameter(a1, a2, 0);
    return 0xFFFFFFFF;
  }
  v6 = 0x28 * (a3 & 0x1F);
  HIDWORD(v35) = a2;
  v7 = (_DWORD *)(4 * (a3 >> 5) + 0xBAAAC0);
  v8 = v6 + dword_BAAAC0[a3 >> 5];
  v9 = (char)(2 * *(_BYTE *)(v8 + 0x24)) >> 1;
  v40 = v7;
  v46 = v9;
  if ( (v9 == 2 || v9 == 1) && (nNumberOfBytesToWrite & 1) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 0x16;
    _invalid_parameter(v6, (int)v7, 0);
    return 0xFFFFFFFF;
  }
  if ( (*(_BYTE *)(v8 + 4) & 0x20) != 0 )
    _lseeki64_nolock(a3, 0, 0, 2u);
  if ( _isatty(a3) )
  {
    if ( *(char *)(v6 + dword_BAAAC0[a3 >> 5] + 4) < 0 )
    {
      v10 = *(_DWORD *)(_getptd()[0x1B] + 0x14) == 0;
      if ( GetConsoleMode(*(HANDLE *)(v6 + dword_BAAAC0[a3 >> 5]), &Mode) )
      {
        if ( !v10 || v46 )
        {
          ConsoleCP = GetConsoleCP();
          NumberOfBytesWritten = 0;
          v12 = SrcCh;
          Mode = ConsoleCP;
          v39 = SrcCh;
          v45 = 0;
          while ( 1 )
          {
            if ( v46 )
            {
              if ( v46 == 1 || v46 == 2 )
              {
                v16 = *(unsigned __int16 *)v12;
                v45 += 2;
                *(_DWORD *)DstCh = v16;
                v39 = v12 + 2;
                v38 = (_WORD)v16 == 0xA;
              }
              if ( v46 == 1 || v46 == 2 )
              {
                if ( (unsigned __int16)_putwch_nolock(DstCh[0]) != DstCh[0] )
                  goto LABEL_82;
                ++v44;
                if ( v38 )
                {
                  wcscpy(DstCh, L"\r");
                  if ( (unsigned __int16)_putwch_nolock(0xD) != DstCh[0] )
                    goto LABEL_82;
                  ++v44;
                  ++v42;
                }
              }
            }
            else
            {
              v36 = *v12;
              v38 = *v12 == 0xA;
              if ( isleadbyte(v36) )
              {
                if ( nNumberOfBytesToWrite + SrcCh - v12 <= 1 )
                  goto LABEL_83;
                LODWORD(v35) = 2;
                if ( mbtowc(DstCh, v12, v35) == 0xFFFFFFFF )
                  goto LABEL_83;
                ++v12;
                ++v45;
              }
              else
              {
                LODWORD(v35) = 1;
                if ( mbtowc(DstCh, v12, v35) == 0xFFFFFFFF )
                  goto LABEL_83;
              }
              ++v45;
              v39 = v12 + 1;
              v13 = WideCharToMultiByte(Mode, 0, DstCh, 1, MultiByteStr, 5, 0, 0);
              v14 = v13;
              if ( !v13 )
                goto LABEL_83;
              if ( !WriteFile(*(HANDLE *)(v6 + dword_BAAAC0[a3 >> 5]), MultiByteStr, v13, &NumberOfBytesWritten, 0) )
                goto LABEL_82;
              v44 += NumberOfBytesWritten;
              if ( (int)NumberOfBytesWritten < v14 )
                goto LABEL_83;
              if ( v38 )
              {
                v15 = dword_BAAAC0[a3 >> 5];
                MultiByteStr[0] = 0xD;
                if ( !WriteFile(*(HANDLE *)(v6 + v15), MultiByteStr, 1u, &NumberOfBytesWritten, 0) )
                  goto LABEL_82;
                if ( (int)NumberOfBytesWritten < 1 )
                  goto LABEL_83;
                ++v42;
                ++v44;
              }
            }
            if ( (unsigned int)v45 >= nNumberOfBytesToWrite )
              goto LABEL_83;
            v12 = v39;
          }
        }
      }
    }
  }
  v17 = v6 + dword_BAAAC0[a3 >> 5];
  if ( *(char *)(v17 + 4) >= 0 )
  {
    if ( WriteFile(*(HANDLE *)v17, SrcCh, nNumberOfBytesToWrite, &v41, 0) )
    {
      *(_DWORD *)DstCh = 0;
      v44 = v41;
      goto LABEL_83;
    }
  }
  else
  {
    *(_DWORD *)DstCh = 0;
    if ( v46 )
    {
      if ( v46 == 2 )
      {
        NumberOfBytesWritten = (DWORD)SrcCh;
        while ( 1 )
        {
          v23 = 0;
          v24 = NumberOfBytesWritten - (_DWORD)SrcCh;
          v25 = Buffer;
          do
          {
            if ( v24 >= nNumberOfBytesToWrite )
              break;
            v26 = (__int16 *)NumberOfBytesWritten;
            NumberOfBytesWritten += 2;
            v27 = *v26;
            v24 += 2;
            if ( v27 == 0xA )
            {
              v42 += 2;
              *(_WORD *)v25 = 0xD;
              v25 += 2;
              v23 += 2;
            }
            v7 = v40;
            *(_WORD *)v25 = v27;
            v25 += 2;
            v23 += 2;
          }
          while ( v23 < 0x3FF );
          v28 = v25 - Buffer;
          if ( !WriteFile(*(HANDLE *)(v6 + *v7), Buffer, v25 - Buffer, &v41, 0) )
            break;
          v44 += v41;
          if ( (int)v41 < v28 || NumberOfBytesWritten - (unsigned int)SrcCh >= nNumberOfBytesToWrite )
            goto LABEL_83;
        }
      }
      else
      {
        v45 = SrcCh;
        while ( 1 )
        {
          NumberOfBytesWritten = 0;
          v29 = v45 - SrcCh;
          v30 = WideCharStr;
          do
          {
            if ( v29 >= nNumberOfBytesToWrite )
              break;
            v31 = *(_WORD *)v45;
            v45 += 2;
            v29 += 2;
            if ( v31 == 0xA )
            {
              *v30++ = 0xD;
              NumberOfBytesWritten += 2;
            }
            NumberOfBytesWritten += 2;
            *v30++ = v31;
          }
          while ( NumberOfBytesWritten < 0x152 );
          v32 = 0;
          v33 = WideCharToMultiByte(0xFDE9u, 0, WideCharStr, v30 - WideCharStr, v50, 0x2AB, 0, 0);
          if ( !v33 )
            break;
          while ( WriteFile(*(HANDLE *)(v6 + *v40), &v50[v32], v33 - v32, &v41, 0) )
          {
            v32 += v41;
            if ( v33 <= v32 )
              goto LABEL_77;
          }
          *(_DWORD *)DstCh = GetLastError();
LABEL_77:
          if ( v33 <= v32 )
          {
            v44 = v45 - SrcCh;
            if ( v45 - SrcCh < nNumberOfBytesToWrite )
              continue;
          }
          goto LABEL_83;
        }
      }
    }
    else
    {
      NumberOfBytesWritten = (DWORD)SrcCh;
      while ( 1 )
      {
        v45 = 0;
        v18 = NumberOfBytesWritten - (_DWORD)SrcCh;
        v19 = Buffer;
        do
        {
          if ( v18 >= nNumberOfBytesToWrite )
            break;
          v20 = (CHAR *)NumberOfBytesWritten++;
          v21 = *v20;
          ++v18;
          if ( v21 == 0xA )
          {
            ++v42;
            *v19++ = 0xD;
            ++v45;
          }
          *v19++ = v21;
          ++v45;
        }
        while ( (unsigned int)v45 < 0x400 );
        v22 = v19 - Buffer;
        if ( !WriteFile(*(HANDLE *)(v6 + dword_BAAAC0[a3 >> 5]), Buffer, v19 - Buffer, &v41, 0) )
          break;
        v44 += v41;
        if ( (int)v41 < v22 || NumberOfBytesWritten - (unsigned int)SrcCh >= nNumberOfBytesToWrite )
          goto LABEL_83;
      }
    }
  }
LABEL_82:
  *(_DWORD *)DstCh = GetLastError();
LABEL_83:
  if ( !v44 )
  {
    v34 = 0;
    if ( *(_DWORD *)DstCh )
    {
      v34 = 5;
      if ( *(_DWORD *)DstCh != 5 )
      {
        _dosmaperr(*(unsigned int *)DstCh);
        return 0xFFFFFFFF;
      }
      *_errno() = 9;
    }
    else
    {
      if ( (*(_BYTE *)(v6 + *v40 + 4) & 0x40) != 0 && *SrcCh == 0x1A )
        return 0;
      *_errno() = 0x1C;
    }
    *__doserrno() = v34;
    return 0xFFFFFFFF;
  }
  return v44 - v42;
}
