void __userpurge sub_5D8D60(
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
  _DWORD *a2; // [esp+0h] [ebp-1Ch]
  float a2a; // [esp+0h] [ebp-1Ch]
  float a2b; // [esp+0h] [ebp-1Ch]
  float a2c; // [esp+0h] [ebp-1Ch]
  int v24; // [esp+20h] [ebp+4h]
  int v29; // [esp+20h] [ebp+4h]

  if ( a6 == 5 )
  {
    _EDI = InterfaceManager_GetSingleton(0, 1);
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFB0);
    __asm { fstp    [esp+1Ch+var_10] }
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFAF);
    __asm { fstp    [esp+1Ch+a3]; a3 }
    sub_57D7F0();
    __asm { fstp    [esp+1Ch+var_8] }
    v9 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+1Ch+var_8]
    }
    v24 = Double_To_SInt32(v9);
    __asm
    {
      fild    [esp+1Ch+arg_0]
      fstp    [esp+1Ch+arg_0]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x38));
    __asm { fsubr   [esp+1Ch+arg_0] }
    __asm { fstp    [esp+20h+var_8] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA);
    __asm { fdivr   [esp+1Ch+var_8] }
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld1
      fld     [esp+18h+arg_0]
      fcom    st(1)
      fnstsw  ax
      fldz
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fstp    st
        fstp    st
        fstp    [esp+18h+arg_0]
      }
    }
    else
    {
      __asm
      {
        fstp    st(2)
        fcomp   st(1)
        fnstsw  ax
      }
      if ( (_AX & 0x4100) != 0 )
        __asm { fstp    [esp+18h+arg_0] }
      else
        __asm { fstp    st }
    }
    __asm
    {
      fld     [esp+18h+var_10]
      fsub    [esp+18h+a3]
      fmul    [esp+18h+arg_0]
      fst     [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fst     [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fld     st
    }
    v29 = Double_To_SInt32(Float);
    __asm
    {
      fild    [esp+18h+arg_0]
      fstp    [esp+18h+arg_0]
      fld     [esp+18h+arg_0]
      fld     st
      fsubp   st(2), st
      fxch    st(1)
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( (_AX & 0x100) != 0 )
      __asm { fsub    qword ptr ds:0A2F928h }
    __asm { fstp    [esp+18h+arg_0] }
    __asm
    {
      fld     [esp+1Ch+arg_0]
      fsubp   st(2), st
      fxch    st(1)
      fcomp   qword ptr ds:0A2FAA0h
      fnstsw  ax
      fstp    [esp+1Ch+a2]; float
    }
    if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
    {
      FloatFloor(*(float *)&a2);
      __asm
      {
        fadd    qword ptr ds:0A2F928h
        fadd    [esp+1Ch+a3]
        fstp    qword ptr [esp+1Ch+var_10]; a3
      }
    }
    else
    {
      FloatFloor(*(float *)&a2);
      __asm { fstp    qword ptr [esp+1Ch+var_10] }
    }
    __asm { fld     dword ptr ds:0A6B1F0h }
    __asm { fstp    [esp+1Ch+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFB3, a2a);
    __asm
    {
      fld     qword ptr [esp+18h+var_10]
      fstp    [esp+18h+arg_0]
    }
    __asm { fld     [esp+1Ch+arg_0] }
    __asm { fstp    [esp+1Ch+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFB3, a2b);
    __asm { fldz }
    __asm { fstp    [esp+1Ch+a2]; a3 }
    Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFB3, a2c);
  }
}
