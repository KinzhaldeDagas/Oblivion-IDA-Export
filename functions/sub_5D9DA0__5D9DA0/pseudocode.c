void __userpurge sub_5D9DA0(_DWORD *a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  Tile *v8; // esi
  double VirtualScreenHeight; // st7
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

  if ( a5 == 0x21 || a5 == 0x2B || a5 == 0x35 ) /*0x5d9dbe*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5d9dd3*/
    if ( a5 == 0x21 ) /*0x5d9dd5*/
    {
      v8 = (Tile *)a1[0x10]; /*0x5d9dd7*/
    }
    else if ( a5 == 0x2B ) /*0x5d9ddf*/
    {
      v8 = (Tile *)a1[0x12]; /*0x5d9de1*/
    }
    else
    {
      v8 = (Tile *)a1[0x14]; /*0x5d9de6*/
    }
    Tile_GetFloat(v8, 0xFB0); /*0x5d9df0*/
    __asm { fstp    [esp+20h+var_8] } /*0x5d9df5*/
    Tile_GetFloat(v8, 0xFAF); /*0x5d9e00*/
    __asm { fstp    [esp+20h+var_4] } /*0x5d9e05*/
    UI_GetVirtualScreenHeight(); /*0x5d9e09*/
    __asm { fstp    [esp+20h+var_10] } /*0x5d9e0e*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5d9e12*/
    __asm /*0x5d9e17*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+20h+var_10]
    }
    LODWORD(v20) = Double_To_SInt32(VirtualScreenHeight); /*0x5d9e29*/
    __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d9e2d*/
    __asm { fstp    dword ptr [esp+20h+var_10] }
    sub_588CF0(v8); /*0x5d9e37*/
    __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d9e3c*/
    __asm { fstp    [esp+24h+var_10] }
    Tile_GetFloat(v8, 0xFCA); /*0x5d9e4b*/
    __asm /*0x5d9e50*/
    {
      fdivr   [esp+20h+var_10]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5d9e5c*/
    {
      UI_GetVirtualScreenHeight(); /*0x5d9e61*/
      __asm { fstp    [esp+20h+var_10] } /*0x5d9e66*/
      v11 = UI_GetVirtualScreenHeight(); /*0x5d9e6a*/
      __asm /*0x5d9e6f*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+20h+var_10]
      }
      LODWORD(v22) = Double_To_SInt32(v11); /*0x5d9e81*/
      __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d9e85*/
      __asm { fstp    dword ptr [esp+20h+var_10] }
      sub_588CF0(v8); /*0x5d9e8f*/
      __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d9e94*/
      __asm { fstp    [esp+24h+var_10] }
      Float = Tile_GetFloat(v8, 0xFCA); /*0x5d9ea3*/
      __asm /*0x5d9ea8*/
      {
        fdivr   [esp+20h+var_10]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5d9eb7*/
      {
LABEL_14:
        __asm /*0x5d9f64*/
        {
          fstp    [esp+24h+var_10]
          fld     dword ptr ds:0A6B1F0h
        }
        __asm { fstp    [esp+24h+a2]; value }
        Tile_SetFloat(v8, 0xFB3u, a2); /*0x5d9f79*/
        __asm /*0x5d9f7e*/
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
        v32 = Double_To_SInt32(Float); /*0x5d9fa5*/
        __asm { fild    [esp+20h+var_4] } /*0x5d9fa9*/
        __asm { fstp    [esp+24h+a2]; value }
        Tile_SetFloat(v8, 0xFB3u, a2a); /*0x5d9fb8*/
        __asm { fldz } /*0x5d9fbd*/
        __asm { fstp    [esp+24h+a2]; value }
        Tile_SetFloat(v8, 0xFB3u, a2b); /*0x5d9fca*/
        return; /*0x5d9fca*/
      }
      __asm { fstp    st } /*0x5d9ebd*/
    }
    UI_GetVirtualScreenHeight(); /*0x5d9ebf*/
    __asm { fstp    [esp+20h+var_10] } /*0x5d9ec4*/
    v14 = UI_GetVirtualScreenHeight(); /*0x5d9ec8*/
    __asm /*0x5d9ecd*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+20h+var_10]
    }
    LODWORD(v24) = Double_To_SInt32(v14); /*0x5d9edf*/
    __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d9ee3*/
    __asm { fstp    dword ptr [esp+20h+var_10] }
    sub_588CF0(v8); /*0x5d9eed*/
    __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d9ef2*/
    __asm { fstp    [esp+24h+var_10] }
    Float = Tile_GetFloat(v8, 0xFCA); /*0x5d9f01*/
    __asm /*0x5d9f06*/
    {
      fdivr   [esp+20h+var_10]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5d9f15*/
    {
      __asm { fstp    st } /*0x5d9f17*/
      UI_GetVirtualScreenHeight(); /*0x5d9f19*/
      __asm { fstp    [esp+20h+var_10] } /*0x5d9f1e*/
      v16 = UI_GetVirtualScreenHeight(); /*0x5d9f22*/
      __asm /*0x5d9f27*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+20h+var_10]
      }
      LODWORD(v26) = Double_To_SInt32(v16); /*0x5d9f39*/
      __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d9f3d*/
      __asm { fstp    dword ptr [esp+20h+var_10] }
      sub_588CF0(v8); /*0x5d9f47*/
      __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d9f4c*/
      __asm { fstp    [esp+24h+var_10] }
      Float = Tile_GetFloat(v8, 0xFCA); /*0x5d9f5b*/
      __asm { fdivr   [esp+20h+var_10] } /*0x5d9f60*/
    }
    goto LABEL_14; /*0x5d9f60*/
  }
}
