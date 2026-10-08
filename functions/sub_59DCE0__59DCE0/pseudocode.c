double __userpurge sub_59DCE0@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  int v5; // eax
  float a2; // [esp+0h] [ebp-Ch]

  InterfaceManager_GetSingleton(0, 1); /*0x59dce8*/
  v5 = Double_To_SInt32(st7_0); /*0x59dcf0*/
  a2 = (float)(int)(((int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 6) /*0x59dd18*/
                  + ((unsigned int)(((unsigned __int64)(0x77777777LL * v5) >> 0x20) - v5) >> 0x1F));
  Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2); /*0x59dd20*/
  Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, 0.0); /*0x59dd33*/
  return st7_0; /*0x59dd38*/
}
