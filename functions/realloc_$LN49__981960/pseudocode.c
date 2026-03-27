void __usercall realloc_::_LN49(void *a1@<ebx>, int a2@<ebp>, unsigned int a3@<esi>)
{
  LPVOID v3; // edi
  int *v4; // eax
  int *v5; // esi
  DWORD LastError; // eax
  int *v7; // eax
  int *v8; // esi
  DWORD v9; // eax

  if ( *(_DWORD *)(a2 - 0x20) )
  {
    v3 = *(LPVOID *)(a2 - 0x1C);
  }
  else
  {
    if ( !a3 )
      a3 = 1;
    a3 = (a3 + 0xF) & 0xFFFFFFF0;
    *(_DWORD *)(a2 + 0xC) = a3;
    v3 = HeapReAlloc(hHeap, 0, a1, a3);
  }
  if ( !v3 )
  {
    if ( dword_BAA5C8 )
    {
      if ( !_callnewh(a3) )
      {
        v4 = _errno();
        if ( !*(_DWORD *)(a2 - 0x20) )
        {
          v5 = v4;
          LastError = GetLastError();
          *v5 = _get_errno_from_oserr(LastError);
          JUMPOUT(0x981A35);
        }
        JUMPOUT(0x981A2F);
      }
      JUMPOUT(0x98188B);
    }
    v7 = _errno();
    if ( *(_DWORD *)(a2 - 0x20) )
    {
      *v7 = 0xC;
    }
    else
    {
      v8 = v7;
      v9 = GetLastError();
      *v8 = _get_errno_from_oserr(v9);
    }
  }
  JUMPOUT(0x981A37);
}
