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

  v8 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x34))(
         a1,
         a5,
         a4,
         a3);
  if ( sub_578FE0() != v8 )
    return 0;
  if ( a6 != 0xB )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  v10 = Singleton ? Singleton->altActiveTile : 0;
  if ( !v10 || Tile_GetFloat(v10, 0xFA8) < dbl_A6C730 )
    return 0;
  v11 = *(_DWORD **)(a1 + 0x54);
  Float = Tile_GetFloat(v10, 0xFAE);
  v13 = Double_To_SInt32(Float);
  v14 = 0;
  for ( *(_DWORD *)(a1 + 0x4C) = 0; v11; ++v14 )
  {
    if ( !*v11 )
      break;
    if ( *(_DWORD *)(a1 + 0x4C) )
      goto LABEL_15;
    if ( v13 == v14 )
      *(_DWORD *)(a1 + 0x4C) = *v11;
    v11 = (_DWORD *)v11[1];
  }
  if ( !*(_DWORD *)(a1 + 0x4C) )
    return 0;
LABEL_15:
  *(_DWORD *)(a1 + 0x58) = v10;
  ShowUIMessageBox(
    (char *)MessageButtonTextNo,
    a2,
    a3,
    a4,
    Float,
    (const char *)dword_B38760,
    (int)sub_5AECA0,
    1,
    (const char *)MessageButtonTextNo,
    MessageButtonTextYes);
  *(_BYTE *)(a1 + 0x64) = 1;
  return 1;
}
