bool __thiscall sub_5E6C10(MobileObject *this)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v3; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
  v3 = OpenMenuTile;
  return OpenMenuTile
      && Tile_GetParentMenu(OpenMenuTile)
      && sub_5893B0(v3)
      && this->process
      && ((unsigned __int8 (__thiscall *)(LowProcess *))this->process->Unk_72)(this->process);
}
