char __thiscall sub_5515B0(char *this, int a2, int *a3)
{
  DWORD CurrentThreadId; // eax
  char v5; // bl
  char v6; // al
  int v7; // esi
  int v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+20h] [ebp-4h]

  EnterCriticalSection(&unk_B39C00); /*0x5515dc*/
  CurrentThreadId = GetCurrentThreadId(); /*0x5515e2*/
  ++unk_B39C7C; /*0x5515e8*/
  unk_B39C78 = CurrentThreadId; /*0x5515f1*/
  v10 = 0; /*0x5515f6*/
  v11 = 0; /*0x551607*/
  v5 = 0; /*0x55160b*/
  v6 = sub_4A1AB0((_DWORD *)this + 1, a2, &v10); /*0x55160d*/
  v7 = v10; /*0x551614*/
  if ( v6 ) /*0x551618*/
  {
    *(_DWORD *)(v7 + 0xC) = GetTickCount(); /*0x55162a*/
    OB_NiSmartPointer_Assign_010201A0(a3, (int *)(v7 + 8)); /*0x55162d*/
    sub_5506B0(this, v7); /*0x551635*/
    sub_559190((char ***)*a3); /*0x55163c*/
    sub_558520((_DWORD *)*a3); /*0x551643*/
    v5 = 1; /*0x551648*/
  }
  if ( unk_B39C7C-- == 1 ) /*0x55164c*/
    unk_B39C78 = 0; /*0x551655*/
  LeaveCriticalSection(&unk_B39C00); /*0x551660*/
  v11 = 0xFFFFFFFF; /*0x551668*/
  if ( v7 ) /*0x551670*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x551676*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x551688*/
  }
  return v5; /*0x55168c*/
}
