int __thiscall sub_8BA7F0(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  int v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u);
  v5 = (int)v4;
  if ( v4 )
  {
    bhkRefObject::bhkRefObject(v4);
    *(_DWORD *)v5 = &bhkWorldObject::`vftable';
    *(_DWORD *)(v5 + 0xC) = 0;
    ++dword_BA7D34;
    *(_DWORD *)v5 = &bhkPhantom::`vftable';
    ++dword_BA7F5C;
    *(_BYTE *)(v5 + 0x10) = 0;
    *(_DWORD *)v5 = &bhkAabbPhantom::`vftable';
    ++dword_BA802C;
    *(_BYTE *)(v5 + 0x10) = 0;
  }
  else
  {
    v5 = 0;
  }
  sub_89F5D0(this, v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
