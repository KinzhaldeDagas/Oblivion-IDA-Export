void __userpurge sub_59DAA0(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v16; // [esp+18h] [ebp+4h]
  int v19; // [esp+18h] [ebp+4h]

  if ( a6 == 0xF )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+10h+a3] }
    v9 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+10h+a3]
    }
    v16 = Double_To_SInt32(v9);
    __asm
    {
      fild    [esp+10h+arg_0]
      fstp    [esp+10h+arg_0]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x44));
    __asm { fsubr   [esp+10h+arg_0] }
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x48), 0xFB6);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; a3
    }
    Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+10h+arg_0] }
    v19 = Double_To_SInt32(Float);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x48), (_DWORD *)0xFB7, a2b);
  }
}
