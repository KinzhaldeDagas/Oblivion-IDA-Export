char __cdecl sub_5072B0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax
  int v8; // eax

  v7 = a3; /*0x5072b0*/
  if ( !a3 || (*(_DWORD *)(a3 + 8) & 0x4000) != 0 ) /*0x5072c1*/
  {
    v7 = a5; /*0x5072c3*/
    if ( !a5 ) /*0x5072c9*/
      return 0; /*0x507315*/
  }
  v8 = *(_DWORD *)(v7 + 0xC); /*0x5072d4*/
  if ( ShowMessageBox_button > (char)0xFFFFFFFF && v8 == MEMORY[0xB361C8] ) /*0x5072df*/
  {
    *a7 = (double)ShowMessageBox_button; /*0x5072f0*/
    ShowMessageBox_button = 0xFF; /*0x5072f2*/
    MEMORY[0xB361C8] = 0; /*0x5072f9*/
    return 1; /*0x507303*/
  }
  else
  {
    *a7 = dbl_A3D360; /*0x507310*/
    return 1; /*0x507312*/
  }
}
