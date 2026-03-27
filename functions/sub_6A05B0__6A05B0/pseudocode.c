int __thiscall sub_6A05B0(_DWORD *this)
{
  int v3; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(*(this + 7) + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v3, 4u);
  v4 = *(_DWORD *)(*(this + 0xD) + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v4, 4u);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x78))(this, 0, *(this + 7));
}
