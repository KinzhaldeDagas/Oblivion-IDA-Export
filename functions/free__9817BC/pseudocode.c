void __cdecl free(void *Memory)
{
  int block; // eax
  int *v2; // esi
  DWORD LastError; // eax

  if ( Memory )
  {
    if ( dword_BAABC0 == 3 )
    {
      _lock(4);
      block = __sbh_find_block(Memory);
      if ( block )
        __sbh_free_block(block, Memory);
      _unlock(4);
      free_::_LN15();
    }
    else if ( !HeapFree(hHeap, 0, Memory) )
    {
      v2 = _errno();
      LastError = GetLastError();
      *v2 = _get_errno_from_oserr(LastError);
    }
  }
}
