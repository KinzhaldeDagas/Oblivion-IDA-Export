double __userpurge sub_59B850@<st0>(int a1@<ecx>, double st7_0@<st0>, signed int a3, int a4)
{
  int v5; // eax
  float a2; // [esp+0h] [ebp-8h]

  if ( a3 > 0xD ) /*0x59b858*/
  {
    InterfaceManager_GetSingleton(0, 1); /*0x59b85e*/
    v5 = Double_To_SInt32(st7_0); /*0x59b866*/
    a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 6) /*0x59b88e*/
                    + ((unsigned int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 0x1F));
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, a2); /*0x59b896*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, 0.0); /*0x59b8a9*/
  }
  return st7_0; /*0x59b8ae*/
}
