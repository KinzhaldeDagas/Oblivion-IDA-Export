void __userpurge sub_5DE280(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  int v8; // eax
  float a2; // [esp+0h] [ebp-Ch]

  InterfaceManager_GetSingleton(0, 1);
  v8 = Double_To_SInt32(st7_0);
  a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v8) >> 0x20) - v8) >> 6)
                  + ((unsigned int)(((unsigned __int64)(0x77777777LL * v8) >> 0x20) - v8) >> 0x1F));
  Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFB7, a2);
  Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFB7, 0.0);
}
