double __userpurge sub_5DE280@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  int v5; // eax
  float a2; // [esp+0h] [ebp-Ch]

  InterfaceManager_GetSingleton(0, 1); /*0x5de288*/
  v5 = Double_To_SInt32(st7_0); /*0x5de290*/
  a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 6) /*0x5de2b8*/
                  + ((unsigned int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 0x1F));
  Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, a2); /*0x5de2c0*/
  Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, 0.0); /*0x5de2d3*/
  return st7_0; /*0x5de2d8*/
}
