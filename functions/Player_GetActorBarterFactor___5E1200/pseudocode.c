void __stdcall Player_GetActorBarterFactor_(_DWORD *a1)
{
  SInt32 v2; // eax
  signed int v3; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+0h] [ebp-8h]
  float retaddr; // [esp+8h] [ebp+0h]

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x284))(a1, 7); /*0x5e1213*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x284))(a1); /*0x5e1220*/
  retaddr = Calc_LuckModifiedSkill(v2, 0x1D); /*0x5e1228*/
  v5 = (*(int (__thiscall **)(_DWORD *, PlayerCharacter *, int))(*a1 + 0x224))(a1, reference, v4); /*0x5e1246*/
  v3 = Double_To_SInt32(*(float *)&a1); /*0x5e1247*/
  Calc_ActorBarterFactor_(v3, v5); /*0x5e124d*/
}
