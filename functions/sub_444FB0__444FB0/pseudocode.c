double __userpurge sub_444FB0@<st0>(
        unsigned int a1@<ecx>,
        TESObjectREFR *a2@<ebp>,
        double result@<st0>,
        double st0_0@<st7>,
        double st6_0@<st1>,
        double a6@<st2>,
        double a7@<st3>,
        double a8@<st4>,
        double a9@<st6>,
        double a10@<st5>,
        float *a11,
        char a12)
{
  int v13; // edi
  int v15; // edi
  int v20; // ebx
  signed int v23; // eax
  signed int v24; // edi
  int v25; // ecx
  int v26; // ebp
  signed int v27; // ebx
  int v28; // eax
  int v29; // ebp
  int v30; // edi
  int v31; // ebp
  int v32; // ebx
  int v33; // eax
  double Timer; // st7
  int v38; // ebx
  int v39; // edx
  float *v40; // eax
  int v42; // edx
  bool v43; // [esp+13h] [ebp-Dh]
  int v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+14h] [ebp-Ch]
  int v47; // [esp+14h] [ebp-Ch]
  unsigned int v49; // [esp+18h] [ebp-8h]
  unsigned int v51; // [esp+18h] [ebp-8h]
  int v53; // [esp+18h] [ebp-8h]
  int v54; // [esp+18h] [ebp-8h]
  int v55; // [esp+1Ch] [ebp-4h]
  int v56; // [esp+24h] [ebp+4h]
  int v58; // [esp+24h] [ebp+4h]
  char v59; // [esp+24h] [ebp+4h]
  signed int v62; // [esp+28h] [ebp+8h]
  int v63; // [esp+28h] [ebp+8h]
  int v64; // [esp+28h] [ebp+8h]

  _ESI = a1;
  if ( *(_DWORD *)(a1 + 0x7C) )
  {
    do
    {
      v13 = *(_DWORD *)(*(_DWORD *)(_ESI + 0x7C) + 4);
      FormHeapFree(*(_DWORD *)(_ESI + 0x7C));
      *(_DWORD *)(_ESI + 0x7C) = v13;
    }
    while ( v13 );
  }
  *(_DWORD *)(_ESI + 0x78) = 0;
  if ( !TESDataHandler )
    return result;
  if ( *(_DWORD *)(_ESI + 0x20) == 0x7FFFFFFF || *(_DWORD *)(_ESI + 0x24) == 0x7FFFFFFF )
  {
    _EDI = a11;
    if ( a11 )
    {
      __asm
      {
        fld     dword ptr [edi]
        fstp    [esp+20h+arg_0]
        fld     [esp+20h+arg_0]
        fistp   [esp+20h+arg_4]
      }
      *(_DWORD *)(_ESI + 0x20) = v63 >> 0xC;
      __asm
      {
        fld     dword ptr [edi+4]
        fstp    [esp+20h+arg_0]
        fld     [esp+20h+arg_0]
        fistp   [esp+20h+arg_4]
      }
      v42 = *(_DWORD *)(_ESI + 0x20);
      *(_DWORD *)(_ESI + 0x24) = v64 >> 0xC;
      *(_DWORD *)(_ESI + 0x28) = v42;
      *(_DWORD *)(_ESI + 0x2C) = v64 >> 0xC;
    }
    sub_440AF0(_ESI, a6, st6_0, (char)a2, 1, 0, 0);
    return sub_444EC0((_DWORD *)_ESI, a2, result, a7, a6, st6_0, a8, a10, a9, st0_0, _EDI, 0);
  }
  _EAX = a11;
  __asm
  {
    fld     dword ptr [eax]
    fstp    [esp+20h+var_C]
    fld     [esp+20h+var_C]
    fistp   [esp+20h+arg_0]
    fld     dword ptr [eax+4]
    fstp    [esp+20h+var_8]
    fld     [esp+20h+var_8]
    fistp   [esp+20h+var_C]
  }
  v15 = v56;
  __asm { fld     dword ptr ds:0A3765Ch }
  __asm { fstp    [esp+20h+arg_0] }
  if ( uGridsToLoad == 3 )
  {
    __asm
    {
      fld     dword ptr ds:0A37658h
      fstp    [esp+20h+arg_0]
    }
  }
  __asm { fld     [esp+20h+arg_0] }
  __asm { fld     st }
  v49 = abs32(v15 - (*(_DWORD *)(_ESI + 0x20) << 0xC) - 0x800);
  __asm { fisub   [esp+20h+var_8] }
  __asm
  {
    fstp    [esp+20h+var_8]
    fld     [esp+20h+var_8]
  }
  v51 = abs32(v45 - (*(_DWORD *)(_ESI + 0x24) << 0xC) - 0x800);
  __asm { fst     dword ptr [esi+6Ch] }
  *(float *)(_ESI + 0x6C) = _ET1;
  __asm
  {
    fild    [esp+20h+var_8]
    fsubp   st(2), st
    fxch    st(1)
    fstp    [esp+20h+var_8]
    fld     [esp+20h+var_8]
    fst     dword ptr [esi+70h]
  }
  *(float *)(_ESI + 0x70) = _ET1;
  __asm
  {
    fldz
    fcom    st(2)
    fnstsw  ax
    fstp    st(2)
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    __asm
    {
      fstp    st
      fstp    st
    }
    goto LABEL_33;
  }
  __asm
  {
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 || (SaveLoad_CurrentSavegame->flags & 0x800) != 0 )
  {
LABEL_33:
    v43 = sub_57BAC0(v45, a6, st6_0, result);
    if ( !v43 )
    {
      if ( sub_4BDDA0((void *)dword_B35B90) )
      {
        LoadingAreaMessage(v45, a7, a6, st6_0, result, st0_0, a9, a8, a10);
        v43 = 1;
      }
    }
    sub_432860((volatile LONG *)ioManager);
    sub_4BE4E0((_DWORD *)dword_B35B90);
    v30 = v15 >> 0xC;
    v31 = v45 >> 0xC;
    if ( (SaveLoad_CurrentSavegame->flags & 0x800) != 0 && (SaveLoad_CurrentSavegame->flags & 0x80000) != 0 )
    {
      v30 = *(_DWORD *)(_ESI + 0x20);
      v31 = *(_DWORD *)(_ESI + 0x24);
    }
    v32 = v30 - *(_DWORD *)(_ESI + 0x20);
    v33 = v31 - *(_DWORD *)(_ESI + 0x24);
    *(_DWORD *)(_ESI + 0x20) = v30;
    *(_DWORD *)(_ESI + 0x24) = v31;
    *(_DWORD *)(_ESI + 0x28) = v30;
    *(_DWORD *)(_ESI + 0x2C) = v31;
    v47 = v33;
    sub_4BE330((void *)dword_B35B90, v30, v31);
    _EAX = dword_B43130;
    dword_B43134 = dword_B4312C;
    dword_B43138 = _EAX;
    __asm
    {
      fild    dword ptr [esi+20h]
      fld     qword ptr ds:0A2FAA0h
      fadd    st(1), st
      fld     qword ptr ds:0A37650h
      fmul    st(2), st
      fxch    st(2)
      fstp    [esp+20h+var_8]
    }
    __asm { fiadd   dword ptr [esi+24h] }
    dword_B4312C = v54;
    __asm
    {
      fmulp   st(1), st
      fstp    [esp+20h+var_4]
    }
    __asm { fld     dword ptr ds:0B43134h }
    dword_B43130 = v55;
    __asm
    {
      fld     dword ptr ds:0B3FC80h
      fucompp
      fnstsw  ax
    }
    if ( !__SETP__(BYTE1(_EAX) & 0x44, 0) )
    {
      __asm
      {
        fld     dword ptr ds:0B43138h
        fld     dword ptr ds:0B3FC84h
        fucompp
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        goto LABEL_43;
    }
    if ( (int)abs32(v32) > 1 || (int)abs32(v47) > 1 )
    {
LABEL_43:
      dword_B43134 = v54;
      dword_B43138 = v55;
    }
    Timer = GetTimer(0, 0);
    __asm { fstp    dword ptr ds:0B43078h }
    flt_B43078 = _ET1;
    if ( *(_DWORD *)(_ESI + 0x34) && (SaveLoad_CurrentSavegame->flags & 0x800) == 0 )
      goto LABEL_81;
    if ( bPreemptivelyUnloadCells )
    {
      if ( sub_43FE30((_DWORD *)_ESI, a6, st6_0, Timer, 1) )
        sub_43FC20((TES *)_ESI, 0);
    }
    OSGlobals->unk18 = 0;
    if ( !*(_DWORD *)(_ESI + 0x74) )
      sub_4431F0((TES *)_ESI, a6, v31, st6_0, Timer, *(TESWorldSpace **)(TESDataHandler + 0xC));
    v38 = abs32(v32);
    v59 = 0;
    if ( v38 > 1 || (int)abs32(v47) > 1 )
      v59 = 1;
    if ( bhkWorldM )
    {
      if ( v59 || !a12 )
      {
        sub_88D1D0(0);
        sub_88BD60((_DWORD *)bhkWorldM, 0);
      }
      Timer = sub_889E10();
    }
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(_ESI + 8) + 0x10))(*(_DWORD *)(_ESI + 8), v30, v31);
    if ( !bhkWorldM )
    {
LABEL_67:
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(_ESI + 4) + 0x10))(*(_DWORD *)(_ESI + 4), v30, v31);
      if ( !v43 && !sub_442410((_DWORD *)_ESI) )
        LoadingAreaMessage(v31, a7, a6, st6_0, Timer, st0_0, a9, a8, a10);
      if ( v38 > 1 || (int)abs32(v47) > 1 )
        sub_4430F0((_DWORD *)_ESI, a6, st6_0, v31, Timer, 0);
      if ( bhkWorldM )
        sub_889E00((_DWORD *)bhkWorldM);
      sub_444340(_ESI, Timer, a7, a6, st6_0, a8, a10, a9, st0_0);
      *(_BYTE *)(_ESI + 0x69) = 1;
      if ( bhkWorldM )
      {
        if ( v59 )
          Timer = sub_88D1D0(0);
        else
          Timer = sub_88D1D0(a12);
      }
      sub_440270((_DWORD **)_ESI, a6, st6_0, Timer);
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
        Timer = sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, Timer, v39, TESDataHandler_g_PlayerRef);
