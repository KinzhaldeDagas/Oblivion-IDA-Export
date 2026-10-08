void __thiscall sub_4A1F90(_DWORD **this, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  int v6[3]; // [esp-4h] [ebp-Ch] BYREF

  EnterCriticalSection(&MEMORY[0xB35380]); /*0x4a1f99*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a1f9f*/
  ++unk_B353FC; /*0x4a1fa5*/
  unk_B353F8 = CurrentThreadId; /*0x4a1fac*/
  v6[2] = (int)v6; /*0x4a1fba*/
  v6[0] = a3; /*0x4a1fbe*/
  if ( a3 ) /*0x4a1fc0*/
    InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x4a1fc6*/
  sub_6AA3B0(*(this + 2), a2, v6[0], v6[1]); /*0x4a1fd4*/
  if ( unk_B353FC-- == 1 ) /*0x4a1fd9*/
    unk_B353F8 = 0; /*0x4a1fe2*/
  LeaveCriticalSection(&MEMORY[0xB35380]); /*0x4a1ff1*/
}
