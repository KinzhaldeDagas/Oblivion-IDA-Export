// Writes the 2-byte actor-animation payload length, then delegates to ActorAnimData_SaveState when animation data exists and the actor is eligible. Mirrors Actor_GetAnimationSaveStateSize.
void __cdecl sub_473C40(int a1, _DWORD *a2)
{
  size_t v2; // [esp-4h] [ebp-10h]
  int Src; // [esp+8h] [ebp-4h] BYREF

  Src = 0; /*0x473c4d*/
  if ( a2 ) /*0x473c55*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) ) /*0x473c63*/
      Src = ActorAnimData_GetSaveStateSize(a2, a1); /*0x473c74*/
  }
  LODWORD(v2) = 2; /*0x473c78*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &Src, v2); /*0x473c85*/
  if ( a2 ) /*0x473c8c*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) ) /*0x473c9a*/
      ActorAnimData_SaveState((int)a2, a1); /*0x473ca3*/
  }
}
