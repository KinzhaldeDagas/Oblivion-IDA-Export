bhkRefObject *__thiscall sub_8B67F0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8b681a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b6820*/
  ++unk_BA7CFC; /*0x8b6826*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b682f*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8b6834*/
  if ( v4 ) /*0x8b684a*/
    v5 = sub_8B6650(v4); /*0x8b6853*/
  else
    v5 = 0; /*0x8b6857*/
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8b6871*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b6873*/
    unk_BA7CF8 = 0; /*0x8b687c*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b688b*/
  return v5; /*0x8b6893*/
}
