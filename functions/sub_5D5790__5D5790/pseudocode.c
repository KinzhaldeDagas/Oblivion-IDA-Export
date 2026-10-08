void __userpurge sub_5D5790(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  double VirtualScreenHeight; // st7
  double Float; // st7
  _DWORD *a2; // [esp+0h] [ebp-1Ch]
  float a2a; // [esp+0h] [ebp-1Ch]
  float a2b; // [esp+0h] [ebp-1Ch]
  float a2c; // [esp+0h] [ebp-1Ch]
  int v24; // [esp+20h] [ebp+4h]
  int v29; // [esp+20h] [ebp+4h]

  if ( a6 == 3 ) /*0x5d579b*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5d57b6*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x2C), 0xFB0); /*0x5d57b8*/
    __asm { fstp    [esp+1Ch+var_10] } /*0x5d57bd*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x2C), 0xFAF); /*0x5d57c9*/
    __asm { fstp    [esp+1Ch+a3]; a3 } /*0x5d57ce*/
    UI_GetVirtualScreenHeight(); /*0x5d57d2*/
    __asm { fstp    [esp+1Ch+var_8] } /*0x5d57d7*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5d57db*/
    __asm /*0x5d57e0*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+1Ch+var_8]
    }
    v24 = Double_To_SInt32(VirtualScreenHeight); /*0x5d57f5*/
    __asm /*0x5d57f9*/
    {
      fild    [esp+1Ch+arg_0]
      fstp    [esp+1Ch+arg_0]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x2C)); /*0x5d5801*/
    __asm { fsubr   [esp+1Ch+arg_0] } /*0x5d5806*/
    __asm { fstp    [esp+20h+var_8] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x2C), 0xFCA); /*0x5d5816*/
    __asm { fdivr   [esp+1Ch+var_8] } /*0x5d581b*/
    __asm
    {
      fstp    [esp+18h+arg_0]
      fld1
      fld     [esp+18h+arg_0]
      fcom    st(1)
      fnstsw  ax
      fldz
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5d5830*/
    {
      __asm /*0x5d5835*/
      {
        fstp    st
        fstp    st
        fstp    [esp+18h+arg_0]
      }
    }
    else
    {
      __asm /*0x5d583f*/
      {
        fstp    st(2)
        fcomp   st(1)
        fnstsw  ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5d5848*/
        __asm { fstp    [esp+18h+arg_0] } /*0x5d584a*/
      else
        __asm { fstp    st } /*0x5d5850*/
    }
    __asm /*0x5d5852*/
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
    v29 = Double_To_SInt32(Float); /*0x5d5875*/
    __asm /*0x5d5879*/
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
    if ( (_AX & 0x100) != 0 ) /*0x5d5896*/
      __asm { fsub    qword ptr ds:0A2F928h } /*0x5d5898*/
    __asm { fstp    [esp+18h+arg_0] } /*0x5d589e*/
    __asm
    {
      fld     [esp+1Ch+arg_0]
      fsubp   st(2), st
      fxch    st(1)
      fcomp   qword ptr ds:0A2FAA0h
      fnstsw  ax
      fstp    [esp+1Ch+a2]; float
    }
    if ( __SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x5d58b9*/
    {
      FloatFloor(*(float *)&a2); /*0x5d58c6*/
      __asm /*0x5d58cb*/
      {
        fadd    qword ptr ds:0A2F928h
        fadd    [esp+1Ch+a3]
        fstp    qword ptr [esp+1Ch+var_10]; a3
      }
    }
    else
    {
      FloatFloor(*(float *)&a2); /*0x5d58bb*/
      __asm { fstp    qword ptr [esp+1Ch+var_10] } /*0x5d58c0*/
    }
    __asm { fld     dword ptr ds:0A6B1F0h } /*0x5d58d9*/
    __asm { fstp    [esp+1Ch+a2]; value }
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB3u, a2a); /*0x5d58ee*/
    __asm /*0x5d58f3*/
    {
      fld     qword ptr [esp+18h+var_10]
      fstp    [esp+18h+arg_0]
    }
    __asm { fld     [esp+1Ch+arg_0] }
    __asm { fstp    [esp+1Ch+a2]; value }
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB3u, a2b); /*0x5d590b*/
    __asm { fldz } /*0x5d5910*/
    __asm { fstp    [esp+1Ch+a2]; value }
    Tile_SetFloat(*(Tile **)(a1 + 0x2C), 0xFB3u, a2c); /*0x5d591e*/
  }
}
