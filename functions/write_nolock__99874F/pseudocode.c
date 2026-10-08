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
  _BYTE *v19; // eax
  char *v20; // edx
  char v21; // dl
  signed int v22; // esi
  unsigned int v23; // esi
  DWORD v24; // ecx
  char *v25; // eax
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
  _BYTE Buffer[76]; // [esp+34h] [ebp-4Ch] BYREF
  int v50; // [esp+80h] [ebp+0h] BYREF
  CHAR v51[688]; // [esp+188h] [ebp+108h] BYREF
  WCHAR WideCharStr[170]; // [esp+438h] [ebp+3B8h] BYREF
  CHAR MultiByteStr[8]; // [esp+58Ch] [ebp+50Ch] BYREF

  SrcCh = a4; /*0x998779*/
  v44 = 0; /*0x99877c*/
  v42 = 0; /*0x99877f*/
  if ( !nNumberOfBytesToWrite ) /*0x998782*/
    return 0; /*0x998786*/
  if ( !a4 ) /*0x99878d*/
  {
    *__doserrno() = 0; /*0x998794*/
    *_errno() = 0x16; /*0x9987a0*/
    _invalid_parameter(a1, a2, 0); /*0x9987a6*/
    return 0xFFFFFFFF; /*0x9987b1*/
  }
  v6 = 0x28 * (a3 & 0x1F); /*0x9987c2*/
  HIDWORD(v35) = a2; /*0x9987ca*/
  v7 = (_DWORD *)(4 * (a3 >> 5) + 0xBAAAC0); /*0x9987cb*/
  v8 = v6 + unk_BAAAC0[a3 >> 5]; /*0x9987d4*/
  v9 = (char)(2 * *(_BYTE *)(v8 + 0x24)) >> 1; /*0x9987db*/
  v40 = v7; /*0x9987e0*/
  v46 = v9; /*0x9987e3*/
  if ( (v9 == 2 || v9 == 1) && (nNumberOfBytesToWrite & 1) != 0 ) /*0x9987f8*/
  {
    *__doserrno() = 0; /*0x998801*/
    *_errno() = 0x16; /*0x99880d*/
    _invalid_parameter(v6, (int)v7, 0); /*0x998813*/
    return 0xFFFFFFFF; /*0x998cf8*/
  }
  if ( (*(_BYTE *)(v8 + 4) & 0x20) != 0 ) /*0x998824*/
    _lseeki64_nolock(a3, 0, 0, 2u); /*0x99882d*/
  if ( _isatty(a3) ) /*0x998836*/
  {
    if ( *(char *)(v6 + unk_BAAAC0[a3 >> 5] + 4) < 0 ) /*0x99884b*/
    {
      v10 = *(_DWORD *)(_getptd((int)&v50)[0x1B] + 0x14) == 0; /*0x99886a*/
      if ( GetConsoleMode(*(HANDLE *)(v6 + unk_BAAAC0[a3 >> 5]), &Mode) ) /*0x99886c*/
      {
        if ( !v10 || v46 ) /*0x998882*/
        {
          ConsoleCP = GetConsoleCP(); /*0x998888*/
          NumberOfBytesWritten = 0; /*0x99888e*/
          v12 = SrcCh; /*0x998899*/
          Mode = ConsoleCP; /*0x99889c*/
          v39 = SrcCh; /*0x99889f*/
          v45 = 0; /*0x9988a8*/
          while ( 1 ) /*0x9988b1*/
          {
            if ( v46 ) /*0x9988b6*/
            {
              if ( v46 == 1 || v46 == 2 ) /*0x9989c8*/
              {
                v16 = *(unsigned __int16 *)v12; /*0x9989ca*/
                v45 += 2; /*0x9989d8*/
                *(_DWORD *)DstCh = v16; /*0x9989dc*/
                v39 = v12 + 2; /*0x9989df*/
                v38 = (_WORD)v16 == 0xA; /*0x9989e2*/
              }
              if ( v46 == 1 || v46 == 2 ) /*0x9989eb*/
              {
                if ( _putwch_nolock(DstCh[0]) != DstCh[0] ) /*0x9989fa*/
                  goto LABEL_82; /*0x9989fa*/
                ++v44; /*0x998a00*/
                if ( v38 ) /*0x998a07*/
                {
                  wcscpy(DstCh, L"\r"); /*0x998a0d*/
                  if ( _putwch_nolock(0xD) != DstCh[0] ) /*0x998a1a*/
                    goto LABEL_82; /*0x998a1a*/
                  ++v44; /*0x998a20*/
                  ++v42; /*0x998a23*/
                }
              }
            }
            else
            {
              v36 = *v12; /*0x9988c8*/
              v38 = *v12 == 0xA; /*0x9988c9*/
              if ( isleadbyte(v36) ) /*0x9988cc*/
              {
                if ( nNumberOfBytesToWrite + SrcCh - v12 <= 1 ) /*0x9988fe*/
                  goto LABEL_83; /*0x9988fe*/
                LODWORD(v35) = 2; /*0x998904*/
                if ( mbtowc(DstCh, v12, v35) == 0xFFFFFFFF ) /*0x998916*/
                  goto LABEL_83; /*0x998916*/
                ++v12; /*0x99891c*/
                ++v45; /*0x99891d*/
              }
              else
              {
                LODWORD(v35) = 1; /*0x9988d6*/
                if ( mbtowc(DstCh, v12, v35) == 0xFFFFFFFF ) /*0x9988e8*/
                  goto LABEL_83; /*0x9988e8*/
              }
              ++v45; /*0x998938*/
              v39 = v12 + 1; /*0x99893b*/
              v13 = WideCharToMultiByte(Mode, 0, DstCh, 1, MultiByteStr, 5, 0, 0); /*0x99893e*/
              v14 = v13; /*0x998944*/
              if ( !v13 ) /*0x998948*/
                goto LABEL_83; /*0x998948*/
              if ( !WriteFile(*(HANDLE *)(v6 + unk_BAAAC0[a3 >> 5]), MultiByteStr, v13, &NumberOfBytesWritten, 0) ) /*0x998969*/
                goto LABEL_82; /*0x998969*/
              v44 += NumberOfBytesWritten; /*0x998972*/
              if ( (int)NumberOfBytesWritten < v14 ) /*0x998977*/
                goto LABEL_83; /*0x998977*/
              if ( v38 ) /*0x998981*/
              {
                v15 = unk_BAAAC0[a3 >> 5]; /*0x998996*/
                MultiByteStr[0] = 0xD; /*0x998998*/
                if ( !WriteFile(*(HANDLE *)(v6 + v15), MultiByteStr, 1u, &NumberOfBytesWritten, 0) ) /*0x9989aa*/
                  goto LABEL_82; /*0x9989aa*/
                if ( (int)NumberOfBytesWritten < 1 ) /*0x9989b4*/
                  goto LABEL_83; /*0x9989b4*/
                ++v42; /*0x9989ba*/
                ++v44; /*0x9989bd*/
              }
            }
            if ( (unsigned int)v45 >= nNumberOfBytesToWrite ) /*0x998a2f*/
              goto LABEL_83; /*0x998a2f*/
            v12 = v39; /*0x9988ae*/
          }
        }
      }
    }
  }
  v17 = v6 + unk_BAAAC0[a3 >> 5]; /*0x998a3c*/
  if ( *(char *)(v17 + 4) >= 0 ) /*0x998a42*/
  {
    if ( WriteFile(*(HANDLE *)v17, SrcCh, nNumberOfBytesToWrite, &v41, 0) ) /*0x998c7e*/
    {
      *(_DWORD *)DstCh = 0; /*0x998c8b*/
      v44 = v41; /*0x998c8f*/
      goto LABEL_83; /*0x998c92*/
    }
  }
  else
  {
    *(_DWORD *)DstCh = 0; /*0x998a51*/
    if ( v46 ) /*0x998a54*/
    {
      if ( v46 == 2 ) /*0x998aef*/
      {
        NumberOfBytesWritten = (DWORD)SrcCh; /*0x998afb*/
        while ( 1 ) /*0x998b07*/
        {
          v23 = 0; /*0x998b07*/
          v24 = NumberOfBytesWritten - (_DWORD)SrcCh; /*0x998b09*/
          v25 = Buffer; /*0x998b0c*/
          do /*0x998b46*/
          {
            if ( v24 >= nNumberOfBytesToWrite ) /*0x998b15*/
              break; /*0x998b15*/
            v26 = (__int16 *)NumberOfBytesWritten; /*0x998b17*/
            NumberOfBytesWritten += 2; /*0x998b1a*/
            v27 = *v26; /*0x998b1e*/
            v24 += 2; /*0x998b22*/
            if ( v27 == 0xA ) /*0x998b27*/
            {
              v42 += 2; /*0x998b29*/
              *(_WORD *)v25 = 0xD; /*0x998b2d*/
              v25 += 2; /*0x998b33*/
              v23 += 2; /*0x998b35*/
            }
            v7 = v40; /*0x998b36*/
            *(_WORD *)v25 = v27; /*0x998b39*/
            v25 += 2; /*0x998b3d*/
            v23 += 2; /*0x998b3f*/
          }
          while ( v23 < 0x3FF ); /*0x998b46*/
          v28 = v25 - Buffer; /*0x998b4d*/
          if ( !WriteFile(*(HANDLE *)(v6 + *v7), Buffer, v25 - Buffer, &v41, 0) ) /*0x998b5f*/
            break; /*0x998b5f*/
          v44 += v41; /*0x998b70*/
          if ( (int)v41 < v28 || NumberOfBytesWritten - (unsigned int)SrcCh >= nNumberOfBytesToWrite ) /*0x998b87*/
            goto LABEL_83; /*0x998b87*/
        }
      }
      else
      {
        v45 = SrcCh; /*0x998b98*/
        while ( 1 ) /*0x998ba4*/
        {
          NumberOfBytesWritten = 0; /*0x998ba4*/
          v29 = v45 - SrcCh; /*0x998ba8*/
          v30 = WideCharStr; /*0x998bad*/
          do /*0x998be6*/
          {
            if ( v29 >= nNumberOfBytesToWrite ) /*0x998bba*/
              break; /*0x998bba*/
            v31 = *(_WORD *)v45; /*0x998bbf*/
            v45 += 2; /*0x998bc2*/
            v29 += 2; /*0x998bc5*/
            if ( v31 == 0xA ) /*0x998bcb*/
            {
              *v30++ = 0xD; /*0x998bcd*/
              NumberOfBytesWritten += 2; /*0x998bd4*/
            }
            NumberOfBytesWritten += 2; /*0x998bd7*/
            *v30++ = v31; /*0x998bda*/
          }
          while ( NumberOfBytesWritten < 0x152 ); /*0x998be6*/
          v32 = 0; /*0x998be8*/
          v33 = WideCharToMultiByte(0xFDE9u, 0, WideCharStr, v30 - WideCharStr, v51, 0x2AB, 0, 0); /*0x998c15*/
          if ( !v33 ) /*0x998c19*/
            break; /*0x998c19*/
          while ( WriteFile(*(HANDLE *)(v6 + *v40), &v51[v32], v33 - v32, &v41, 0) ) /*0x998c3e*/
          {
            v32 += v41; /*0x998c40*/
            if ( v33 <= v32 ) /*0x998c45*/
              goto LABEL_77; /*0x998c45*/
          }
          *(_DWORD *)DstCh = GetLastError(); /*0x998c4f*/
LABEL_77:
          if ( v33 <= v32 ) /*0x998c54*/
          {
            v44 = v45 - SrcCh; /*0x998c62*/
            if ( v45 - SrcCh < nNumberOfBytesToWrite ) /*0x998c65*/
              continue; /*0x998c65*/
          }
          goto LABEL_83; /*0x998c65*/
        }
      }
    }
    else
    {
      NumberOfBytesWritten = (DWORD)SrcCh; /*0x998a60*/
      while ( 1 ) /*0x998a6c*/
      {
        v45 = 0; /*0x998a6c*/
        v18 = NumberOfBytesWritten - (_DWORD)SrcCh; /*0x998a70*/
        v19 = Buffer; /*0x998a73*/
        do /*0x998aa3*/
        {
          if ( v18 >= nNumberOfBytesToWrite ) /*0x998a7c*/
            break; /*0x998a7c*/
          v20 = (char *)NumberOfBytesWritten++; /*0x998a7e*/
          v21 = *v20; /*0x998a84*/
          ++v18; /*0x998a86*/
          if ( v21 == 0xA ) /*0x998a8a*/
          {
            ++v42; /*0x998a8c*/
            *v19++ = 0xD; /*0x998a8f*/
            ++v45; /*0x998a93*/
          }
          *v19++ = v21; /*0x998a96*/
          ++v45; /*0x998a99*/
        }
        while ( (unsigned int)v45 < 0x400 ); /*0x998aa3*/
        v22 = v19 - Buffer; /*0x998aaa*/
        if ( !WriteFile(*(HANDLE *)(v6 + unk_BAAAC0[a3 >> 5]), Buffer, v19 - Buffer, &v41, 0) ) /*0x998abc*/
          break; /*0x998abc*/
        v44 += v41; /*0x998acd*/
        if ( (int)v41 < v22 || NumberOfBytesWritten - (unsigned int)SrcCh >= nNumberOfBytesToWrite ) /*0x998ae4*/
          goto LABEL_83; /*0x998ae4*/
      }
    }
  }
LABEL_82:
  *(_DWORD *)DstCh = GetLastError(); /*0x998c94*/
LABEL_83:
  if ( !v44 ) /*0x998ca2*/
  {
    v34 = 0; /*0x998ca7*/
    if ( *(_DWORD *)DstCh ) /*0x998cac*/
    {
      v34 = 5; /*0x998cb0*/
      if ( *(_DWORD *)DstCh != 5 ) /*0x998cb4*/
      {
        _dosmaperr(*(unsigned int *)DstCh); /*0x998cc6*/
        return 0xFFFFFFFF; /*0x998ccc*/
      }
      *_errno() = 9; /*0x998cbb*/
    }
    else
    {
      if ( (*(_BYTE *)(v6 + *v40 + 4) & 0x40) != 0 && *SrcCh == 0x1A ) /*0x998cdd*/
        return 0; /*0x998ce1*/
      *_errno() = 0x1C; /*0x998ce8*/
    }
    *__doserrno() = v34; /*0x998cf3*/
    return 0xFFFFFFFF; /*0x998cf3*/
  }
  return v44 - v42; /*0x998cff*/
}
