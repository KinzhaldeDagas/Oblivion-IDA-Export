void __userpurge sub_596900(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  Tile *v7; // esi
  int v8; // eax
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-Ch]

  v7 = *(Tile **)(a1 + 0x30);
  if ( *(_DWORD *)(a1 + 0x2C) )
  {
    InterfaceManager_GetSingleton(0, 1);
    v8 = Double_To_SInt32(st7_0);
    a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v8) >> 0x20) - v8) >> 6)
                    + ((unsigned int)(((unsigned __int64)(0x77777777LL * v8) >> 0x20) - v8) >> 0x1F));
    Tile_SetFloat(v7, (_DWORD *)0xFB7, a2);
    Tile_SetFloat(v7, (_DWORD *)0xFB7, 0.0);
    Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1);
    sub_57D730(Singleton, 1);
  }
}
