double __userpurge sub_5A3460@<st0>(int a1@<ecx>, double st7_0@<st0>, int arg0, int a4)
{
  InterfaceManager *Singleton; // edi
  double VirtualScreenWidth; // st6
  float a2; // [esp+4h] [ebp-14h]
  double a3; // [esp+10h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]
  float v11; // [esp+1Ch] [ebp+4h]

  if ( arg0 == 2 ) /*0x5a346b*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a347e*/
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5a3480*/
    v9 = (float)Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5a349e*/
    a3 = v9 - sub_588C50((_DWORD *)*(_DWORD *)(a1 + 0x28)); /*0x5a34b3*/
    v10 = a3 / Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB6); /*0x5a34c8*/
    a2 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB1); /*0x5a34d4*/
    st7_0 = Round_Float(v10, a2); /*0x5a34df*/
    v11 = VirtualScreenWidth; /*0x5a34e7*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, flt_A6B1F0); /*0x5a34fc*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, v11); /*0x5a3511*/
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, 0.0); /*0x5a3524*/
  }
  return st7_0; /*0x5a352a*/
}
