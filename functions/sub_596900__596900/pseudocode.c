double __userpurge sub_596900@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  Tile *v4; // esi
  int v5; // eax
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-Ch]

  v4 = *(Tile **)(a1 + 0x30); /*0x596906*/
  if ( *(_DWORD *)(a1 + 0x2C) ) /*0x596901*/
  {
    InterfaceManager_GetSingleton(0, 1); /*0x59690f*/
    v5 = Double_To_SInt32(st7_0); /*0x596917*/
    a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 6) /*0x59693e*/
                    + ((unsigned int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 0x1F));
    Tile_SetFloat(v4, (_DWORD *)0xFB7, a2); /*0x596946*/
    Tile_SetFloat(v4, (_DWORD *)0xFB7, 0.0); /*0x596958*/
    Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x596963*/
    sub_57D730(Singleton, 1); /*0x59696d*/
  }
  return st7_0; /*0x596972*/
}
