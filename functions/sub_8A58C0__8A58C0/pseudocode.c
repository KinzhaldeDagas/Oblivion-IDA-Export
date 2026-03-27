int *__thiscall sub_8A58C0(int *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  int *v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkRefObject *)FormHeapAlloc(0x1Cu);
  if ( v4 )
    v5 = (int *)sub_8A4150(v4);
  else
    v5 = 0;
  sub_8A4E30(this, v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
