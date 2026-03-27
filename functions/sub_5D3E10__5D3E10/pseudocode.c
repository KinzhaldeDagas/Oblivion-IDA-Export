char __userpurge sub_5D3E10@<al>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v8; // edi
  InterfaceManager *Singleton; // eax
  Tile *altActiveTile; // ecx
  double Float; // st7

  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x34))(
         a1,
         a5,
         a4,
         a3);
  if ( sub_578FE0() == v8 && a6 == 0xB )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    if ( Singleton )
      altActiveTile = Singleton->altActiveTile;
    else
      altActiveTile = 0;
    *(_DWORD *)(a1 + 0x58) = altActiveTile;
    if ( altActiveTile )
    {
      Float = Tile_GetFloat(altActiveTile, 0xFA8);
      if ( Float > dbl_A6C730 )
      {
        ShowUIMessageBox(
          (char *)MessageButtonTextNo,
          a2,
          a3,
          a4,
          Float,
          (const char *)dword_B38760,
          (int)sub_5D3B70,
          1,
          (const char *)MessageButtonTextNo,
          MessageButtonTextYes);
        *(_BYTE *)(a1 + 0x5C) = 1;
        return 1;
      }
    }
    *(_DWORD *)(a1 + 0x58) = 0;
  }
  return 0;
}
