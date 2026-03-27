void *__cdecl realloc(void *Memory, size_t NewSize)
{
  unsigned int v3; // esi
  int block; // eax
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  size_t v9; // [esp-4h] [ebp-34h]
  int v10; // [esp+10h] [ebp-20h]
  void *Dst; // [esp+14h] [ebp-1Ch]
  LPVOID Dsta; // [esp+14h] [ebp-1Ch]

  if ( !Memory )
  {
    LODWORD(v9) = NewSize;
    return malloc(v9);
  }
  v3 = NewSize;
  if ( !(_DWORD)NewSize )
  {
    free(Memory);
    return 0;
  }
  if ( dword_BAABC0 != 3 )
  {
    while ( v3 <= 0xFFFFFFE0 )
    {
      if ( !v3 )
        v3 = 1;
      if ( HeapReAlloc(hHeap, 0, Memory, v3) )
        JUMPOUT(0x981A61);
      if ( !dword_BAA5C8 )
      {
        _errno();
        JUMPOUT(0x981A50);
      }
      if ( !_callnewh(v3) )
      {
        _errno();
        JUMPOUT(0x9819C3);
      }
    }
    goto LABEL_27;
  }
  Dst = 0;
  if ( (unsigned int)NewSize > 0xFFFFFFE0 )
  {
LABEL_27:
    _callnewh(v3);
    *_errno() = 0xC;
    return 0;
  }
  _lock(4);
  block = __sbh_find_block(Memory);
  v10 = block;
  if ( block )
  {
    if ( (unsigned int)NewSize <= dword_BAABCC )
    {
      if ( __sbh_resize_block(block, Memory, NewSize) )
      {
        Dst = Memory;
      }
      else
      {
        Dst = (void *)__sbh_alloc_block(v5, NewSize);
        if ( Dst )
        {
          v6 = *((_DWORD *)Memory + 0xFFFFFFFF) - 1;
          if ( v6 >= (unsigned int)NewSize )
            v6 = NewSize;
          LODWORD(v9) = v6;
          memcpy(Dst, Memory, v9);
          v10 = __sbh_find_block(Memory);
          __sbh_free_block(v10, Memory);
        }
      }
    }
    if ( !Dst )
    {
      v7 = (NewSize + 0xF) & 0xFFFFFFF0;
      LODWORD(NewSize) = v7;
      Dsta = HeapAlloc(hHeap, 0, v7);
      if ( Dsta )
      {
        v8 = *((_DWORD *)Memory + 0xFFFFFFFF) - 1;
        if ( v8 >= v7 )
          v8 = v7;
        LODWORD(v9) = v8;
        memcpy(Dsta, Memory, v9);
        __sbh_free_block(v10, Memory);
      }
    }
  }
  _unlock(4);
  return realloc_::_LN49(Memory, NewSize);
}
