void __userpurge sub_5D7950(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
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

  if ( a5 == 0xA || a5 == 0xC ) /*0x5d7969*/
  {
    _EDI = InterfaceManager_GetSingleton(0, 1); /*0x5d797e*/
    if ( a5 == 0xA ) /*0x5d7980*/
      v8 = *(Tile **)(a1 + 0x38); /*0x5d7982*/
    else
      v8 = *(Tile **)(a1 + 0x40); /*0x5d7987*/
    Tile_GetFloat(v8, 0xFB0); /*0x5d7991*/
    __asm { fstp    [esp+20h+var_8] } /*0x5d7996*/
    Tile_GetFloat(v8, 0xFAF); /*0x5d79a1*/
    __asm { fstp    [esp+20h+var_4] } /*0x5d79a6*/
    UI_GetVirtualScreenHeight(); /*0x5d79aa*/
    __asm { fstp    [esp+20h+var_10] } /*0x5d79af*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5d79b3*/
    __asm /*0x5d79b8*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+20h+var_10]
    }
    LODWORD(v20) = Double_To_SInt32(VirtualScreenHeight); /*0x5d79ca*/
    __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d79ce*/
    __asm { fstp    dword ptr [esp+20h+var_10] }
    sub_588CF0(v8); /*0x5d79d8*/
    __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d79dd*/
    __asm { fstp    [esp+24h+var_10] }
    Tile_GetFloat(v8, 0xFCA); /*0x5d79ec*/
    __asm /*0x5d79f1*/
    {
      fdivr   [esp+20h+var_10]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5d79fd*/
    {
      UI_GetVirtualScreenHeight(); /*0x5d7a02*/
      __asm { fstp    [esp+20h+var_10] } /*0x5d7a07*/
      v11 = UI_GetVirtualScreenHeight(); /*0x5d7a0b*/
      __asm /*0x5d7a10*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+20h+var_10]
      }
      LODWORD(v22) = Double_To_SInt32(v11); /*0x5d7a22*/
      __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d7a26*/
      __asm { fstp    dword ptr [esp+20h+var_10] }
      sub_588CF0(v8); /*0x5d7a30*/
      __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d7a35*/
      __asm { fstp    [esp+24h+var_10] }
      Float = Tile_GetFloat(v8, 0xFCA); /*0x5d7a44*/
      __asm /*0x5d7a49*/
      {
        fdivr   [esp+20h+var_10]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5d7a58*/
      {
LABEL_11:
        __asm /*0x5d7b05*/
        {
          fstp    [esp+24h+var_10]
          fld     dword ptr ds:0A6B1F0h
        }
        __asm { fstp    [esp+24h+a2]; value }
        Tile_SetFloat(v8, 0xFB3u, a2); /*0x5d7b1a*/
        __asm /*0x5d7b1f*/
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
        v32 = Double_To_SInt32(Float); /*0x5d7b46*/
        __asm { fild    [esp+20h+var_4] } /*0x5d7b4a*/
        __asm { fstp    [esp+24h+a2]; value }
        Tile_SetFloat(v8, 0xFB3u, a2a); /*0x5d7b59*/
        __asm { fldz } /*0x5d7b5e*/
        __asm { fstp    [esp+24h+a2]; value }
        Tile_SetFloat(v8, 0xFB3u, a2b); /*0x5d7b6b*/
        return; /*0x5d7b6b*/
      }
      __asm { fstp    st } /*0x5d7a5e*/
    }
    UI_GetVirtualScreenHeight(); /*0x5d7a60*/
    __asm { fstp    [esp+20h+var_10] } /*0x5d7a65*/
    v14 = UI_GetVirtualScreenHeight(); /*0x5d7a69*/
    __asm /*0x5d7a6e*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   [esp+20h+var_10]
    }
    LODWORD(v24) = Double_To_SInt32(v14); /*0x5d7a80*/
    __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d7a84*/
    __asm { fstp    dword ptr [esp+20h+var_10] }
    sub_588CF0(v8); /*0x5d7a8e*/
    __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d7a93*/
    __asm { fstp    [esp+24h+var_10] }
    Float = Tile_GetFloat(v8, 0xFCA); /*0x5d7aa2*/
    __asm /*0x5d7aa7*/
    {
      fdivr   [esp+20h+var_10]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5d7ab6*/
    {
      __asm { fstp    st } /*0x5d7ab8*/
      UI_GetVirtualScreenHeight(); /*0x5d7aba*/
      __asm { fstp    [esp+20h+var_10] } /*0x5d7abf*/
      v16 = UI_GetVirtualScreenHeight(); /*0x5d7ac3*/
      __asm /*0x5d7ac8*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   [esp+20h+var_10]
      }
      LODWORD(v26) = Double_To_SInt32(v16); /*0x5d7ada*/
      __asm { fild    dword ptr [esp+20h+var_10] } /*0x5d7ade*/
      __asm { fstp    dword ptr [esp+20h+var_10] }
      sub_588CF0(v8); /*0x5d7ae8*/
      __asm { fsubr   dword ptr [esp+20h+var_10] } /*0x5d7aed*/
      __asm { fstp    [esp+24h+var_10] }
      Float = Tile_GetFloat(v8, 0xFCA); /*0x5d7afc*/
      __asm { fdivr   [esp+20h+var_10] } /*0x5d7b01*/
    }
    goto LABEL_11; /*0x5d7b01*/
  }
}
