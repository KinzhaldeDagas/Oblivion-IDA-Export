void __userpurge sub_5DE110(
        int a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  int v8; // esi
  bool v9; // al
  InterfaceManager *Singleton; // eax
  _DWORD *v11; // ebx
  double v13; // st7
  Tile *v14; // esi
  double Float; // st7
  double v16; // st7
  float a2; // [esp+0h] [ebp-18h]
  float a2a; // [esp+0h] [ebp-18h]
  float a2b; // [esp+0h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp+4h]
  int v26; // [esp+1Ch] [ebp+4h]
  Tile *v29; // [esp+20h] [ebp+8h]

  if ( (unsigned int)(a6 - 1) > 0x2F )
  {
    v8 = 0x30;
    v9 = 0;
  }
  else
  {
    v8 = a6 - 1;
    v9 = a6 == 6
      || a6 == 0xD
      || a6 == 0xF
      || a6 == 0x11
      || a6 == 0x13
      || a6 == 0x17
      || a6 == 0x1D
      || a6 == 0x21
      || a6 == 0x23
      || a6 == 0x25;
  }
  if ( v8 == 2 || v9 )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    v11 = *(_DWORD **)(a1 + 4 * v8 + 0x24);
    _EDI = Singleton;
    if ( v8 == 2 )
    {
      sub_57D7F0();
      __asm { fstp    [esp+14h+var_8] }
      v13 = sub_57D7F0();
      __asm
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+14h+var_8]
      }
      v24 = Double_To_SInt32(v13);
      __asm { fild    [esp+14h+arg_0] }
      __asm { fstp    [esp+14h+arg_0] }
      sub_588CF0(v11);
      __asm { fsubr   [esp+14h+arg_0] }
      v14 = a7;
      __asm { fstp    [esp+18h+var_8] }
      Float = Tile_GetFloat(a7, 0xFB6);
      __asm { fdivr   [esp+14h+var_8] }
    }
    else
    {
      v16 = sub_57D7A0();
      __asm
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+20h]
      }
      v26 = Double_To_SInt32(v16);
      __asm { fild    [esp+14h+arg_0] }
      __asm { fstp    [esp+14h+arg_0] }
      sub_588C50(v11);
      __asm { fsubr   [esp+14h+arg_0] }
      v14 = a7;
      __asm { fstp    [esp+18h+var_8] }
      Float = Tile_GetFloat(a7, 0xFB6);
      __asm { fdivr   [esp+14h+var_8] }
    }
    __asm
    {
      fstp    [esp+18h+var_8]
      fld     dword ptr ds:0A6B1F0h
    }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(v14, (_DWORD *)0xFB7, a2);
    __asm
    {
      fld     [esp+14h+var_8]
      fstp    [esp+14h+arg_4]
      fld     [esp+14h+arg_4]
    }
    v29 = (Tile *)Double_To_SInt32(Float);
    __asm { fild    [esp+14h+arg_4] }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(v14, (_DWORD *)0xFB7, a2a);
    __asm { fldz }
    __asm { fstp    [esp+18h+a2]; a3 }
    Tile_SetFloat(v14, (_DWORD *)0xFB7, a2b);
  }
}
