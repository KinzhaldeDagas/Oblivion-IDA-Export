BOOL __thiscall sub_59FF10(Tile **this, int a2, int a3)
{
  int v8; // edi

  v8 = (*((int (__thiscall **)(Tile **))*this + 0xD))(this);
  return sub_578FE0() == v8 && a2 == 9 && InterfaceManager_GetSingleton(0, 0)->altActiveTile == this[0xF];
}
