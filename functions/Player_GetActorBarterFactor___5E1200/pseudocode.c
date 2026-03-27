void __stdcall Player_GetActorBarterFactor_(_DWORD *a1)
{
  int v2; // eax
  signed int v3; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+0h] [ebp-8h]
  float retaddr; // [esp+8h] [ebp+0h]

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x284))(a1, 7);
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x284))(a1);
  retaddr = Calc_LuckModifiedSkill(v2, 0x1D);
  v5 = (*(int (__thiscall **)(_DWORD *, PlayerCharacter *, int))(*a1 + 0x224))(a1, TESDataHandler_g_PlayerRef, v4);
  v3 = Double_To_SInt32(*(float *)&a1);
  Calc_ActorBarterFactor_(v3, v5);
}
