char __thiscall sub_5517F0(char *this, unsigned int **a2)
{
  char v3; // bl
  DWORD CurrentThreadId; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  DWORD TickCount; // eax
  int v8; // esi
  int v11; // [esp-4h] [ebp-28h]
  int v12; // [esp+14h] [ebp-10h] BYREF
  unsigned int v13; // [esp+20h] [ebp-4h]

  v12 = 0; /*0x551819*/
  v13 = 0; /*0x551823*/
  if ( !a2 || !sub_5512A0(a2) || !strlen((const char *)sub_5512A0(a2)) ) /*0x551843*/
    return 0; /*0x551914*/
  v3 = 0; /*0x55185c*/
  EnterCriticalSection(&unk_B39C00); /*0x55185e*/
  CurrentThreadId = GetCurrentThreadId(); /*0x551864*/
  ++unk_B39C7C; /*0x55186a*/
  unk_B39C78 = CurrentThreadId; /*0x551871*/
  v5 = sub_5512A0(a2); /*0x551880*/
  if ( sub_4A1AB0((_DWORD *)this + 1, v5, &v12) || (v6 = sub_551250(a2), sub_4A1AB0((_DWORD *)this + 1, v6, &v12)) ) /*0x5518a0*/
  {
    TickCount = GetTickCount(); /*0x5518a9*/
    v8 = v12; /*0x5518af*/
    v11 = v12; /*0x5518b3*/
    *(_DWORD *)(v12 + 0xC) = TickCount; /*0x5518b6*/
    sub_5506B0(this, v11); /*0x5518b9*/
    sub_558520(*(_DWORD **)(v8 + 8)); /*0x5518c1*/
    v3 = 1; /*0x5518c6*/
  }
  else
  {
    v8 = v12; /*0x5518ca*/
  }
  if ( unk_B39C7C-- == 1 ) /*0x5518ce*/
    unk_B39C78 = 0; /*0x5518d7*/
  LeaveCriticalSection(&unk_B39C00); /*0x5518e6*/
  v13 = 0xFFFFFFFF; /*0x5518ee*/
  if ( v8 ) /*0x5518f6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x5518fc*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x55190e*/
  }
  return v3; /*0x551916*/
}
