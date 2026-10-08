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

  if ( nBufferLength ) /*0x99e3f7*/
  {
    if ( !_validdrive(nBufferLength) ) /*0x99e3fc*/
    {
      *__doserrno() = 0xF; /*0x99e40b*/
      *_errno() = 0xD; /*0x99e41b*/
      _invalid_parameter(0, a1, a2); /*0x99e421*/
      return 0; /*0x99e42b*/
    }
    v6 = nBufferLength; /*0x99e437*/
  }
  else
  {
    v6 = _getdrive(); /*0x99e430*/
  }
  HIDWORD(v12) = a1; /*0x99e43a*/
  v7 = lpBuffer; /*0x99e43b*/
  if ( lpBuffer ) /*0x99e440*/
  {
    if ( (int)NumOfElements <= 0 ) /*0x99e447*/
    {
      *_errno() = 0x16; /*0x99e453*/
      _invalid_parameter(0, (int)lpBuffer, a2); /*0x99e459*/
      return 0; /*0x99e463*/
    }
    nBufferLengtha = NumOfElements; /*0x99e468*/
    *lpBuffer = 0; /*0x99e46b*/
  }
  else
  {
    nBufferLengtha = 0; /*0x99e46f*/
  }
  if ( v6 ) /*0x99e474*/
  {
    FileName = v6 + 0x40; /*0x99e478*/
    strcpy(v15, ":."); /*0x99e47b*/
  }
  else
  {
    FileName = 0x2E; /*0x99e488*/
    v15[0] = 0; /*0x99e48c*/
  }
  LODWORD(v12) = a2; /*0x99e48f*/
  FullPathNameA = GetFullPathNameA(&FileName, nBufferLengtha, lpBuffer, &FilePart); /*0x99e4a2*/
  if ( !FullPathNameA ) /*0x99e4a6*/
    goto LABEL_25; /*0x99e4a6*/
  if ( !lpBuffer ) /*0x99e4aa*/
  {
    if ( FullPathNameA > (int)NumOfElements ) /*0x99e4c3*/
      LODWORD(NumOfElements) = FullPathNameA; /*0x99e4c5*/
    v9 = (CHAR *)calloc((unsigned int)NumOfElements | 0x100000000LL, v12); /*0x99e4cd*/
    v7 = v9; /*0x99e4d2*/
    if ( !v9 ) /*0x99e4d8*/
    {
      *_errno() = 0xC; /*0x99e4df*/
      *__doserrno() = 8; /*0x99e4ea*/
      return 0; /*0x99e4f0*/
    }
    v10 = GetFullPathNameA(&FileName, NumOfElements, v9, &FilePart); /*0x99e4fe*/
    if ( v10 && v10 < (int)NumOfElements ) /*0x99e507*/
      return v7; /*0x99e50b*/
LABEL_25:
    LastError = GetLastError(); /*0x99e50d*/
    _dosmaperr(LastError); /*0x99e514*/
    return 0; /*0x99e514*/
  }
  if ( FullPathNameA < nBufferLengtha ) /*0x99e4af*/
    return v7; /*0x99e4af*/
  *_errno() = 0x22; /*0x99e4b6*/
  *lpBuffer = 0; /*0x99e4bc*/
  return 0; /*0x99e51e*/
}
