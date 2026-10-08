bhkRefObject *__thiscall sub_8AF0E0(void *this, _DWORD **a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8af10a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8af110*/
  ++unk_BA7CFC; /*0x8af116*/
  unk_BA7CF8 = CurrentThreadId; /*0x8af11f*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8af124*/
  if ( v4 ) /*0x8af13a*/
    v5 = sub_8AF020(v4); /*0x8af143*/
  else
    v5 = 0; /*0x8af147*/
  sub_89F5D0(this, (int)v5, a2); /*0x8af159*/
  if ( unk_BA7CFC-- == 1 ) /*0x8af15e*/
    unk_BA7CF8 = 0; /*0x8af167*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8af176*/
  return v5; /*0x8af17e*/
}
