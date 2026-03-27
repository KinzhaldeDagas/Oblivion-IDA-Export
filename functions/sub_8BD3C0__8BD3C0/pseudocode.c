bhkCachingShapePhantom *__thiscall sub_8BD3C0(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkCachingShapePhantom *v4; // eax
  bhkCachingShapePhantom *v5; // esi

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v4 = (bhkCachingShapePhantom *)FormHeapAlloc(0x14u);
  if ( v4 )
    v5 = bhkCachingShapePhantom::bhkCachingShapePhantom(v4);
  else
    v5 = 0;
  sub_89F5D0(this, (int)v5, a2);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v5;
}
