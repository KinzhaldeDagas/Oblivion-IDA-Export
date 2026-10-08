bhkRefObject *__thiscall sub_8AF3F0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi

  EnterCriticalSection(&unk_BA7C80); /*0x8af41a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8af420*/
  ++unk_BA7CFC; /*0x8af426*/
  unk_BA7CF8 = CurrentThreadId; /*0x8af42f*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8af434*/
  if ( v4 ) /*0x8af44a*/
    v5 = sub_8AF2C0(v4); /*0x8af453*/
  else
    v5 = 0; /*0x8af457*/
  (*(void (__thiscall **)(void *, bhkRefObject *, int))(*(_DWORD *)this + 0x80))(this, v5, a2); /*0x8af471*/
  if ( unk_BA7CFC-- == 1 ) /*0x8af473*/
    unk_BA7CF8 = 0; /*0x8af47c*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8af48b*/
  return v5; /*0x8af493*/
}
