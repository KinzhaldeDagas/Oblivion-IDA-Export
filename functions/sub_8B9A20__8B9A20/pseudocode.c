bhkCharacterProxy *__thiscall sub_8B9A20(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkCharacterProxy *v4; // eax
  bhkCharacterProxy *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8b9a4a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b9a50*/
  ++unk_BA7CFC; /*0x8b9a56*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b9a62*/
  v4 = (bhkCharacterProxy *)FormHeapAlloc(0x1E0u); /*0x8b9a67*/
  if ( v4 ) /*0x8b9a7d*/
    v5 = bhkCharacterProxy::bhkCharacterProxy(v4); /*0x8b9a86*/
  else
    v5 = 0; /*0x8b9a8a*/
  sub_89D610(this, (int)v5, a2); /*0x8b9a9c*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b9aa1*/
    unk_BA7CF8 = 0; /*0x8b9aaa*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b9ab9*/
  return v5; /*0x8b9ac1*/
}
