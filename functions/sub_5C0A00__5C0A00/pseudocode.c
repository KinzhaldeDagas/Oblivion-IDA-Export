double __userpurge sub_5C0A00@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // edi
  float a2; // [esp+0h] [ebp-14h]

  if ( a3 == 4 ) /*0x5c0a0b*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5c0a1e*/
    UI_GetVirtualScreenWidth(); /*0x5c0a20*/
    Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5c0a2e*/
    sub_588C50((_DWORD *)*(_DWORD *)(a1 + 0x30)); /*0x5c0a42*/
    st7_0 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x34), 0xFB6); /*0x5c0a57*/
    Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFB7u, flt_A6B1F0); /*0x5c0a76*/
    a2 = (float)Double_To_SInt32(st7_0); /*0x5c0a90*/
    Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFB7u, a2); /*0x5c0a98*/
    Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFB7u, 0.0); /*0x5c0aab*/
  }
  return st7_0; /*0x5c0ab1*/
}
