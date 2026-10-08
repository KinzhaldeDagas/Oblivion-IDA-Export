void __userpurge sub_5D0810(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>, int a5, int a6)
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

  if ( a5 == 6 ) /*0x5d0821*/
  {
    _EDI = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5d083b*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFB0); /*0x5d083d*/
    __asm { fstp    [esp+18h+var_8] } /*0x5d0842*/
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFAF); /*0x5d084e*/
    __asm { fstp    [esp+18h+var_4] } /*0x5d0853*/
    UI_GetVirtualScreenHeight(); /*0x5d0857*/
    __asm { fstp    qword ptr [esp+18h+a3] } /*0x5d085c*/
    VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5d0860*/
    __asm /*0x5d0865*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3) = Double_To_SInt32(VirtualScreenHeight); /*0x5d087a*/
    __asm /*0x5d087e*/
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x38)); /*0x5d0886*/
    __asm { fsubr   [esp+18h+a3] } /*0x5d088b*/
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFCA); /*0x5d089b*/
    __asm /*0x5d08a0*/
    {
      fdivr   qword ptr [esp+18h+a3]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x5d08ac*/
    {
      UI_GetVirtualScreenHeight(); /*0x5d08b1*/
      __asm { fstp    qword ptr [esp+18h+a3] } /*0x5d08b6*/
      v10 = UI_GetVirtualScreenHeight(); /*0x5d08ba*/
      __asm /*0x5d08bf*/
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   qword ptr [esp+18h+a3]
      }
      LODWORD(a3b) = Double_To_SInt32(v10); /*0x5d08d4*/
      __asm /*0x5d08d8*/
      {
        fild    [esp+18h+a3]
        fstp    [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x38)); /*0x5d08e0*/
      __asm { fsubr   [esp+18h+a3] } /*0x5d08e5*/
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA); /*0x5d08f5*/
      __asm /*0x5d08fa*/
      {
        fdivr   qword ptr [esp+18h+a3]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5d0909*/
      {
LABEL_7:
        __asm /*0x5d09a1*/
        {
          fstp    qword ptr [esp+1Ch+a3]; a3
          fld     dword ptr ds:0A6B1F0h
        }
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x38), 0xFB3u, a2); /*0x5d09b7*/
        __asm /*0x5d09bc*/
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
        v32 = Double_To_SInt32(Float); /*0x5d09e3*/
        __asm { fild    [esp+18h+var_4] } /*0x5d09e7*/
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x38), 0xFB3u, a2a); /*0x5d09f7*/
        __asm { fldz } /*0x5d09fc*/
        __asm { fstp    [esp+1Ch+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 0x38), 0xFB3u, a2b); /*0x5d0a0a*/
        return; /*0x5d0a0a*/
      }
      __asm { fstp    st } /*0x5d090f*/
    }
    UI_GetVirtualScreenHeight(); /*0x5d0911*/
    __asm { fstp    qword ptr [esp+18h+a3] } /*0x5d0916*/
    v13 = UI_GetVirtualScreenHeight(); /*0x5d091a*/
    __asm /*0x5d091f*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3d) = Double_To_SInt32(v13); /*0x5d0934*/
    __asm /*0x5d0938*/
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x38)); /*0x5d0940*/
    __asm { fsubr   [esp+18h+a3] } /*0x5d0945*/
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA); /*0x5d0955*/
    __asm /*0x5d095a*/
    {
      fdivr   qword ptr [esp+18h+a3]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5d0969*/
    {
      __asm { fstp    st } /*0x5d096d*/
      sub_593020(_EDI); /*0x5d096f*/
      a3f = v15; /*0x5d0977*/
      __asm /*0x5d097b*/
      {
        fild    [esp+18h+a3]
        fstp    qword ptr [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x38)); /*0x5d0983*/
      __asm { fsubr   qword ptr [esp+18h+a3] } /*0x5d0988*/
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA); /*0x5d0998*/
      __asm { fdivr   qword ptr [esp+18h+a3] } /*0x5d099d*/
    }
    goto LABEL_7; /*0x5d099d*/
  }
}
