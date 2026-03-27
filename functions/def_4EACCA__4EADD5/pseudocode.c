// positive sp value has been detected, the output may be wrong!
int ***__usercall def_4EACCA@<eax>(
        char a1@<bl>,
        int a2@<ebp>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int ***a21,
        int a22,
        int a23,
        float a24,
        float a25,
        float a26,
        int a27,
        int a28,
        int a29,
        int a30,
        float a31,
        float a32,
        float a33,
        float a34,
        float a35,
        float a36,
        float a37,
        float a38,
        float a39,
        float a40)
{
  int v41; // ecx
  int v47; // eax
  float *v48; // ecx
  int v49; // edx
  int v50; // ecx
  int ***result; // eax
  int v54; // [esp+Ch] [ebp+Ch]

  __asm { fld     st; jumptable 004EACCA default case }
  v54 = Double_To_SInt32(a3);
  __asm
  {
    fild    [esp+arg_18]
    fstp    [esp+arg_18]
    fld     [esp+arg_18]
    fld     st
    fsubp   st(2), st
    fxch    st(1)
    fcomp   qword ptr ds:0A2FC68h
    fnstsw  ax
  }
  if ( (_AX & 0x100) != 0 )
    __asm { fsub    qword ptr ds:0A2F928h }
  __asm { fstp    [esp+arg_34] }
  if ( a1 )
    sub_4C3540(*(TESObjectCELL ***)(a2 + 0x14), (int)&a40, (int)&a14, &a24);
  else
    sub_4406A0(TES, &a11, &a14, &a24);
  v41 = *(_DWORD *)(a2 + 0x30);
  if ( *(_BYTE *)(v41 + 0x1E) )
  {
    if ( *(_BYTE *)(v41 + 0x1C) )
    {
      a14 = a24;
      a15 = a25;
      a16 = a26;
    }
    else
    {
      __asm
      {
        fld     [esp+arg_60]
        fadd    [esp+arg_38]
        fstp    [esp+arg_18]
        fld     [esp+arg_64]
        fadd    [esp+arg_3C]
        fstp    [esp+arg_24]
        fld     [esp+arg_68]
        fadd    [esp+arg_40]
        fstp    [esp+arg_14]
        fld     [esp+arg_18]
        fstp    [esp+arg_84]
      }
      __asm { fld     [esp+arg_24] }
      a14 = a33;
      __asm { fstp    [esp+arg_88] }
      __asm { fld     [esp+arg_14] }
      a15 = a34;
      __asm { fstp    [esp+arg_8C] }
      a16 = a35;
      sub_43F350(&a14);
      __asm { fstp    st }
    }
  }
  __asm
  {
    fld     [esp+arg_40]
    fld     [esp+arg_90]
    fcomp   st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 )
    goto LABEL_23;
  __asm
  {
    fld     [esp+arg_80]
    fcomp   st(1)
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    __asm
    {
      fld     [esp+arg_38]
      fld     qword ptr ds:0A2FAA0h
      fmul    st(1), st
      fadd    st(1), st
      fxch    st(1)
      fstp    [esp+arg_38]
      fld     [esp+arg_38]
      fld     qword ptr ds:0A46B18h
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    __asm { fld     dword ptr ds:0A34F5Ch }
    if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) )
      __asm { fst     [esp+arg_38] }
    __asm
    {
      fld     [esp+arg_3C]
      fmul    st, st(3)
      fadd    st, st(3)
      fstp    [esp+arg_3C]
      fld     [esp+arg_3C]
      fcomp   st(2)
      fnstsw  ax
    }
    if ( (_AX & 0x100) == 0 )
      __asm { fst     [esp+arg_3C] }
    __asm
    {
      fxch    st(3)
      fmul    st, st(2)
      faddp   st(2), st
      fxch    st(1)
      fstp    [esp+arg_40]
      fld     [esp+arg_40]
      fcompp
      fnstsw  ax
    }
    if ( (_AX & 0x100) != 0 )
      __asm { fstp    st }
    else
      __asm { fstp    [esp+arg_40] }
    __asm
    {
      fld     [esp+arg_38]
      fadd    [esp+arg_2C]
      fstp    [esp+arg_2C]
      fld     [esp+arg_3C]
      fadd    [esp+arg_30]
      fstp    [esp+arg_30]
      fld     [esp+arg_40]
      fadd    [esp+arg_34]
      fstp    [esp+arg_34]
      fldz
      fst     [esp+arg_6C]
      fst     [esp+arg_70]
      fst     [esp+arg_74]
      fstp    [esp+arg_78]
    }
    if ( a1 )
      sub_4C4B70(*(_DWORD **)(a2 + 0x14), (int)&a40, (int)&a27);
    else
      sub_4407A0(TES, &a11, &a27);
    __asm { fld     [esp+arg_6C] }
    __asm { fmul    qword ptr ds:0A47A48h }
    __asm { fld     [esp+arg_70] }
    v47 = (unsigned __int16)a21;
    __asm { fmul    qword ptr ds:0A47A40h }
    v48 = (float *)(dword_B36098 + 0xC * (unsigned __int16)a21);
    __asm { faddp   st(1), st }
    v49 = (int)a21 + 1;
    __asm { fld     [esp+arg_74] }
    *v48 = a11;
    __asm { fmul    qword ptr ds:0A47A38h }
    v48[1] = a12;
    __asm { faddp   st(1), st }
    v48[2] = a13;
    v50 = dword_B3609C;
    a21 = (int ***)v49;
    __asm
    {
      fstp    [esp+arg_18]
      fld     [esp+arg_18]
      fstp    dword ptr [ecx+eax*4]
    }
    *(float *)(v50 + 4 * v47) = _ET1;
  }
  else
  {
LABEL_23:
    __asm { fstp    st }
  }
  if ( ++a19 < a17 )
    JUMPOUT(0x4EAA64);
  if ( ++a18 < a17 )
    JUMPOUT(0x4EAA30);
  result = a21;
  if ( (_WORD)a21 )
    return sub_7C4F50(
             *(int ***)(a2 + 0x18),
             *(_DWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 0xC),
             *(_DWORD *)(a2 + 0x20),
             *(_DWORD *)(a2 + 0x30),
             dword_B36098,
             dword_B3609C,
             *(float *)&a21);
  return result;
}
