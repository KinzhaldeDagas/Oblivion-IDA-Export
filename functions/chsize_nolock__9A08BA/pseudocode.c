int __cdecl _chsize_nolock(int a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned int v4; // esi
  HANDLE ProcessHeap; // eax
  DWORD v7; // eax
  int v8; // eax
  bool v9; // of
  unsigned int v10; // kr08_4
  unsigned int v11; // esi
  HANDLE v12; // eax
  __int64 v13; // rax
  void *osfhandle; // eax
  unsigned int *v15; // esi
  __int64 v16; // rax
  SIZE_T v17; // [esp-4h] [ebp-28h]
  __int64 v18; // [esp+Ch] [ebp-18h]
  __int64 v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-8h]
  char *lpMem; // [esp+20h] [ebp-4h]

  HIDWORD(v19) = 0; /*0x9a08cc*/
  v18 = _lseeki64_nolock(a1, 0, 0, 1u); /*0x9a08d7*/
  if ( (HIDWORD(v18) & (unsigned int)v18) == 0xFFFFFFFF ) /*0x9a08e5*/
    return *_errno(); /*0x9a08e5*/
  v2 = _lseeki64_nolock(a1, 0, 0, 2u); /*0x9a08ee*/
  if ( (HIDWORD(v2) & (unsigned int)v2) == 0xFFFFFFFF ) /*0x9a08fd*/
    return *_errno(); /*0x9a08fd*/
  v3 = (unsigned __int64)(a2 - v2) >> 0x20; /*0x9a0907*/
  v4 = a2 - v2; /*0x9a0907*/
  if ( v3 >= 0 && (a2 >= v2 && (unsigned __int64)(a2 - v2) >> 0x20 != 0 || v4) )
  {
    LODWORD(v17) = 0x1000; /*0x9a091e*/
    ProcessHeap = GetProcessHeap(); /*0x9a0921*/
    lpMem = (char *)HeapAlloc(ProcessHeap, 8u, v17); /*0x9a0930*/
    if ( !lpMem ) /*0x9a0933*/
    {
      *_errno() = 0xC; /*0x9a093a*/
      return *_errno(); /*0x9a094b*/
    }
    v20 = _setmode_nolock(a1, 0x8000); /*0x9a095b*/
    while ( 1 )
    {
      v7 = v3 < 0 || v3 <= 0 && v4 < 0x1000 ? v4 : 0x1000;
      v8 = _write_nolock(0x1000, v3, a1, lpMem, v7); /*0x9a0975*/
      if ( v8 == 0xFFFFFFFF ) /*0x9a0980*/
        break; /*0x9a0980*/
      v9 = __OFSUB__(__PAIR64__(v3, v4), v8); /*0x9a0985*/
      v10 = v4 - v8; /*0x9a0985*/
      v3 = (__PAIR64__(v3, v4) - v8) >> 0x20; /*0x9a0985*/
      v4 -= v8; /*0x9a0985*/
      if ( v3 < 0 || (v3 < 0) ^ v9 | (v3 == 0) && !v10 ) /*0x9a098d*/
      {
        v11 = 0; /*0x9a098f*/
        goto LABEL_20; /*0x9a098f*/
      }
    }
    if ( *__doserrno() == 5 ) /*0x9a09c0*/
      *_errno() = 0xD; /*0x9a09c7*/
    v11 = 0xFFFFFFFF; /*0x9a09cd*/
    HIDWORD(v19) = 0xFFFFFFFF; /*0x9a09d0*/
LABEL_20:
    _setmode_nolock(a1, v20); /*0x9a0992*/
    v12 = GetProcessHeap(); /*0x9a09a4*/
    HeapFree(v12, 0, lpMem); /*0x9a09ab*/
    goto LABEL_28; /*0x9a09b3*/
  }
  if ( v3 < 0 ) /*0x9a09d7*/
  {
    v13 = _lseeki64_nolock(a1, a2, SHIDWORD(a2), 0); /*0x9a09e9*/
    if ( (HIDWORD(v13) & (unsigned int)v13) == 0xFFFFFFFF ) /*0x9a09f6*/
      return *_errno(); /*0x9a09f6*/
    osfhandle = (void *)_get_osfhandle(a1); /*0x9a09ff*/
    v19 = SetEndOfFile(osfhandle) - 1; /*0x9a0a14*/
    if ( (HIDWORD(v19) & (unsigned int)v19) == 0xFFFFFFFF ) /*0x9a0a1f*/
    {
      *_errno() = 0xD; /*0x9a0a26*/
      v15 = __doserrno(); /*0x9a0a31*/
      *v15 = GetLastError(); /*0x9a0a39*/
      v11 = v19; /*0x9a0a3b*/
LABEL_28:
      if ( (HIDWORD(v19) & v11) == 0xFFFFFFFF ) /*0x9a0a44*/
        return *_errno(); /*0x9a0a44*/
    }
  }
  v16 = _lseeki64_nolock(a1, v18, SHIDWORD(v18), 0); /*0x9a0a4a*/
  if ( (HIDWORD(v16) & (unsigned int)v16) == 0xFFFFFFFF ) /*0x9a0a61*/
    return *_errno(); /*0x9a0a61*/
  return 0; /*0x9a0947*/
}
