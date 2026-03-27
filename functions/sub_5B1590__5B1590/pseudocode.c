void __userpurge sub_5B1590(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double v9; // st7
  int v10; // eax
  double Float; // st7
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  int v18; // [esp+18h] [ebp+4h]
  int v20; // [esp+18h] [ebp+4h]

  _ESI = a1;
  if ( a6 == 0xC )
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
    v10 = Double_To_SInt32(v9);
    __asm { fld     dword ptr [esi+58h] }
    v18 = v10;
    __asm
    {
      fiadd   [esp+10h+arg_0]
      fstp    qword ptr [esp+10h+a3]
    }
    sub_588CF0(*(_DWORD **)(_ESI + 0x30));
    __asm { fsubr   qword ptr [esp+10h+a3] }
    __asm { fstp    qword ptr [esp+14h+a3]; a3 }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(_ESI + 0x34), 0xFB6);
    __asm { fdivr   qword ptr [esp+10h+a3] }
    __asm
    {
      fstp    [esp+14h+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+14h+a2]; a3
    }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+10h+arg_0] }
    v20 = Double_To_SInt32(Float);
    __asm { fild    [esp+10h+arg_0] }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+14h+a2]; a3 }
    Tile_SetFloat(*(Tile **)(_ESI + 0x34), (_DWORD *)0xFB7, a2b);
  }
}
