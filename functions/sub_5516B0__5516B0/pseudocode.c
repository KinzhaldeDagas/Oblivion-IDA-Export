char __thiscall sub_5516B0(char *this, unsigned int **a2)
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

  v12 = 0; /*0x5516d9*/
  v13 = 0; /*0x5516e3*/
  if ( !a2 || !sub_551250(a2) || !strlen((const char *)sub_551250(a2)) ) /*0x551703*/
    return 0; /*0x5517d4*/
  v3 = 0; /*0x55171c*/
  EnterCriticalSection(&unk_B39C00); /*0x55171e*/
  CurrentThreadId = GetCurrentThreadId(); /*0x551724*/
  ++unk_B39C7C; /*0x55172a*/
  unk_B39C78 = CurrentThreadId; /*0x551731*/
  v5 = sub_551250(a2); /*0x551740*/
  if ( sub_4A1AB0((_DWORD *)this + 1, v5, &v12) || (v6 = sub_5512A0(a2), sub_4A1AB0((_DWORD *)this + 1, v6, &v12)) ) /*0x551760*/
  {
    TickCount = GetTickCount(); /*0x551769*/
    v8 = v12; /*0x55176f*/
    v11 = v12; /*0x551773*/
    *(_DWORD *)(v12 + 0xC) = TickCount; /*0x551776*/
    sub_5506B0(this, v11); /*0x551779*/
    sub_559190(*(char ****)(v8 + 8)); /*0x551781*/
    v3 = 1; /*0x551786*/
  }
  else
  {
    v8 = v12; /*0x55178a*/
  }
  if ( unk_B39C7C-- == 1 ) /*0x55178e*/
    unk_B39C78 = 0; /*0x551797*/
  LeaveCriticalSection(&unk_B39C00); /*0x5517a6*/
  v13 = 0xFFFFFFFF; /*0x5517ae*/
  if ( v8 ) /*0x5517b6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x5517bc*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x5517ce*/
  }
  return v3; /*0x5517d6*/
}
