void __userpurge sub_59FD50(
        _DWORD *a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v9; // edx
  Tile *v10; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // ebx
  double v13; // st7
  double Float; // st7
  float a2; // [esp+0h] [ebp-1Ch]
  float a2a; // [esp+0h] [ebp-1Ch]
  float a2b; // [esp+0h] [ebp-1Ch]
  int v19; // [esp+20h] [ebp+4h]
  int v22; // [esp+20h] [ebp+4h]

  _EDI = a1;
  _EBP = InterfaceManager_GetSingleton(0, 1);
  if ( a6 == 0x11 || a6 == 0x13 || a6 == 0xF )
  {
    v10 = (Tile *)sub_59FA20(_EDI, a6);
    v12 = (_DWORD *)sub_59FA20(v11, v9 - 1);
    v13 = sub_57D7A0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [ebp+20h]
    }
    v19 = Double_To_SInt32(v13);
    __asm { fild    [esp+18h+arg_0] }
    __asm { fstp    [esp+18h+arg_0] }
    sub_588C50(v12);
    __asm { fsubr   [esp+18h+arg_0] }
    __asm
    {
      fsub    dword ptr [edi+74h]
      fstp    [esp+1Ch+var_8]
    }
    Float = Tile_GetFloat(v10, 0xFB6);
    __asm { fdivr   [esp+18h+var_8] }
    __asm
    {
      fstp    [esp+1Ch+arg_0]
      fld     dword ptr ds:0A6B1F0h
      fstp    [esp+1Ch+a2]; a3
    }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2);
    __asm { fld     [esp+18h+arg_0] }
    v22 = Double_To_SInt32(Float);
    __asm { fild    [esp+18h+arg_0] }
    __asm { fstp    [esp+1Ch+a2]; a3 }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+1Ch+a2]; a3 }
    Tile_SetFloat(v10, (_DWORD *)0xFB7, a2b);
  }
}
