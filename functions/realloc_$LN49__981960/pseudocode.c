void __usercall realloc_::_LN49(void *a1@<ebx>, int a2@<ebp>, unsigned int a3@<esi>)
{
  LPVOID v3; // edi
  int *v4; // eax
  int *v5; // esi
  DWORD LastError; // eax
  int *v7; // eax
  int *v8; // esi
  DWORD v9; // eax

  if ( *(_DWORD *)(a2 - 0x20) ) /*0x981960*/
  {
    v3 = *(LPVOID *)(a2 - 0x1C); /*0x981997*/
  }
  else
  {
    if ( !a3 ) /*0x981968*/
      a3 = 1; /*0x98196a*/
    a3 = (a3 + 0xF) & 0xFFFFFFF0; /*0x98196e*/
    *(_DWORD *)(a2 + 0xC) = a3; /*0x981971*/
    v3 = HeapReAlloc((HANDLE)dword_BA9E10[0x127], 0, a1, a3); /*0x981984*/
  }
  if ( !v3 ) /*0x98199c*/
  {
    if ( dword_BA9E10[0x1EE] ) /*0x9819a2*/
    {
      if ( !_callnewh(a3) ) /*0x9819ab*/
      {
        v4 = _errno(); /*0x9819b9*/
        if ( !*(_DWORD *)(a2 - 0x20) ) /*0x9819be*/
        {
          v5 = v4; /*0x9819c3*/
          LastError = GetLastError(); /*0x9819c5*/
          *v5 = _get_errno_from_oserr(LastError); /*0x9819d2*/
          JUMPOUT(0x981A35); /*0x981a35*/
        }
        JUMPOUT(0x981A2F); /*0x981a2f*/
      }
      JUMPOUT(0x98188B); /*0x98188b*/
    }
    v7 = _errno(); /*0x9819de*/
    if ( *(_DWORD *)(a2 - 0x20) ) /*0x9819e3*/
    {
      *v7 = 0xC; /*0x9819e8*/
    }
    else
    {
      v8 = v7; /*0x981a50*/
      v9 = GetLastError(); /*0x981a52*/
      *v8 = _get_errno_from_oserr(v9); /*0x981a5e*/
    }
  }
  JUMPOUT(0x981A37); /*0x981a37*/
}
