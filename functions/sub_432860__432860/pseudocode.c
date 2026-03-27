char __thiscall sub_432860(volatile LONG *this)
{
  DWORD CurrentThreadId; // eax
  int v2; // esi
  int v3; // edi

  LOBYTE(CurrentThreadId) = sub_4322B0(this);
  if ( (_BYTE)CurrentThreadId )
  {
    v2 = *((_DWORD *)ModelLoaderPtr + 6);
    v3 = *(_DWORD *)(v2 + 8);
    CurrentThreadId = GetCurrentThreadId();
    if ( v3 != CurrentThreadId )
      LOBYTE(CurrentThreadId) = sub_431F50((volatile LONG *)v2);
  }
  return CurrentThreadId;
}
