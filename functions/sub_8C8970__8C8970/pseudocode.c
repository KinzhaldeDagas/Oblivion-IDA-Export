bhkRefObject *__thiscall sub_8C8970(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8c899a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8c89a0*/
  ++unk_BA7CFC; /*0x8c89a6*/
  unk_BA7CF8 = CurrentThreadId; /*0x8c89af*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8c89b4*/
  if ( v4 ) /*0x8c89ca*/
    v5 = sub_8C8830(v4); /*0x8c89d3*/
  else
    v5 = 0; /*0x8c89d7*/
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8c89f1*/
  if ( unk_BA7CFC-- == 1 ) /*0x8c89f3*/
    unk_BA7CF8 = 0; /*0x8c89fc*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8c8a0b*/
  return v5; /*0x8c8a13*/
}
