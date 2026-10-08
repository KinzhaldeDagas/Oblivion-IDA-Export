bhkRefObject *__thiscall sub_8B7E80(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8b7eaa*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b7eb0*/
  ++unk_BA7CFC; /*0x8b7eb6*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b7ebf*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b7ec4*/
  if ( v4 ) /*0x8b7eda*/
    v5 = sub_8B7D50(v4); /*0x8b7ee3*/
  else
    v5 = 0; /*0x8b7ee7*/
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8b7f01*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b7f03*/
    unk_BA7CF8 = 0; /*0x8b7f0c*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b7f1b*/
  return v5; /*0x8b7f23*/
}
