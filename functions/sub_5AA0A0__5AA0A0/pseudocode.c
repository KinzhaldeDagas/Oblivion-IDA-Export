void __thiscall sub_5AA0A0(int this, int a2, int a3)
{
  Tile *v8; // ecx

  sub_57BD80();
  v8 = *(Tile **)(this + 0x28);
  *(_DWORD *)(this + 0x3C) = 0;
  if ( v8 )
  {
    Tile_SetFloat(v8, (_DWORD *)0xFA1, 1.0);
    InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0;
  }
}
