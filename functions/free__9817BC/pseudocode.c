void __cdecl free(void *Memory)
{
  DWORD v1; // ebx
  int v2; // ebp
  char *block; // eax
  int *v4; // esi
  DWORD LastError; // eax

  if ( Memory ) /*0x9817cd*/
  {
    if ( unk_BAABC0 == 3 ) /*0x9817d6*/
    {
      _lock(4); /*0x9817da*/
      block = __sbh_find_block((int)Memory); /*0x9817e5*/
      if ( block ) /*0x9817f0*/
        __sbh_free_block(v1, block, (int)Memory); /*0x9817f4*/
      _unlock(4); /*0x981814*/
      free_::_LN15(v2); /*0x98181a*/
    }
    else if ( !HeapFree((HANDLE)dword_BA9E10[0x127], 0, Memory) ) /*0x981824*/
    {
      v4 = _errno(); /*0x981833*/
      LastError = GetLastError(); /*0x981835*/
      *v4 = _get_errno_from_oserr(LastError); /*0x981841*/
    }
  }
}
