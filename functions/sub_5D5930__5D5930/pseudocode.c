double __userpurge sub_5D5930@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  int v5; // esi
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-18h]
  float Float; // [esp+Ch] [ebp-Ch]

  if ( *(_DWORD *)(a1 + 0x2C) ) /*0x5d5936*/
  {
    InterfaceManager_GetSingleton(0, 1); /*0x5d5945*/
    v5 = Double_To_SInt32(st7_0) / 0x78; /*0x5d5970*/
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB5); /*0x5d597a*/
    if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB0) > Float && v5 < 0 || Float > 0.0 && v5 > 0 ) /*0x5d59ae*/
    {
      a2 = (float)-v5; /*0x5d59be*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, a2); /*0x5d59c6*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB7u, 0.0); /*0x5d59d9*/
      Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5d59e4*/
      sub_57D730(Singleton, 1); /*0x5d59ee*/
    }
  }
  return st7_0; /*0x5d59f4*/
}
