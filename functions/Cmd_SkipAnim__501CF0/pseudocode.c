// SkipAnim command: writes ActorAnimData +0x90 skip/action byte to 5.
char __cdecl Cmd_SkipAnim(int a1, int a2, int a3)
{
  ActorAnimData *v3; // eax

  if ( a3 ) /*0x501cf7*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x164))(a3) ) /*0x501d03*/
    {
      v3 = (ActorAnimData *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x164))(a3); /*0x501d15*/
      ActorAnimData_SetUpdateState(v3, 5); /*0x501d19*/
    }
  }
  return 1; /*0x501d20*/
}
