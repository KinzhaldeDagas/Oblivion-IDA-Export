void __userpurge sub_5C2790(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        _DWORD *a7)
{
  double v10; // st7
  double v12; // st7
  double v14; // st7
  int v18; // [esp+18h] [ebp+4h]
  int v19; // [esp+18h] [ebp+4h]
  int v20; // [esp+18h] [ebp+4h]

  _ESI = a1;
  _EDI = InterfaceManager_GetSingleton(0, 1);
  if ( *(_DWORD *)(_ESI + 4 * a6 + 0x94) )
  {
    v10 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v18 = Double_To_SInt32(v10);
    sub_588C50(a7);
    __asm { fisub   [esp+18h+arg_0] }
    __asm { fstp    [esp+1Ch+var_8] }
    Tile_GetFloat(a7, 0xFCB);
    __asm { fsubr   [esp+18h+var_8] }
    __asm { fstp    dword ptr [esi+898h] }
    *(float *)(_ESI + 0x898) = _ET1;
  }
  sub_57D7F0();
  __asm { fstp    [esp+14h+var_8] }
  v12 = sub_57D7F0();
  __asm
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+14h+var_8]
  }
  v19 = Double_To_SInt32(v12);
  sub_588CF0(*(_DWORD **)(_ESI + 0x34));
  __asm { fisub   [esp+14h+arg_0] }
  __asm { fstp    dword ptr [esi+89Ch] }
  *(float *)(_ESI + 0x89C) = _ET1;
  if ( a6 == 2 && (_EDI->unk0C0[0x16] & 4) == 0 )
  {
    v14 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+20h]
    }
    v20 = Double_To_SInt32(v14);
    __asm
    {
      fild    [esp+14h+arg_0]
      fsub    dword ptr [esi+8A0h]
      fstp    dword ptr [esi+898h]
    }
    *(float *)(_ESI + 0x898) = _ET1;
  }
}
