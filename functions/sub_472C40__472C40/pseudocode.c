// Writes one AnimIdle slot state: presence/state metadata, idle form reference, optional loaded sequence marker, and nested BSAnimGroupSequence state.
void *__thiscall AnimIdle_SaveSlotState(float **Src, float a2, _DWORD *a3)
{
  void *result; // eax
  int v5; // eax
  _DWORD *v6; // edi
  int AnimationGroup; // eax
  bool Srca; // [esp+Eh] [ebp-2h] BYREF
  char source; // [esp+Fh] [ebp-1h] BYREF

  SaveLoad_SaveData(g_TESSaveLoadGame, Src, 4u); /*0x472c4d*/
  SaveLoad_SaveData(g_TESSaveLoadGame, Src + 1, 4u); /*0x472c5e*/
  SaveLoad_SaveData(g_TESSaveLoadGame, Src + 3, 4u); /*0x472c6f*/
  Srca = *(Src + 4) != 0; /*0x472c7f*/
  result = SaveLoad_SaveData(g_TESSaveLoadGame, &Srca, 1u); /*0x472c91*/
  if ( Srca ) /*0x472c9b*/
  {
    v5 = (int)*(Src + 2); /*0x472c9d*/
    source = 0xFF; /*0x472ca4*/
    v6 = (_DWORD *)a3[0x27]; /*0x472cad*/
    AnimationGroup = TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v5 + 8)); /*0x472cb8*/
    if ( ActorAnimData_FindAnimMapEntry(v6, AnimationGroup, &a3) ) /*0x472cc0*/
      source = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x14))(a3, *(Src + 4)); /*0x472cd9*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 1u); /*0x472cea*/
    return BSAnimGroupSequence_SaveState(*(Src + 4), a2); /*0x472cfa*/
  }
  return result; /*0x472cff*/
}
