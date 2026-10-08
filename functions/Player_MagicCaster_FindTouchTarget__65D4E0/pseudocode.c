int __usercall Player_MagicCaster_FindTouchTarget@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // esi
  int *ActorWithinReach; // eax
  float v6; // [esp+Ch] [ebp-8h]

  v3 = a1 - 0x5C; /*0x65d4ed*/
  (*(void (__usercall **)(int@<ecx>, double@<st0>))(*(_DWORD *)(a1 - 0x5C) + 0x26C))(a1 - 0x5C, a2); /*0x65d4f5*/
  v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 0xEC))(v3) * a2; /*0x65d511*/
  ActorWithinReach = CombatController_FindActorWithinReach(0, (int *)reference, v6); /*0x65d51d*/
  if ( ActorWithinReach ) /*0x65d527*/
    return (*(int (__thiscall **)(int *))(*ActorWithinReach + 0x124))(ActorWithinReach); /*0x65d527*/
  ActorWithinReach = (int *)sub_579540(); /*0x65d529*/
  if ( ActorWithinReach ) /*0x65d530*/
    return (*(int (__thiscall **)(int *))(*ActorWithinReach + 0x124))(ActorWithinReach); /*0x65d541*/
  else
    return 0; /*0x65d543*/
}
