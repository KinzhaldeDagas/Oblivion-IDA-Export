bool __thiscall sub_5E6C10(MobileObject *this)
{
  Tile *OpenMenuTile; // eax
  Tile *v3; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x5e6c19*/
  v3 = OpenMenuTile; /*0x5e6c1e*/
  return OpenMenuTile /*0x5e6c54*/
      && Tile_GetParentMenu(OpenMenuTile)
      && Tile::IsVisible(v3)
      && this->process
      && ((unsigned __int8 (__thiscall *)(LowProcess *))this->process->Unk_72)(this->process);
}
