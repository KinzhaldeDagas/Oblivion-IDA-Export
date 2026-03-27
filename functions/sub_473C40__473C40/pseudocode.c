void __cdecl sub_473C40(int a1, _DWORD *a2)
{
  size_t v3; // [esp-4h] [ebp-10h]
  int Src; // [esp+8h] [ebp-4h] BYREF

  Src = 0;
  if ( a2 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) )
      Src = sub_473420(a2, a1);
  }
  LODWORD(v3) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v3);
  if ( a2 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) )
      sub_473600((int)a2, a1);
  }
}
