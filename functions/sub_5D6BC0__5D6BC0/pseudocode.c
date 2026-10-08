double __userpurge sub_5D6BC0@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // edi
  float a2; // [esp+0h] [ebp-14h]

  if ( a3 == 4 && !unk_B3B728 ) /*0x5d6bd1*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d6beb*/
    UI_GetVirtualScreenWidth(); /*0x5d6bed*/
    Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5d6bfb*/
    sub_588C50((_DWORD *)*(_DWORD *)(a1 + 0x28)); /*0x5d6c0f*/
    st7_0 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB6); /*0x5d6c24*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, flt_A6B1F0); /*0x5d6c43*/
    a2 = (float)Double_To_SInt32(st7_0); /*0x5d6c5d*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, a2); /*0x5d6c65*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, 0.0); /*0x5d6c78*/
  }
  return st7_0; /*0x5d6c7e*/
}
