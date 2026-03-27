char __cdecl sub_5072B0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax
  int v8; // eax

  v7 = a3;
  if ( !a3 || (*(_DWORD *)(a3 + 8) & 0x4000) != 0 )
  {
    v7 = a5;
    if ( !a5 )
      return 0;
  }
  v8 = *(_DWORD *)(v7 + 0xC);
  if ( ShowMessageBox_button > (char)0xFFFFFFFF && v8 == ShowMessageBox_pScriptRefID )
  {
    *a7 = (double)ShowMessageBox_button;
    ShowMessageBox_button = 0xFF;
    ShowMessageBox_pScriptRefID = 0;
    return 1;
  }
  else
  {
    *a7 = dbl_A3D360;
    return 1;
  }
}
