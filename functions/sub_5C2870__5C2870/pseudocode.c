double __userpurge sub_5C2870@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  int v5; // eax
  Tile **Singleton; // eax
  float a2; // [esp+0h] [ebp-Ch]

  if ( *(_DWORD *)(a1 + 0x34) ) /*0x5c2874*/
  {
    InterfaceManager_GetSingleton(0, 1); /*0x5c287e*/
    v5 = Double_To_SInt32(st7_0); /*0x5c2886*/
    a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 6) /*0x5c28ae*/
                    + ((unsigned int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 0x1F));
    Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFB7u, a2); /*0x5c28b6*/
    Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFB7u, 0.0); /*0x5c28c9*/
    Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5c28d4*/
    sub_57D730(Singleton, 1); /*0x5c28de*/
  }
  return st7_0; /*0x5c28e3*/
}
