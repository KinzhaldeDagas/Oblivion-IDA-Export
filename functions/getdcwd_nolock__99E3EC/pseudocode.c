LPSTR __usercall _getdcwd_nolock@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        DWORD nBufferLength,
        LPSTR lpBuffer,
        size_t NumOfElements)
{
  int v6; // eax
  LPSTR v7; // edi
  signed int FullPathNameA; // eax
  CHAR *v9; // eax
  signed int v10; // eax
  DWORD LastError; // eax
  size_t v12; // [esp-8h] [ebp-14h]
  LPSTR FilePart; // [esp+4h] [ebp-8h] BYREF
  CHAR FileName; // [esp+8h] [ebp-4h] BYREF
  char v15[3]; // [esp+9h] [ebp-3h] BYREF
  signed int nBufferLengtha; // [esp+14h] [ebp+8h]

  if ( nBufferLength )
  {
    if ( !_validdrive(nBufferLength) )
    {
      *__doserrno() = 0xF;
      *_errno() = 0xD;
      _invalid_parameter(0, a1, a2);
      return 0;
    }
    v6 = nBufferLength;
  }
  else
  {
    v6 = _getdrive();
  }
  HIDWORD(v12) = a1;
  v7 = lpBuffer;
  if ( lpBuffer )
  {
    if ( (int)NumOfElements <= 0 )
    {
      *_errno() = 0x16;
      _invalid_parameter(0, (int)lpBuffer, a2);
      return 0;
    }
    nBufferLengtha = NumOfElements;
    *lpBuffer = 0;
  }
  else
  {
    nBufferLengtha = 0;
  }
  if ( v6 )
  {
    FileName = v6 + 0x40;
    strcpy(v15, ":.");
  }
  else
  {
    FileName = 0x2E;
    v15[0] = 0;
  }
  LODWORD(v12) = a2;
  FullPathNameA = GetFullPathNameA(&FileName, nBufferLengtha, lpBuffer, &FilePart);
  if ( !FullPathNameA )
    goto LABEL_25;
  if ( !lpBuffer )
  {
    if ( FullPathNameA > (int)NumOfElements )
      LODWORD(NumOfElements) = FullPathNameA;
    v9 = (CHAR *)calloc((unsigned int)NumOfElements | 0x100000000LL, v12);
    v7 = v9;
    if ( !v9 )
    {
      *_errno() = 0xC;
      *__doserrno() = 8;
      return 0;
    }
    v10 = GetFullPathNameA(&FileName, NumOfElements, v9, &FilePart);
    if ( v10 && v10 < (int)NumOfElements )
      return v7;
LABEL_25:
    LastError = GetLastError();
    _dosmaperr(LastError);
    return 0;
  }
  if ( FullPathNameA < nBufferLengtha )
    return v7;
  *_errno() = 0x22;
  *lpBuffer = 0;
  return 0;
}
