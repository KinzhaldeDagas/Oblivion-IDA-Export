void *__cdecl malloc(size_t Size)
{
  int v1; // edi
  LPVOID (__stdcall *v2)(HANDLE, DWORD, SIZE_T); // ebx
  int v3; // edi
  int v4; // eax
  LPVOID v5; // eax
  void *v6; // esi
  SIZE_T v8; // [esp-10h] [ebp-14h]

  if ( (unsigned int)Size > 0xFFFFFFE0 )
  {
    _callnewh(Size);
    *_errno() = 0xC;
    return 0;
  }
  v2 = HeapAlloc;
  HIDWORD(v8) = v1;
  while ( 1 )
  {
    v3 = Size;
    if ( !hHeap )
    {
      _FF_MSGBANNER();
      _NMSG_WRITE(0x1E);
      __crtExitProcess(0xFFu);
    }
    if ( dword_BAABC0 == 1 )
    {
      if ( (_DWORD)Size )
        v4 = Size;
      else
        v4 = 1;
      LODWORD(v8) = v4;
LABEL_15:
      v5 = v2(hHeap, 0, v8);
      goto LABEL_16;
    }
    if ( dword_BAABC0 != 3 || (v5 = (LPVOID)V6_HeapAlloc(Size)) == 0 )
    {
      if ( !(_DWORD)Size )
        v3 = 1;
      LODWORD(v8) = (v3 + 0xF) & 0xFFFFFFF0;
      goto LABEL_15;
    }
LABEL_16:
    v6 = v5;
    if ( v5 )
      return v6;
    if ( !dword_BAA5C8 )
      break;
    if ( !_callnewh(Size) )
      goto LABEL_21;
  }
  *_errno() = 0xC;
LABEL_21:
  *_errno() = 0xC;
  return v6;
}
