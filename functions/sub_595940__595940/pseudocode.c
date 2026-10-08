void __thiscall sub_595940(_DWORD *this, int arg0, Tile *a3)
{
  InterfaceManager *Singleton; // esi
  _DWORD *v5; // edi
  double VirtualScreenWidth; // st7
  float a2; // [esp+0h] [ebp-18h]
  double v8; // [esp+10h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]

  if ( arg0 == 2 || arg0 == 4 || arg0 == 6 || arg0 == 8 || arg0 == 0xA ) /*0x595962*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x59597b*/
    v5 = (_DWORD *)sub_595240(this, arg0 - 1); /*0x595982*/
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x595984*/
    v9 = (float)Double_To_SInt32(VirtualScreenWidth * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5959a1*/
    v8 = v9 - sub_588C50(v5); /*0x5959b9*/
    v10 = v8 / Tile_GetFloat(a3, 0xFB6); /*0x5959c9*/
    Tile_SetFloat(a3, 0xFB7u, flt_A6B1F0); /*0x5959db*/
    a2 = (float)Double_To_SInt32(v10); /*0x5959f4*/
    Tile_SetFloat(a3, 0xFB7u, a2); /*0x5959fc*/
    Tile_SetFloat(a3, 0xFB7u, 0.0); /*0x595a0e*/
  }
}
