int __thiscall sub_8BA7F0(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  int v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8ba81c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8ba822*/
  ++unk_BA7CFC; /*0x8ba82d*/
  unk_BA7CF8 = CurrentThreadId; /*0x8ba835*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8ba83a*/
  v5 = (int)v4; /*0x8ba83f*/
  if ( v4 ) /*0x8ba850*/
  {
    bhkRefObject::bhkRefObject(v4); /*0x8ba854*/
    *(_DWORD *)v5 = &bhkWorldObject::`vftable'; /*0x8ba859*/
    *(_DWORD *)(v5 + 0xC) = 0; /*0x8ba85f*/
    ++unk_BA7D34; /*0x8ba862*/
    *(_DWORD *)v5 = &bhkPhantom::`vftable'; /*0x8ba868*/
    ++unk_BA7F5C; /*0x8ba86e*/
    *(_BYTE *)(v5 + 0x10) = 0; /*0x8ba874*/
    *(_DWORD *)v5 = &bhkAabbPhantom::`vftable'; /*0x8ba877*/
    ++unk_BA802C; /*0x8ba87d*/
    *(_BYTE *)(v5 + 0x10) = 0; /*0x8ba883*/
  }
  else
  {
    v5 = 0; /*0x8ba888*/
  }
  sub_89F5D0(this, v5, a2); /*0x8ba89a*/
  if ( unk_BA7CFC-- == 1 ) /*0x8ba89f*/
    unk_BA7CF8 = 0; /*0x8ba8a7*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8ba8b2*/
  return v5; /*0x8ba8ba*/
}
