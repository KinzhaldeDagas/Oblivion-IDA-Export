void *__thiscall sub_472C40(float **Src, float a2, _DWORD *a3)
{
  void *result; // eax
  int v5; // eax
  _DWORD *v6; // edi
  int AnimationGroup; // eax
  size_t v8; // [esp+4h] [ebp-Ch]
  size_t v9; // [esp+4h] [ebp-Ch]
  size_t v10; // [esp+4h] [ebp-Ch]
  size_t v11; // [esp+4h] [ebp-Ch]
  size_t v12; // [esp+4h] [ebp-Ch]
  bool Srca; // [esp+Eh] [ebp-2h] BYREF
  char v14; // [esp+Fh] [ebp-1h] BYREF

  LODWORD(v8) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src, v8);
  LODWORD(v9) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src + 1, v9);
  LODWORD(v10) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src + 3, v10);
  Srca = *(Src + 4) != 0;
  LODWORD(v11) = 1;
  result = SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Srca, v11);
  if ( Srca )
  {
    v5 = (int)*(Src + 2);
    v14 = 0xFF;
    v6 = (_DWORD *)a3[0x27];
    AnimationGroup = TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v5 + 8));
    if ( sub_470960(v6, AnimationGroup, &a3) )
      v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a3 + 0x14))(a3, *(Src + 4));
    LODWORD(v12) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v14, v12);
    return sub_49F570(*(Src + 4), a2);
  }
  return result;
}
