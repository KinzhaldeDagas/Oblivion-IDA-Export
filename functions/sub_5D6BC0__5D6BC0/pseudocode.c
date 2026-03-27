void __userpurge sub_5D6BC0(int a1@<ecx>, double st7_0@<st0>, int a3, int a4)
{
  InterfaceManager *Singleton; // edi
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]

  if ( a3 == 4 && !byte_B3B728 )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    sub_57D7A0();
    Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020);
    sub_588C50((_DWORD *)*(_DWORD *)(a1 + 0x28));
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB6);
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, flt_A6B1F0);
    a2 = (float)Double_To_SInt32(Float);
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, a2);
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0);
  }
}
