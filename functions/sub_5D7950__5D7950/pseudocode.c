void __userpurge sub_5D7950(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  Tile *v8; // esi
  double v9; // st7
  double v11; // st7
  double Float; // st7
  double v14; // st7
  double v16; // st7
  float a2; // [esp+0h] [ebp-24h]
  float a2a; // [esp+0h] [ebp-24h]
  float a2b; // [esp+0h] [ebp-24h]
  double v20; // [esp+14h] [ebp-10h]
  double v22; // [esp+14h] [ebp-10h]
  double v24; // [esp+14h] [ebp-10h]
  double v26; // [esp+14h] [ebp-10h]
  int v32; // [esp+20h] [ebp-4h]

  if ( a5 == 0xA || a5 == 0xC )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    if ( a5 == 0xA )
      v8 = *(Tile **)(a1 + 0x38);
    else
      v8 = *(Tile **)(a1 + 0x40);
    Tile_GetFloat(v8, 0xFB0);
    __asm { fstp    [esp+20h+var_8] }
    Tile_GetFloat(v8, 0xFAF);
    __asm { fstp    [esp+20h+var_4] }
    sub_57D7F0();
    __asm { fstp    [esp+20h+var_10] }
    v9 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+20h+var_10]
    }
    LODWORD(v20) = Double_To_SInt32(v9);
    __asm { fild    dword ptr [esp+20h+var_10] }
    __asm { fstp    dword ptr [esp+20h+var_10] }
    sub_588CF0(v8);
    __asm { fsubr   dword ptr [esp+20h+var_10] }
    __asm { fstp    [esp+24h+var_10] }
    Tile_GetFloat(v8, 0xFCA);
    __asm
    {
      fdivr   [esp+20h+var_10]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      sub_57D7F0();
      __asm { fstp    [esp+20h+var_10] }
      v11 = sub_57D7F0();
      __asm
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+20h+var_10]
      }
      LODWORD(v22) = Double_To_SInt32(v11);
      __asm { fild    dword ptr [esp+20h+var_10] }
      __asm { fstp    dword ptr [esp+20h+var_10] }
      sub_588CF0(v8);
      __asm { fsubr   dword ptr [esp+20h+var_10] }
      __asm { fstp    [esp+24h+var_10] }
      Float = Tile_GetFloat(v8, 0xFCA);
      __asm
      {
        fdivr   [esp+20h+var_10]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 )
      {
LABEL_11:
        __asm
        {
          fstp    [esp+24h+var_10]
          fld     dword ptr ds:0A6B1F0h
        }
        __asm { fstp    [esp+24h+a2]; a3 }
        Tile_SetFloat(v8, (_DWORD *)0xFB3, a2);
        __asm
        {
          fld     [esp+20h+var_8]
          fld     [esp+20h+var_4]
          fld     st
          fsubp   st(2), st
          fxch    st(1)
          fmul    [esp+20h+var_10]
          faddp   st(1), st
          fadd    qword ptr ds:0A2FAA0h
          fstp    [esp+20h+var_4]
          fld     [esp+20h+var_4]
        }
        v32 = Double_To_SInt32(Float);
        __asm { fild    [esp+20h+var_4] }
        __asm { fstp    [esp+24h+a2]; a3 }
        Tile_SetFloat(v8, (_DWORD *)0xFB3, a2a);
        __asm { fldz }
        __asm { fstp    [esp+24h+a2]; a3 }
        Tile_SetFloat(v8, (_DWORD *)0xFB3, a2b);
        return;
      }
      __asm { fstp    st }
    }
    sub_57D7F0();
    __asm { fstp    [esp+20h+var_10] }
    v14 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+20h+var_10]
    }
    LODWORD(v24) = Double_To_SInt32(v14);
    __asm { fild    dword ptr [esp+20h+var_10] }
    __asm { fstp    dword ptr [esp+20h+var_10] }
    sub_588CF0(v8);
    __asm { fsubr   dword ptr [esp+20h+var_10] }
    __asm { fstp    [esp+24h+var_10] }
    Float = Tile_GetFloat(v8, 0xFCA);
    __asm
    {
      fdivr   [esp+20h+var_10]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 )
    {
      __asm { fstp    st }
      sub_57D7F0();
      __asm { fstp    [esp+20h+var_10] }
      v16 = sub_57D7F0();
      __asm
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+20h+var_10]
      }
      LODWORD(v26) = Double_To_SInt32(v16);
      __asm { fild    dword ptr [esp+20h+var_10] }
      __asm { fstp    dword ptr [esp+20h+var_10] }
      sub_588CF0(v8);
      __asm { fsubr   dword ptr [esp+20h+var_10] }
      __asm { fstp    [esp+24h+var_10] }
      Float = Tile_GetFloat(v8, 0xFCA);
      __asm { fdivr   [esp+20h+var_10] }
    }
    goto LABEL_11;
  }
}
