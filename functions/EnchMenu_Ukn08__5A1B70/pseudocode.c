void __userpurge EnchMenu_Ukn08(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  Tile *v7; // esi
  double VirtualScreenHeight; // st7
  double Float; // st7
  _DWORD *a2; // [esp+0h] [ebp-1Ch]
  float a2a; // [esp+0h] [ebp-1Ch]
  float a2b; // [esp+0h] [ebp-1Ch]
  float a2c; // [esp+0h] [ebp-1Ch]
  int v24; // [esp+20h] [ebp+4h]
  int v29; // [esp+20h] [ebp+4h]

  if ( a6 == 0xA ) /*0x5a1b7b*/
  {
    v7 = *(Tile **)(a1 + 0x60); /*0x5a1b8b*/
  }
  else
  {
    if ( a6 != 0xB ) /*0x5a1b80*/
      return; /*0x5a1b80*/
    v7 = *(Tile **)(a1 + 0x68); /*0x5a1b86*/
  }
  _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5a1ba2*/
  Tile_GetFloat(v7, 0xFB0); /*0x5a1ba4*/
  __asm { fstp    [esp+1Ch+var_10] } /*0x5a1ba9*/
  Tile_GetFloat(v7, 0xFAF); /*0x5a1bb4*/
  __asm { fstp    [esp+1Ch+a3]; a3 } /*0x5a1bb9*/
  UI_GetVirtualScreenHeight(); /*0x5a1bbd*/
  __asm { fstp    [esp+1Ch+var_8] } /*0x5a1bc2*/
  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5a1bc6*/
  __asm /*0x5a1bcb*/
  {
    fmul    qword ptr ds:0A2FAA0h
    fadd    dword ptr [edi+28h]
    fsubr   [esp+1Ch+var_8]
  }
  v24 = Double_To_SInt32(VirtualScreenHeight); /*0x5a1bdd*/
  __asm { fild    [esp+1Ch+arg_0] } /*0x5a1be1*/
  __asm { fstp    [esp+1Ch+arg_0] }
  sub_588CF0(v7); /*0x5a1beb*/
  __asm { fsubr   [esp+1Ch+arg_0] } /*0x5a1bf0*/
  __asm { fstp    [esp+20h+var_8] }
  Float = Tile_GetFloat(v7, 0xFCA); /*0x5a1bff*/
  __asm { fdivr   [esp+1Ch+var_8] } /*0x5a1c04*/
  __asm
  {
    fstp    [esp+18h+arg_0]
    fld1
    fld     [esp+18h+arg_0]
    fcom    st(1)
    fnstsw  ax
    fldz
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5a1c19*/
  {
    __asm /*0x5a1c1e*/
    {
      fstp    st
      fstp    st
      fstp    [esp+18h+arg_0]
    }
  }
  else
  {
    __asm /*0x5a1c28*/
    {
      fstp    st(2)
      fcomp   st(1)
      fnstsw  ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5a1c31*/
      __asm { fstp    [esp+18h+arg_0] } /*0x5a1c33*/
    else
      __asm { fstp    st } /*0x5a1c39*/
  }
  __asm /*0x5a1c3b*/
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
  v29 = Double_To_SInt32(Float); /*0x5a1c5e*/
  __asm /*0x5a1c62*/
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
  if ( (_AX & 0x100) != 0 ) /*0x5a1c7f*/
    __asm { fsub    qword ptr ds:0A2F928h } /*0x5a1c81*/
  __asm { fstp    [esp+18h+arg_0] } /*0x5a1c87*/
  __asm
  {
    fld     [esp+1Ch+arg_0]
    fsubp   st(2), st
    fxch    st(1)
    fcomp   qword ptr ds:0A2FAA0h
    fnstsw  ax
    fstp    [esp+1Ch+a2]; float
  }
  if ( __SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x5a1ca2*/
  {
    FloatFloor(*(float *)&a2); /*0x5a1caf*/
    __asm /*0x5a1cb4*/
    {
      fadd    qword ptr ds:0A2F928h
      fadd    [esp+1Ch+a3]
      fstp    qword ptr [esp+1Ch+var_10]; a3
    }
  }
  else
  {
    FloatFloor(*(float *)&a2); /*0x5a1ca4*/
    __asm { fstp    qword ptr [esp+1Ch+var_10] } /*0x5a1ca9*/
  }
  __asm { fld     dword ptr ds:0A6B1F0h } /*0x5a1cc2*/
  __asm { fstp    [esp+1Ch+a2]; value }
  Tile_SetFloat(v7, 0xFB3u, a2a); /*0x5a1cd6*/
  __asm /*0x5a1cdb*/
  {
    fld     qword ptr [esp+18h+var_10]
    fstp    [esp+18h+arg_0]
  }
  __asm { fld     [esp+1Ch+arg_0] }
  __asm { fstp    [esp+1Ch+a2]; value }
  Tile_SetFloat(v7, 0xFB3u, a2b); /*0x5a1cf2*/
  __asm { fldz } /*0x5a1cf7*/
  __asm { fstp    [esp+1Ch+a2]; value }
  Tile_SetFloat(v7, 0xFB3u, a2c); /*0x5a1d04*/
}
