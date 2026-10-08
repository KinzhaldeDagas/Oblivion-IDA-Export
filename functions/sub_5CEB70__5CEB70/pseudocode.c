void __userpurge sub_5CEB70(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>, int a5, int a6)
{
  double VirtualScreenHeight; // st7
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

  if ( a5 == 5 ) /*0x5ceb81*/
  {
    _EDI = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5ceb9b*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x30), 0xFB0); /*0x5ceb9d*/
    __asm { fstp    [esp+18h+var_8] } /*0x5ceba2*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x30), 0xFAF); /*0x5cebae*/
    __asm { fstp    [esp+18h+var_4] } /*0x5cebb3*/
    UI_GetVirtualScreenHeight(); /*0x5cebb7*/
    __asm { fstp    qword ptr [esp+18h+a3] } /*0x5cebbc*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5cebc0*/
    __asm /*0x5cebc5*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3) = Double_To_SInt32(VirtualScreenHeight); /*0x5cebda*/
    __asm /*0x5cebde*/
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x30)); /*0x5cebe6*/
    __asm { fsubr   [esp+18h+a3] } /*0x5cebeb*/
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Tile_GetFloat(*(_DWORD **)(a1 + 0x30), 0xFCA); /*0x5cebfb*/
    __asm /*0x5cec00*/
    {
      fdivr   qword ptr [esp+18h+a3]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5cec0c*/
    {
      UI_GetVirtualScreenHeight(); /*0x5cec11*/
      __asm { fstp    qword ptr [esp+18h+a3] } /*0x5cec16*/
      v10 = UI_GetVirtualScreenHeight(); /*0x5cec1a*/
      __asm /*0x5cec1f*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   qword ptr [esp+18h+a3]
      }
      LODWORD(a3b) = Double_To_SInt32(v10); /*0x5cec34*/
      __asm /*0x5cec38*/
      {
        fild    [esp+18h+a3]
        fstp    [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x30)); /*0x5cec40*/
      __asm { fsubr   [esp+18h+a3] } /*0x5cec45*/
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x30), 0xFCA); /*0x5cec55*/
      __asm /*0x5cec5a*/
      {
        fdivr   qword ptr [esp+18h+a3]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5cec69*/
      {
LABEL_7:
        __asm /*0x5ced01*/
        {
          fstp    qword ptr [esp+1Ch+a3]; a3
          fld     dword ptr ds:0A6906Ch
        }
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, a2); /*0x5ced17*/
        __asm /*0x5ced1c*/
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
        v32 = Double_To_SInt32(Float); /*0x5ced43*/
        __asm { fild    [esp+18h+var_4] } /*0x5ced47*/
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, a2a); /*0x5ced57*/
        __asm { fldz } /*0x5ced5c*/
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFB7u, a2b); /*0x5ced6a*/
        return; /*0x5ced6a*/
      }
      __asm { fstp    st } /*0x5cec6f*/
    }
    UI_GetVirtualScreenHeight(); /*0x5cec71*/
    __asm { fstp    qword ptr [esp+18h+a3] } /*0x5cec76*/
    v13 = UI_GetVirtualScreenHeight(); /*0x5cec7a*/
    __asm /*0x5cec7f*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3d) = Double_To_SInt32(v13); /*0x5cec94*/
    __asm /*0x5cec98*/
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x30)); /*0x5ceca0*/
    __asm { fsubr   [esp+18h+a3] } /*0x5ceca5*/
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x30), 0xFCA); /*0x5cecb5*/
    __asm /*0x5cecba*/
    {
      fdivr   qword ptr [esp+18h+a3]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5cecc9*/
    {
      __asm { fstp    st } /*0x5ceccd*/
      sub_593020(_EDI); /*0x5ceccf*/
      a3f = v15; /*0x5cecd7*/
      __asm /*0x5cecdb*/
      {
        fild    [esp+18h+a3]
        fstp    qword ptr [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x30)); /*0x5cece3*/
      __asm { fsubr   qword ptr [esp+18h+a3] } /*0x5cece8*/
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x30), 0xFCA); /*0x5cecf8*/
      __asm { fdivr   qword ptr [esp+18h+a3] } /*0x5cecfd*/
    }
    goto LABEL_7; /*0x5cecfd*/
  }
}
