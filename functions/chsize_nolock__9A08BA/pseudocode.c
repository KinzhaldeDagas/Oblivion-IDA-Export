int __cdecl _chsize_nolock(int a1, __int64 a2)
{
  signed __int64 v2; // rax
  int v3; // edi
  unsigned int v4; // esi
  HANDLE ProcessHeap; // eax
  DWORD v7; // eax
  int v8; // eax
  bool v9; // of
  unsigned int v10; // kr08_4
  unsigned int v11; // esi
  HANDLE v12; // eax
  unsigned __int64 v13; // rax
  void *osfhandle; // eax
  unsigned int *v15; // esi
  unsigned __int64 v16; // rax
  SIZE_T v17; // [esp-4h] [ebp-28h]
  unsigned __int64 v18; // [esp+Ch] [ebp-18h]
  __int64 v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-8h]
  char *lpMem; // [esp+20h] [ebp-4h]

  HIDWORD(v19) = 0;
  v18 = _lseeki64_nolock(a1, 0, 0, 1u);
  if ( (HIDWORD(v18) & (unsigned int)v18) == 0xFFFFFFFF )
    return *_errno();
  v2 = _lseeki64_nolock(a1, 0, 0, 2u);
  if ( (HIDWORD(v2) & (unsigned int)v2) == 0xFFFFFFFF )
    return *_errno();
  v3 = (unsigned __int64)(a2 - v2) >> 0x20;
  v4 = a2 - v2;
  if ( v3 >= 0 && (a2 >= v2 && (unsigned __int64)(a2 - v2) >> 0x20 != 0 || v4) )
  {
    LODWORD(v17) = 0x1000;
    ProcessHeap = GetProcessHeap();
    lpMem = (char *)HeapAlloc(ProcessHeap, 8u, v17);
    if ( !lpMem )
    {
      *_errno() = 0xC;
      return *_errno();
    }
    v20 = _setmode_nolock(a1, 0x8000);
    while ( 1 )
    {
      v7 = v3 < 0 || v3 <= 0 && v4 < 0x1000 ? v4 : 0x1000;
      v8 = _write_nolock(0x1000, v3, a1, lpMem, v7);
      if ( v8 == 0xFFFFFFFF )
        break;
      v9 = __OFSUB__(__PAIR64__(v3, v4), v8);
      v10 = v4 - v8;
      v3 = (__PAIR64__(v3, v4) - v8) >> 0x20;
      v4 -= v8;
      if ( v3 < 0 || (v3 < 0) ^ v9 | (v3 == 0) && !v10 )
      {
        v11 = 0;
        goto LABEL_20;
      }
    }
    if ( *__doserrno() == 5 )
      *_errno() = 0xD;
    v11 = 0xFFFFFFFF;
    HIDWORD(v19) = 0xFFFFFFFF;
LABEL_20:
    _setmode_nolock(a1, v20);
    v12 = GetProcessHeap();
    HeapFree(v12, 0, lpMem);
    goto LABEL_28;
  }
  if ( v3 < 0 )
  {
    v13 = _lseeki64_nolock(a1, a2, SHIDWORD(a2), 0);
    if ( (HIDWORD(v13) & (unsigned int)v13) == 0xFFFFFFFF )
      return *_errno();
    osfhandle = (void *)_get_osfhandle(a1);
    v19 = SetEndOfFile(osfhandle) - 1;
    if ( (HIDWORD(v19) & (unsigned int)v19) == 0xFFFFFFFF )
    {
      *_errno() = 0xD;
      v15 = __doserrno();
      *v15 = GetLastError();
      v11 = v19;
LABEL_28:
      if ( (HIDWORD(v19) & v11) == 0xFFFFFFFF )
        return *_errno();
    }
  }
  v16 = _lseeki64_nolock(a1, v18, SHIDWORD(v18), 0);
  if ( (HIDWORD(v16) & (unsigned int)v16) == 0xFFFFFFFF )
    return *_errno();
  return 0;
}
