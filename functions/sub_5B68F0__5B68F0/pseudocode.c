void __userpurge sub_5B68F0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  double v11; // st7
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v15; // ecx
  int v19; // [esp+10h] [ebp+4h]
  int v20; // [esp+10h] [ebp+4h]

  if ( a6 == 0x29 || a6 == 0x2D || a7 && *(_DWORD *)(a7 + 0x10) == *(_DWORD *)(a1 + 0x58) )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    v9 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v19 = Double_To_SInt32(v9);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    dword ptr [esi+88h]
    }
    *(float *)(a1 + 0x88) = _ET1;
    sub_57D7F0();
    __asm { fstp    [esp+10h+var_8] }
    v11 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+10h+var_8]
    }
    v12 = Double_To_SInt32(v11);
    v13 = *(_DWORD **)(a1 + 0x58);
    v20 = v12;
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    dword ptr [esi+8Ch] }
    *(float *)(a1 + 0x8C) = _ET1;
    Tile_GetFloat(v13, 0xFDA);
    v15 = *(_DWORD **)(a1 + 0x58);
    __asm { fstp    dword ptr [esi+0E4h] }
    *(float *)(a1 + 0xE4) = _ET1;
    Tile_GetFloat(v15, 0xFD9);
    __asm { fstp    dword ptr [esi+0E8h] }
    *(float *)(a1 + 0xE8) = _ET1;
  }
}
