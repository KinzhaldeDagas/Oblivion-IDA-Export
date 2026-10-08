int __thiscall sub_6A05B0(_DWORD *this)
{
  unsigned int source; // [esp+4h] [ebp-8h] BYREF
  unsigned int v4; // [esp+8h] [ebp-4h] BYREF

  source = *(_DWORD *)(*(this + 7) + 0xC); /*0x6a05c2*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x6a05cd*/
  v4 = *(_DWORD *)(*(this + 0xD) + 0xC); /*0x6a05de*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v4, 4u); /*0x6a05e9*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x78))(this, 0, *(this + 7)); /*0x6a05fd*/
}
