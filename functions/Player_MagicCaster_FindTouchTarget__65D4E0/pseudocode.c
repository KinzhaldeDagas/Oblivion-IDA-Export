int __usercall Player_MagicCaster_FindTouchTarget@<eax>(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v5; // esi
  int *ActorWithinReach; // eax
  float v8; // [esp+Ch] [ebp-8h]

  v5 = a1 - 0x5C;
  (*(void (__usercall **)(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)(a1 - 0x5C) + 0x26C))(a1 - 0x5C, a3, a2);
  v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0xEC))(v5) * a3;
  ActorWithinReach = GetActorWithinReach__(0, (int *)TESDataHandler_g_PlayerRef, v8);
  if ( ActorWithinReach )
    return (*(int (__thiscall **)(int *))(*ActorWithinReach + 0x124))(ActorWithinReach);
  ActorWithinReach = (int *)sub_579540();
  if ( ActorWithinReach )
    return (*(int (__thiscall **)(int *))(*ActorWithinReach + 0x124))(ActorWithinReach);
  else
    return 0;
}
