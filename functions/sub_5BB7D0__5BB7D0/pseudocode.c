// positive sp value has been detected, the output may be wrong!
int __usercall sub_5BB7D0@<eax>(
        Tile *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        Menu *a4@<esi>,
        double a5@<st2>,
        double a6@<st1>)
{
  double Float; // st7
  char v7; // al
  _DWORD *v9; // [esp-18h] [ebp-18h]
  float v10; // [esp-14h] [ebp-14h]

  Tile_SetFloat(a1, v9, v10);
  Float = 0.0;
  Tile_SetFloat(*(Tile **)(a2 + 0x40), (_DWORD *)0xFB3, 0.0);
  sub_5B8FC0((_DWORD **)a2, 0);
  EnableMenu(a4, a5, a6, 0.0, 1);
  sub_58FBA0(a3, a5, a6, 0.0, 0);
  v7 = BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]);
  if ( v7 == (char)0xFF )
  {
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a2 + 0x28), 0xFAE);
    v7 = Double_To_SInt32(Float);
  }
  if ( v7 > 5 )
  {
    v7 = 5;
  }
  else if ( v7 < 1 )
  {
    sub_5BB210((_DWORD *)a2, a6, Float, (_DWORD *)1, 0);
    return a3;
  }
  sub_5BB210((_DWORD *)a2, a6, Float, (_DWORD *)v7, 0);
  return a3;
}
