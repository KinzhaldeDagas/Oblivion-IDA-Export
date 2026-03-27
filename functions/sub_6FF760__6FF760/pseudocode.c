char __thiscall sub_6FF760(unsigned __int16 *this, unsigned __int16 a2)
{
  DWORD CurrentThreadId; // eax
  bool v5; // zf
  __int64 v6; // rax
  int v7; // ecx
  void *v8; // edi
  size_t v9; // [esp-8h] [ebp-10h]

  if ( !a2 )
    return 0;
  EnterCriticalSection(&stru_B3F600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F67C;
  dword_B3F678 = CurrentThreadId;
  v5 = *(this + 0xB) == 0;
  *(this + 0xB) = a2;
  v6 = 4LL * a2;
  v7 = HIDWORD(v6) != 0;
  if ( v5 )
  {
    *((_DWORD *)this + 4) = FormHeapAlloc(v6 | -v7);
    *(this + 0xA) = 0;
  }
  else
  {
    v8 = (void *)FormHeapAlloc(v6 | -v7);
    LODWORD(v9) = 4 * *(this + 0xA);
    memcpy(v8, *((const void **)this + 4), v9);
    FormHeapFree(*((_DWORD *)this + 4));
    *((_DWORD *)this + 4) = v8;
  }
  v5 = dword_B3F67C-- == 1;
  if ( v5 )
    dword_B3F678 = 0;
  LeaveCriticalSection(&stru_B3F600);
  return 1;
}
