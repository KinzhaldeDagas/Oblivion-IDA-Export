BOOL __thiscall sub_59FF10(int (__thiscall ***this)(Tile **), int a2, int a3)
{
  int v4; // edi

  v4 = (*this)[0xD]((Tile **)this); /*0x59ff1b*/
  return sub_578FE0() == v4 /*0x59ff44*/
      && a2 == 9
      && (int (__thiscall **)(Tile **))InterfaceManager_GetSingleton(0, 0)->altActiveTile == *(this + 0xF);
}
