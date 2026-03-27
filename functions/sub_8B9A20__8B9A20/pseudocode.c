bhkCharacterProxy *__thiscall sub_8B9A20(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkCharacterProxy *v4; // eax
  bhkCharacterProxy *v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkCharacterProxy *)FormHeapAlloc(0x1E0u);
  if ( v4 )
    v5 = bhkCharacterProxy::bhkCharacterProxy(v4);
  else
    v5 = 0;
  sub_89D610(this, (int)v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
