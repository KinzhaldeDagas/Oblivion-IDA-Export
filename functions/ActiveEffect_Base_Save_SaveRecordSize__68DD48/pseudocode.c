int __usercall ActiveEffect_Base_Save_::SaveRecordSize@<eax>(int a1@<esi>, int Src, int a3, int a4, int a5, char a6)
{
  Src = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1); /*0x68dd5b*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 2u); /*0x68dd66*/
  return ActiveEffect_Base_Save_::SaveMagicItem(a1, Src, a3, a4, a5, a6);
}
