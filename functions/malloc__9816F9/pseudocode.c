void *__cdecl malloc(size_t Size)
{
  int v1; // edi
  LPVOID (__stdcall *v2)(HANDLE, DWORD, SIZE_T); // ebx
  int v3; // edi
  int v4; // eax
  LPVOID v5; // eax
  void *v6; // esi
  SIZE_T v8; // [esp-10h] [ebp-14h]

  if ( (unsigned int)Size > 0xFFFFFFE0 ) /*0x981701*/
  {
    _callnewh(Size); /*0x9817a7*/
    *_errno() = 0xC; /*0x9817b2*/
    return 0; /*0x9817b8*/
  }
  v2 = HeapAlloc; /*0x981708*/
  HIDWORD(v8) = v1; /*0x98170f*/
  while ( 1 ) /*0x981718*/
  {
    v3 = Size; /*0x981718*/
    if ( !dword_BA9E10[0x127] ) /*0x981712*/
    {
      _FF_MSGBANNER(Size); /*0x98171c*/
      _NMSG_WRITE(Size, 0x1E); /*0x981723*/
      __crtExitProcess(0xFFu); /*0x98172d*/
    }
    if ( unk_BAABC0 == 1 ) /*0x98173c*/
    {
      if ( (_DWORD)Size ) /*0x981740*/
        v4 = Size; /*0x981742*/
      else
        v4 = 1; /*0x981748*/
      LODWORD(v8) = v4; /*0x981749*/
LABEL_15:
      v5 = v2((HANDLE)dword_BA9E10[0x127], 0, v8); /*0x98176a*/
      goto LABEL_16; /*0x981771*/
    }
    if ( unk_BAABC0 != 3 || (v5 = (LPVOID)V6_HeapAlloc(Size)) == 0 ) /*0x98175a*/
    {
      if ( !(_DWORD)Size ) /*0x98175e*/
        v3 = 1; /*0x981762*/
      LODWORD(v8) = (v3 + 0xF) & 0xFFFFFFF0; /*0x981769*/
      goto LABEL_15; /*0x981769*/
    }
LABEL_16:
    v6 = v5; /*0x981773*/
    if ( v5 ) /*0x981777*/
      return v6; /*0x981777*/
    if ( !dword_BA9E10[0x1EE] ) /*0x981779*/
      break; /*0x981779*/
    if ( !_callnewh(Size) ) /*0x981785*/
      goto LABEL_21; /*0x98178d*/
  }
  *_errno() = 0xC; /*0x981796*/
LABEL_21:
  *_errno() = 0xC; /*0x981798*/
  return v6; /*0x9817a4*/
}
