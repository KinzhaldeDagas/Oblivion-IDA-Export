void *__cdecl realloc(void *Memory, size_t NewSize)
{
  int v2; // ebp
  void *result; // eax
  unsigned int v4; // esi
  char *block; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  size_t v8; // [esp-4h] [ebp-34h]
  char *v9; // [esp+10h] [ebp-20h]
  void *Dst; // [esp+14h] [ebp-1Ch]
  LPVOID Dsta; // [esp+14h] [ebp-1Ch]

  if ( !Memory ) /*0x98185b*/
  {
    LODWORD(v8) = NewSize; /*0x98185d*/
    return malloc(v8); /*0x981866*/
  }
  v4 = NewSize; /*0x98186b*/
  if ( !(_DWORD)NewSize ) /*0x981870*/
  {
    free(Memory); /*0x981873*/
    return 0; /*0x981a3c*/
  }
  if ( unk_BAABC0 != 3 ) /*0x981885*/
  {
    while ( v4 <= 0xFFFFFFE0 ) /*0x981a21*/
    {
      if ( !v4 ) /*0x9819f2*/
        v4 = 1; /*0x9819f4*/
      if ( HeapReAlloc((HANDLE)dword_BA9E10[0x127], 0, Memory, v4) ) /*0x9819ff*/
        JUMPOUT(0x981A61); /*0x981a61*/
      if ( !dword_BA9E10[0x1EE] ) /*0x981a11*/
      {
        _errno(); /*0x981a4b*/
        JUMPOUT(0x981A50); /*0x981a50*/
      }
      if ( !_callnewh(v4) ) /*0x981a1c*/
      {
        _errno(); /*0x981a3d*/
        JUMPOUT(0x9819C3); /*0x9819c3*/
      }
    }
    goto LABEL_27; /*0x981a21*/
  }
  Dst = 0; /*0x98188d*/
  if ( (unsigned int)NewSize > 0xFFFFFFE0 ) /*0x981893*/
  {
LABEL_27:
    _callnewh(v4); /*0x981a23*/
    *_errno() = 0xC; /*0x981a2f*/
    return 0; /*0x981a2f*/
  }
  _lock(4); /*0x98189b*/
  block = __sbh_find_block((int)Memory); /*0x9818a5*/
  v9 = block; /*0x9818ab*/
  if ( block ) /*0x9818b0*/
  {
    if ( (unsigned int)NewSize <= unk_BAABCC ) /*0x9818bc*/
    {
      if ( __sbh_resize_block(block, (int)Memory, NewSize) ) /*0x9818c1*/
      {
        Dst = Memory; /*0x9818cd*/
      }
      else
      {
        Dst = __sbh_alloc_block(NewSize); /*0x9818d9*/
        if ( Dst ) /*0x9818de*/
        {
          v6 = *((_DWORD *)Memory + 0xFFFFFFFF) - 1; /*0x9818e3*/
          if ( v6 >= (unsigned int)NewSize ) /*0x9818e6*/
            v6 = NewSize; /*0x9818e8*/
          memcpy(Dst, Memory, v6); /*0x9818ef*/
          v9 = __sbh_find_block((int)Memory); /*0x9818fa*/
          __sbh_free_block((DWORD)Memory, v9, (int)Memory); /*0x9818ff*/
        }
      }
    }
    if ( !Dst ) /*0x98190a*/
    {
      v4 = (NewSize + 0xF) & 0xFFFFFFF0; /*0x981919*/
      Dsta = HeapAlloc((HANDLE)dword_BA9E10[0x127], 0, v4); /*0x98192d*/
      if ( Dsta ) /*0x981932*/
      {
        v7 = *((_DWORD *)Memory + 0xFFFFFFFF) - 1; /*0x981937*/
        if ( v7 >= v4 ) /*0x98193a*/
          v7 = (NewSize + 0xF) & 0xFFFFFFF0; /*0x98193c*/
        memcpy(Dsta, Memory, v7); /*0x981943*/
        __sbh_free_block((DWORD)Memory, v9, (int)Memory); /*0x98194c*/
      }
    }
  }
  _unlock(4); /*0x981990*/
  realloc_::_LN49(Memory, v2, v4); /*0x981996*/
  return result; /*0x981a37*/
}
