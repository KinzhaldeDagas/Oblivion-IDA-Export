void __userpurge sub_5D2D80(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>, int a5, int a6)
{
  double v8; // st7
  double v10; // st7
  double Float; // st7
  double v13; // st7
  int v15; // eax
  float a2; // [esp+0h] [ebp-1Ch]
  float a2a; // [esp+0h] [ebp-1Ch]
  float a2b; // [esp+0h] [ebp-1Ch]
  double a3; // [esp+Ch] [ebp-10h]
  double a3b; // [esp+Ch] [ebp-10h]
  double a3d; // [esp+Ch] [ebp-10h]
  int a3f; // [esp+Ch] [ebp-10h]
  int v32; // [esp+18h] [ebp-4h]

  if ( a5 == 4 ) /*0x5d2d91*/
  {
    _EDI = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5d2dab*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x34), 0xFB0); /*0x5d2dad*/
    __asm { fstp    [esp+18h+var_8] } /*0x5d2db2*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x34), 0xFAF); /*0x5d2dbe*/
    __asm { fstp    [esp+18h+var_4] } /*0x5d2dc3*/
    UI_GetVirtualScreenHeight(); /*0x5d2dc7*/
    __asm { fstp    qword ptr [esp+18h+a3] } /*0x5d2dcc*/
    v8 = UI_GetVirtualScreenHeight(); /*0x5d2dd0*/
    __asm /*0x5d2dd5*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3) = Double_To_SInt32(v8); /*0x5d2dea*/
    __asm /*0x5d2dee*/
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x34)); /*0x5d2df6*/
    __asm { fsubr   [esp+18h+a3] } /*0x5d2dfb*/
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Tile_GetFloat(*(_DWORD **)(a1 + 0x34), 0xFCA); /*0x5d2e0b*/
    __asm /*0x5d2e10*/
    {
      fdivr   qword ptr [esp+18h+a3]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5d2e1c*/
    {
      UI_GetVirtualScreenHeight(); /*0x5d2e21*/
      __asm { fstp    qword ptr [esp+18h+a3] } /*0x5d2e26*/
      v10 = UI_GetVirtualScreenHeight(); /*0x5d2e2a*/
      __asm /*0x5d2e2f*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   qword ptr [esp+18h+a3]
      }
      LODWORD(a3b) = Double_To_SInt32(v10); /*0x5d2e44*/
      __asm /*0x5d2e48*/
      {
        fild    [esp+18h+a3]
        fstp    [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x34)); /*0x5d2e50*/
      __asm { fsubr   [esp+18h+a3] } /*0x5d2e55*/
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x34), 0xFCA); /*0x5d2e65*/
      __asm /*0x5d2e6a*/
      {
        fdivr   qword ptr [esp+18h+a3]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5d2e79*/
      {
LABEL_7:
        __asm /*0x5d2f11*/
        {
          fstp    qword ptr [esp+1Ch+a3]; a3
          fld     dword ptr ds:0A6B1F0h
        }
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFB3, a2); /*0x5d2f27*/
        __asm /*0x5d2f2c*/
        {
          fld     [esp+18h+var_8]
          fld     [esp+18h+var_4]
          fld     st
          fsubp   st(2), st
          fxch    st(1)
          fmul    qword ptr [esp+18h+a3]
          faddp   st(1), st
          fadd    qword ptr ds:0A2FAA0h
          fstp    [esp+18h+var_4]
          fld     [esp+18h+var_4]
        }
        v32 = Double_To_SInt32(Float); /*0x5d2f53*/
        __asm { fild    [esp+18h+var_4] } /*0x5d2f57*/
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFB3, a2a); /*0x5d2f67*/
        __asm { fldz } /*0x5d2f6c*/
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFB3, a2b); /*0x5d2f7a*/
        return; /*0x5d2f7a*/
      }
      __asm { fstp    st } /*0x5d2e7f*/
    }
    UI_GetVirtualScreenHeight(); /*0x5d2e81*/
    __asm { fstp    qword ptr [esp+18h+a3] } /*0x5d2e86*/
    v13 = UI_GetVirtualScreenHeight(); /*0x5d2e8a*/
    __asm /*0x5d2e8f*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3d) = Double_To_SInt32(v13); /*0x5d2ea4*/
    __asm /*0x5d2ea8*/
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x34)); /*0x5d2eb0*/
    __asm { fsubr   [esp+18h+a3] } /*0x5d2eb5*/
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x34), 0xFCA); /*0x5d2ec5*/
    __asm /*0x5d2eca*/
    {
      fdivr   qword ptr [esp+18h+a3]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5d2ed9*/
    {
      __asm { fstp    st } /*0x5d2edd*/
      sub_593020(_EDI); /*0x5d2edf*/
      a3f = v15; /*0x5d2ee7*/
      __asm /*0x5d2eeb*/
      {
        fild    [esp+18h+a3]
        fstp    qword ptr [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x34)); /*0x5d2ef3*/
      __asm { fsubr   qword ptr [esp+18h+a3] } /*0x5d2ef8*/
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x34), 0xFCA); /*0x5d2f08*/
      __asm { fdivr   qword ptr [esp+18h+a3] } /*0x5d2f0d*/
    }
    goto LABEL_7; /*0x5d2f0d*/
  }
}