LABEL_81:
      sub_43FC20((TES *)_ESI, 0);
      sub_440200(_ESI);
      if ( !*(_DWORD *)(_ESI + 0x34) )
        sub_499E40();
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
        WaterSurfaceLoop(*(float *)(_ESI + 0x54), Timer);
      sub_537D40();
      v40 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      result = sub_4EA6E0(*(_DWORD *)v40, *((_DWORD *)v40 + 1), *((_DWORD *)v40 + 2), 0);
      sub_432890((volatile LONG *)ioManager);
      return result;
    }
    if ( !v43 )
    {
      if ( !v59 )
        goto LABEL_66;
      if ( sub_4BDDA0((void *)dword_B35B90) )
      {
        LoadingAreaMessage(v31, a7, a6, st6_0, Timer, st0_0, a9, a8, a10);
        v43 = 1;
      }
    }
    if ( v59 )
    {
      sub_88BD60((_DWORD *)bhkWorldM, 0);
      goto LABEL_67;
    }
LABEL_66:
    sub_88BD60((_DWORD *)bhkWorldM, a12);
    goto LABEL_67;
  }
  if ( byte_B08960 && !sub_45A500(SaveLoad_CurrentSavegame) && !*(_DWORD *)(_ESI + 0x34) )
  {
    __asm { fld     [esp+20h+arg_0] }
    __asm { fmul    qword ptr ds:0A2FAA0h }
    __asm { fld     dword ptr [esi+6Ch] }
    v20 = v15 >> 0xC;
    v46 = v45 >> 0xC;
    __asm
    {
      fcomp   st(1)
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr [esi+70h]
        fcompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) )
        return result;
    }
    else
    {
      __asm { fstp    st }
    }
    v23 = *(_DWORD *)(_ESI + 0x28);
    v24 = (unsigned int)uGridsToLoad >> 1;
    v25 = v20 - v23;
    v62 = v23;
    v58 = v20 - v23;
    if ( v20 != v23 )
    {
      v26 = -v24;
      v62 = v25 * (v24 + 1) + v23;
      if ( -v24 <= v24 )
      {
        do
        {
          sub_4BE090(
            (void *)dword_B35B90,
            a6,
            st6_0,
            result,
            *(_DWORD **)(_ESI + 0x74),
            v62,
            v26 + *(_DWORD *)(_ESI + 0x2C));
          ++v26;
        }
        while ( v26 <= v24 );
        v25 = v58;
      }
      *(_DWORD *)(_ESI + 0x28) = v20;
    }
    v27 = *(_DWORD *)(_ESI + 0x2C);
    v28 = v46 - v27;
    v53 = v46 - v27;
    if ( v46 != v27 )
    {
      v29 = -v24;
      v27 += v28 * (v24 + 1);
      if ( -v24 <= v24 )
      {
        do
        {
          sub_4BE090(
            (void *)dword_B35B90,
            a6,
            st6_0,
            result,
            *(_DWORD **)(_ESI + 0x74),
            v29 + *(_DWORD *)(_ESI + 0x28),
            v27);
          ++v29;
        }
        while ( v29 <= v24 );
        v28 = v53;
        v25 = v58;
      }
      *(_DWORD *)(_ESI + 0x2C) = v46;
    }
    if ( v25 )
    {
      if ( v28 )
        sub_4BE090((void *)dword_B35B90, a6, st6_0, result, *(_DWORD **)(_ESI + 0x74), v62, v27);
    }
  }
  return result;
}
