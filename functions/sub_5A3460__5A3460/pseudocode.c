void __userpurge sub_5A3460(int a1@<ecx>, double st7_0@<st0>, int arg0, int a4)
{
  InterfaceManager *Singleton; // edi
  double v9; // st4
  float a2; // [esp+4h] [ebp-14h]
  double a3; // [esp+10h] [ebp-8h]
  float v12; // [esp+1Ch] [ebp+4h]
  float v13; // [esp+1Ch] [ebp+4h]
  float v14; // [esp+1Ch] [ebp+4h]

  if ( arg0 == 2 )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    v9 = sub_57D7A0();
    v12 = (float)Double_To_SInt32(st7_0 * dbl_A2FAA0 + *(float *)Singleton->unk020);
    a3 = v12 - sub_588C50((_DWORD *)*(_DWORD *)(a1 + 0x28));
    v13 = a3 / Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFB6);
    a2 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB1);
    Round_Float(v13, a2);
    v14 = v9;
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, flt_A6B1F0);
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, v14);
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0);
  }
}
