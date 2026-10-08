int *__thiscall sub_8A58C0(NodeVoid *this, int a2)
{
  DWORD CurrentThreadId; // eax
  bhkRefObject *v4; // eax
  int *v5; // esi

  EnterCriticalSection(&unk_BA7C80); /*0x8a58ea*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8a58f0*/
  ++unk_BA7CFC; /*0x8a58f6*/
  unk_BA7CF8 = CurrentThreadId; /*0x8a58ff*/
  v4 = (bhkRefObject *)FormHeapAlloc(0x1Cu); /*0x8a5904*/
  if ( v4 ) /*0x8a591a*/
    v5 = (int *)sub_8A4150(v4); /*0x8a5923*/
  else
    v5 = 0; /*0x8a5927*/
  sub_8A4E30(this, v5, a2); /*0x8a5939*/
  if ( unk_BA7CFC-- == 1 ) /*0x8a593e*/
    unk_BA7CF8 = 0; /*0x8a5947*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8a5956*/
  return v5; /*0x8a595e*/
}
