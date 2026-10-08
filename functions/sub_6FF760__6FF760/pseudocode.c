char __thiscall sub_6FF760(unsigned __int16 *this, unsigned __int16 a2)
{
  DWORD CurrentThreadId; // eax
  bool v5; // zf
  __int64 v6; // rax
  int v7; // ecx
  void *v8; // edi

  if ( !a2 ) /*0x6ff76c*/
    return 0; /*0x6ff76f*/
  EnterCriticalSection(&unk_B3F600); /*0x6ff77a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ff780*/
  ++unk_B3F67C; /*0x6ff786*/
  unk_B3F678 = CurrentThreadId; /*0x6ff78d*/
  v5 = *(this + 0xB) == 0; /*0x6ff794*/
  *(this + 0xB) = a2; /*0x6ff7a0*/
  v6 = 4LL * a2; /*0x6ff7a6*/
  v7 = HIDWORD(v6) != 0; /*0x6ff7a8*/
  if ( v5 ) /*0x6ff7a4*/
  {
    *((_DWORD *)this + 4) = FormHeapAlloc(v6 | -v7); /*0x6ff7b8*/
    *(this + 0xA) = 0; /*0x6ff7bb*/
  }
  else
  {
    v8 = (void *)FormHeapAlloc(v6 | -v7); /*0x6ff7d5*/
    memcpy(v8, *((const void **)this + 4), 4 * *(this + 0xA)); /*0x6ff7e2*/
    FormHeapFree(*((_DWORD *)this + 4)); /*0x6ff7eb*/
    *((_DWORD *)this + 4) = v8; /*0x6ff7f3*/
  }
  v5 = unk_B3F67C-- == 1; /*0x6ff7f6*/
  if ( v5 ) /*0x6ff7fd*/
    unk_B3F678 = 0; /*0x6ff7ff*/
  LeaveCriticalSection(&unk_B3F600); /*0x6ff80e*/
  return 1; /*0x6ff76e*/
}
