void __userpurge sub_5D0810(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>, int a5, int a6)
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

  if ( a5 == 6 )
  {
    _EDI = (float *)InterfaceManager_GetSingleton(0, 1);
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFB0);
    __asm { fstp    [esp+18h+var_8] }
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFAF);
    __asm { fstp    [esp+18h+var_4] }
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+18h+a3] }
    v8 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3) = Double_To_SInt32(v8);
    __asm
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x38));
    __asm { fsubr   [esp+18h+a3] }
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Tile_GetFloat(*(_DWORD **)(a1 + 0x38), 0xFCA);
    __asm
    {
      fdivr   qword ptr [esp+18h+a3]
      fcomp   qword ptr ds:0A2FC68h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      sub_57D7F0();
      __asm { fstp    qword ptr [esp+18h+a3] }
      v10 = sub_57D7F0();
      __asm
      {
        fmul    qword ptr ds:0A2FAA0h
        fadd    dword ptr [edi+28h]
        fsubr   qword ptr [esp+18h+a3]
      }
      LODWORD(a3b) = Double_To_SInt32(v10);
      __asm
      {
        fild    [esp+18h+a3]
        fstp    [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x38));
      __asm { fsubr   [esp+18h+a3] }
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA);
      __asm
      {
        fdivr   qword ptr [esp+18h+a3]
        fld1
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 )
      {
LABEL_7:
        __asm
        {
          fstp    qword ptr [esp+1Ch+a3]; a3
          fld     dword ptr ds:0A6B1F0h
        }
        __asm { fstp    [esp+1Ch+a2]; a3 }
        Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFB3, a2);
        __asm
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
        v32 = Double_To_SInt32(Float);
        __asm { fild    [esp+18h+var_4] }
        __asm { fstp    [esp+1Ch+a2]; a3 }
        Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFB3, a2a);
        __asm { fldz }
        __asm { fstp    [esp+1Ch+a2]; a3 }
        Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFB3, a2b);
        return;
      }
      __asm { fstp    st }
    }
    sub_57D7F0();
    __asm { fstp    qword ptr [esp+18h+a3] }
    v13 = sub_57D7F0();
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    dword ptr [edi+28h]
      fsubr   qword ptr [esp+18h+a3]
    }
    LODWORD(a3d) = Double_To_SInt32(v13);
    __asm
    {
      fild    [esp+18h+a3]
      fstp    [esp+18h+a3]
    }
    sub_588CF0(*(_DWORD **)(a1 + 0x38));
    __asm { fsubr   [esp+18h+a3] }
    __asm { fstp    qword ptr [esp+1Ch+a3] }
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA);
    __asm
    {
      fdivr   qword ptr [esp+18h+a3]
      fldz
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( (_AX & 0x4100) != 0 )
    {
      __asm { fstp    st }
      sub_593020(_EDI);
      a3f = v15;
      __asm
      {
        fild    [esp+18h+a3]
        fstp    qword ptr [esp+18h+a3]
      }
      sub_588CF0(*(_DWORD **)(a1 + 0x38));
      __asm { fsubr   qword ptr [esp+18h+a3] }
      __asm { fstp    qword ptr [esp+1Ch+a3] }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFCA);
      __asm { fdivr   qword ptr [esp+18h+a3] }
    }
    goto LABEL_7;
  }
}
