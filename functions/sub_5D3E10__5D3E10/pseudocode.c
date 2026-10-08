char __userpurge sub_5D3E10@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  int v8; // edi
  InterfaceManager *Singleton; // eax
  Tile *altActiveTile; // ecx
  double Float; // st7

  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x34))( /*0x5d3e1b*/
         a1,
         a4,
         a3,
         a2);
  if ( sub_578FE0() == v8 && a5 == 0xB ) /*0x5d3e2b*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d3e31*/
    if ( Singleton ) /*0x5d3e3b*/
      altActiveTile = Singleton->altActiveTile; /*0x5d3e3d*/
    else
      altActiveTile = 0; /*0x5d3e45*/
    *(_DWORD *)(a1 + 0x58) = altActiveTile; /*0x5d3e49*/
    if ( altActiveTile ) /*0x5d3e4c*/
    {
      Float = Tile_GetFloat(altActiveTile, 0xFA8); /*0x5d3e53*/
      if ( Float > dbl_A6C730 ) /*0x5d3e63*/
      {
        ShowUIMessageBox( /*0x5d3e82*/
          (char *)MEMORY[0xB38D00],
          a2,
          a3,
          Float,
          (char *)stru_B38760,
          (int)sub_5D3B70,
          1,
          (char *)MEMORY[0xB38D00],
          MEMORY[0xB38CF8]);
        *(_BYTE *)(a1 + 0x5C) = 1; /*0x5d3e8b*/
        return 1; /*0x5d3e92*/
      }
    }
    *(_DWORD *)(a1 + 0x58) = 0; /*0x5d3e95*/
  }
  return 0; /*0x5d3e8a*/
}
