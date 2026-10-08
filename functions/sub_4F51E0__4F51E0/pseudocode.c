// IsIdlePlaying command helper. Looks up target ActorAnimData and returns 1.0 only when ActorAnimData_IsIdleInactive reports false; prints the result in console mode.
char __cdecl CmdHelper_IsIdlePlaying(int a1, int a2, int a3, double *a4)
{
  _DWORD *v4; // eax

  *a4 = 0.0; /*0x4f51ed*/
  if ( a1 ) /*0x4f51ef*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x164))(a1); /*0x4f51f9*/
    if ( v4 ) /*0x4f51fd*/
    {
      if ( !ActorAnimData_IsIdleInactive(v4) ) /*0x4f5201*/
        *a4 = 1.0; /*0x4f520c*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f520e*/
    Interface_ConsolePrint("Is Idle Playing >> %0.2f", *a4); /*0x4f5224*/
  return 1; /*0x4f522e*/
}
