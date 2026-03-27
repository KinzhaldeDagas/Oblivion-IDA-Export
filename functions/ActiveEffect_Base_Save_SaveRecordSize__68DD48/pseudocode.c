int __usercall ActiveEffect_Base_Save_::SaveRecordSize@<eax>(int a1@<esi>, int Src, int a3, int a4, int a5, char a6)
{
  size_t v7; // [esp-4h] [ebp-8h]

  LODWORD(v7) = 2;
  Src = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1);
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v7);
  return ActiveEffect_Base_Save_::SaveMagicItem(a1, Src, a3, a4, a5, a6);
}
