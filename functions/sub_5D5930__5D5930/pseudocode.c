void __userpurge sub_5D5930(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  int v8; // esi
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-18h]
  float Float; // [esp+Ch] [ebp-Ch]

  if ( *(_DWORD *)(a1 + 0x2C) )
  {
    InterfaceManager_GetSingleton(0, 1);
    v8 = Double_To_SInt32(st7_0) / 0x78;
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB5);
    if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB0) > Float && v8 < 0 || Float > 0.0 && v8 > 0 )
    {
      a2 = (float)-v8;
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, a2);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0);
      Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1);
      sub_57D730(Singleton, 1);
    }
  }
}
