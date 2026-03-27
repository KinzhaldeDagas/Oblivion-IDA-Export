void __thiscall sub_584390(int this)
{
  _DWORD *v5; // ecx
  double v6; // st5
  InterfaceManager *Singleton; // eax
  float Float; // [esp+8h] [ebp-4h]

  v5 = *(_DWORD **)(this + 4);
  if ( !v5 )
  {
    v6 = flt_A41304;
    goto LABEL_4;
  }
  Float = Tile_GetFloat(v5, 0xFDB);
  if ( 0.0 == Float )
  {
    v6 = Tile_GetFloat((_DWORD *)*(_DWORD *)(this + 4), 0xFDC);
LABEL_4:
    Float = v6;
  }
  sub_584300(this, Float);
  *(_DWORD *)(this + 0x24) = 8;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  sub_583C30(Singleton);
}
