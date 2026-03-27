void __userpurge sub_59B6E0(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  double v9; // st7
  Tile *v10; // esi
  double Float; // st7
  double v13; // st7
  double v14; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  float a2c; // [esp+0h] [ebp-14h]
  int v22; // [esp+18h] [ebp+4h]
  int v24; // [esp+18h] [ebp+4h]
  Tile *v27; // [esp+1Ch] [ebp+8h]
  Tile *v29; // [esp+1Ch] [ebp+8h]

  if ( (unsigned int)(a6 - 1) <= 0xC && a6 == 6 )
  {
    _ESI = InterfaceManager_GetSingleton(0, 1);
    v9 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+20h]
    }
    v22 = Double_To_SInt32(v9);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588C50(*(_DWORD **)(a1 + 0x38));
    __asm { fsubr   [esp+10h+arg_0] }
    v10 = a7;
    __asm { fstp    qword ptr [esp+14h+a3] }
    Float = Tile_GetFloat(a7, 0xFB6);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    __asm
    {
      fstp    [esp+14h+arg_4]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; a3
    }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+10h+arg_4] }
    v27 = (Tile *)Double_To_SInt32(Float);
    __asm { fild    [esp+10h+arg_4] }
LABEL_7:
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2b);
    __asm { fldz }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2c);
    return;
  }
  if ( (unsigned int)(a6 - 1) <= 0xC && a6 == 3 )
  {
    _ESI = InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+10h+a3] }
    v13 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [esi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v24 = Double_To_SInt32(v13);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x2C));
    __asm { fsubr   [esp+10h+arg_0] }
    v10 = a7;
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    v14 = Tile_GetFloat(a7, 0xFB6);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    __asm
    {
      fstp    [esp+14h+arg_4]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; a3
    }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2a);
    __asm { fld     [esp+10h+arg_4] }
    v29 = (Tile *)Double_To_SInt32(v14);
    __asm { fild    [esp+10h+arg_4] }
    goto LABEL_7;
  }
}
