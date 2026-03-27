void __thiscall sub_595940(_DWORD *this, int arg0, Tile *a3)
{
  InterfaceManager *Singleton; // esi
  _DWORD *v9; // edi
  double v10; // st7
  double Float; // st7
  float a2; // [esp+0h] [ebp-18h]

  if ( arg0 == 2 || arg0 == 4 || arg0 == 6 || arg0 == 8 || arg0 == 0xA )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    v9 = (_DWORD *)sub_595240(this, arg0 - 1);
    v10 = sub_57D7A0();
    Double_To_SInt32(v10 * dbl_A2FAA0 + *(float *)Singleton->unk020);
    sub_588C50(v9);
    Float = Tile_GetFloat(a3, 0xFB6);
    Tile_SetFloat(a3, (_DWORD *)0xFB7, flt_A6B1F0);
    a2 = (float)Double_To_SInt32(Float);
    Tile_SetFloat(a3, (_DWORD *)0xFB7, a2);
    Tile_SetFloat(a3, (_DWORD *)0xFB7, 0.0);
  }
}
