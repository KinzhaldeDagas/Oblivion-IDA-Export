void __thiscall sub_584820(int this)
{
  NiObject *v5; // [esp-4h] [ebp-10h]

  if ( *(_DWORD *)(this + 0x24) == 2 )
  {
    Tile_SetFloat(*(Tile **)(this + 4), (_DWORD *)0xFA1, fConstant_2);
    v5 = *(NiObject **)(*(_DWORD *)(this + 4) + 0x24);
    InterfaceManager_GetSingleton(0, 1);
    sub_57EA20(v5, 1.0, 0.0);
    *(_DWORD *)(this + 0x24) = 1;
    sub_583CF0(this);
  }
}
