char __userpurge sub_5AEDF0@<al>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v8; // esi
  InterfaceManager *Singleton; // eax
  Tile *v10; // ebx
  _DWORD *v11; // esi
  double Float; // st7
  int v13; // eax
  int v14; // edx

  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x34))( /*0x5aedfc*/
         a1,
         a5,
         a4,
         a3);
  if ( sub_578FE0() != v8 ) /*0x5aee05*/
    return 0; /*0x5aee05*/
  if ( a6 != 0xB ) /*0x5aee10*/
    return 0; /*0x5aee10*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5aee1a*/
  v10 = Singleton ? Singleton->altActiveTile : 0;
  if ( !v10 || Tile_GetFloat(v10, 0xFA8) < dbl_A6C730 ) /*0x5aee4f*/
    return 0; /*0x5aee4f*/
  v11 = *(_DWORD **)(a1 + 0x54); /*0x5aee51*/
  Float = Tile_GetFloat(v10, 0xFAE); /*0x5aee5b*/
  v13 = Double_To_SInt32(Float); /*0x5aee60*/
  v14 = 0; /*0x5aee65*/
  for ( *(_DWORD *)(a1 + 0x4C) = 0; v11; ++v14 ) /*0x5aee6c*/
  {
    if ( !*v11 ) /*0x5aee70*/
      break; /*0x5aee74*/
    if ( *(_DWORD *)(a1 + 0x4C) ) /*0x5aee76*/
      goto LABEL_15; /*0x5aee7a*/
    if ( v13 == v14 ) /*0x5aee7e*/
      *(_DWORD *)(a1 + 0x4C) = *v11; /*0x5aee80*/
    v11 = (_DWORD *)v11[1]; /*0x5aee83*/
  }
  if ( !*(_DWORD *)(a1 + 0x4C) ) /*0x5aee8d*/
    return 0; /*0x5aeec9*/
LABEL_15:
  *(_DWORD *)(a1 + 0x58) = v10; /*0x5aee93*/
  ShowUIMessageBox( /*0x5aeeb3*/
    (char *)MEMORY[0xB38D00],
    a2,
    a3,
    a4,
    Float,
    (const char *)stru_B38760,
    (int)sub_5AECA0,
    1,
    (const char *)MEMORY[0xB38D00],
    MEMORY[0xB38CF8]);
  *(_BYTE *)(a1 + 0x64) = 1; /*0x5aeebb*/
  return 1; /*0x5aeebf*/
}
