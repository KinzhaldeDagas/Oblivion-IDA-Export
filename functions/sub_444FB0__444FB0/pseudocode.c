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
  int v37; // ebx
  int *v38; // ecx
  int *v39; // ecx
  float *v40; // eax
  int v42; // edx
  bool v43; // [esp+13h] [ebp-Dh]
  int v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+14h] [ebp-Ch]
  int v47; // [esp+14h] [ebp-Ch]
  unsigned int v49; // [esp+18h] [ebp-8h]
  unsigned int v51; // [esp+18h] [ebp-8h]
  int v53; // [esp+18h] [ebp-8h]
  float v54; // [esp+18h] [ebp-8h]
  float v55; // [esp+1Ch] [ebp-4h]
  int v56; // [esp+24h] [ebp+4h]
  int v58; // [esp+24h] [ebp+4h]
  char v59; // [esp+24h] [ebp+4h]
  signed int v62; // [esp+28h] [ebp+8h]
  int v63; // [esp+28h] [ebp+8h]
  int v64; // [esp+28h] [ebp+8h]

  _ESI = a1; /*0x444fb6*/
  if ( *(_DWORD *)(a1 + 0x7C) ) /*0x444fb8*/
  {
    do /*0x444fd4*/
    {
      v13 = *(_DWORD *)(*(_DWORD *)(_ESI + 0x7C) + 4); /*0x444fc3*/
      FormHeapFree(*(_DWORD *)(_ESI + 0x7C)); /*0x444fc7*/
      *(_DWORD *)(_ESI + 0x7C) = v13; /*0x444fd1*/
    }
    while ( v13 ); /*0x444fd4*/
  }
  *(_DWORD *)(_ESI + 0x78) = 0; /*0x444fd6*/
  if ( !g_TESDataHandler ) /*0x444fe4*/
    return result; /*0x444fe4*/
  if ( *(_DWORD *)(_ESI + 0x20) == 0x7FFFFFFF || *(_DWORD *)(_ESI + 0x24) == 0x7FFFFFFF ) /*0x444ffb*/
  {
    _EDI = a11; /*0x44556b*/
    if ( a11 ) /*0x445571*/
    {
      __asm /*0x445573*/
      {
        fld     dword ptr [edi]
        fstp    [esp+20h+arg_0]
        fld     [esp+20h+arg_0]
        fistp   [esp+20h+arg_4]
      }
      *(_DWORD *)(_ESI + 0x20) = v63 >> 0xC; /*0x445588*/
      __asm /*0x44558b*/
      {
        fld     dword ptr [edi+4]
        fstp    [esp+20h+arg_0]
        fld     [esp+20h+arg_0]
        fistp   [esp+20h+arg_4]
      }
      v42 = *(_DWORD *)(_ESI + 0x20); /*0x44559e*/
      *(_DWORD *)(_ESI + 0x24) = v64 >> 0xC; /*0x4455a4*/
      *(_DWORD *)(_ESI + 0x28) = v42; /*0x4455a7*/
      *(_DWORD *)(_ESI + 0x2C) = v64 >> 0xC; /*0x4455aa*/
    }
    sub_440AF0(_ESI, a6, st6_0, result, 1, 0, 0); /*0x4455b5*/
    return sub_444EC0((_DWORD *)_ESI, a2, result, a7, a6, st6_0, a8, a10, a9, st0_0, _EDI, 0); /*0x4455bf*/
  }
  _EAX = a11; /*0x445001*/
  __asm /*0x445005*/
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
  v15 = v56; /*0x445022*/
  __asm { fld     dword ptr ds:0A3765Ch } /*0x445026*/
  __asm { fstp    [esp+20h+arg_0] }
  if ( uGridsToLoad == 3 ) /*0x44505a*/
  {
    __asm /*0x44505c*/
    {
      fld     dword ptr ds:0A37658h
      fstp    [esp+20h+arg_0]
    }
  }
  __asm { fld     [esp+20h+arg_0] } /*0x445066*/
  __asm { fld     st }
  v49 = abs32(v15 - (*(_DWORD *)(_ESI + 0x20) << 0xC) - 0x800); /*0x445071*/
  __asm { fisub   [esp+20h+var_8] } /*0x445075*/
  __asm
  {
    fstp    [esp+20h+var_8]
    fld     [esp+20h+var_8]
  }
  v51 = abs32(v45 - (*(_DWORD *)(_ESI + 0x24) << 0xC) - 0x800); /*0x445088*/
  __asm { fst     dword ptr [esi+6Ch] } /*0x44508c*/
  *(float *)(_ESI + 0x6C) = _ET1; /*0x44508c*/
  __asm /*0x44508f*/
  {
    fild    [esp+20h+var_8]
    fsubp   st(2), st
    fxch    st(1)
    fstp    [esp+20h+var_8]
    fld     [esp+20h+var_8]
    fst     dword ptr [esi+70h]
  }
  *(float *)(_ESI + 0x70) = _ET1; /*0x44509f*/
  __asm /*0x4450a2*/
  {
    fldz
    fcom    st(2)
    fnstsw  ax
    fstp    st(2)
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x4450ad*/
  {
    __asm /*0x4451fc*/
    {
      fstp    st
      fstp    st
    }
    goto LABEL_33; /*0x4451fe*/
  }
  __asm /*0x4450b3*/
  {
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 || (g_TESSaveLoadGame->flags & 0x800) != 0 ) /*0x4450ce*/
  {
LABEL_33:
    v43 = sub_57BAC0(); /*0x445200*/
    if ( !v43 ) /*0x44520b*/
    {
      if ( sub_4BDDA0((void *)unk_B35B90) ) /*0x445213*/
      {
        LoadingAreaMessage(v45, a7, a6, st6_0, result, st0_0, a9, a8, a10); /*0x44521e*/
        v43 = 1; /*0x445223*/
      }
    }
    sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x44522e*/
    sub_4BE4E0((_DWORD *)unk_B35B90); /*0x445239*/
    v30 = v15 >> 0xC; /*0x44524c*/
    v31 = v45 >> 0xC; /*0x44524f*/
    if ( (g_TESSaveLoadGame->flags & 0x800) != 0 && (g_TESSaveLoadGame->flags & 0x80000) != 0 ) /*0x44525c*/
    {
      v30 = *(_DWORD *)(_ESI + 0x20); /*0x44525e*/
      v31 = *(_DWORD *)(_ESI + 0x24); /*0x445261*/
    }
    v32 = v30 - *(_DWORD *)(_ESI + 0x20); /*0x445266*/
    v33 = v31 - *(_DWORD *)(_ESI + 0x24); /*0x44526b*/
    *(_DWORD *)(_ESI + 0x20) = v30; /*0x44526f*/
    *(_DWORD *)(_ESI + 0x24) = v31; /*0x445272*/
    *(_DWORD *)(_ESI + 0x28) = v30; /*0x445275*/
    *(_DWORD *)(_ESI + 0x2C) = v31; /*0x445278*/
    v47 = v33; /*0x445282*/
    sub_4BE330((void *)unk_B35B90, v30, v31); /*0x445286*/
    _EAX = unk_B43130; /*0x445291*/
    unk_B43134 = unk_B4312C; /*0x445296*/
    unk_B43138 = _EAX; /*0x44529c*/
    __asm /*0x4452a1*/
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
    unk_B4312C = v54; /*0x4452c1*/
    __asm /*0x4452c7*/
    {
      fmulp   st(1), st
      fstp    [esp+20h+var_4]
    }
    __asm { fld     dword ptr ds:0B43134h }
    unk_B43130 = v55; /*0x4452d7*/
    __asm /*0x4452dd*/
    {
      fld     dword ptr ds:0B3FC80h
      fucompp
      fnstsw  ax
    }
    if ( !__SETP__(BYTE1(_EAX) & 0x44, 0) ) /*0x4452ea*/
    {
      __asm /*0x4452ec*/
      {
        fld     dword ptr ds:0B43138h
        fld     dword ptr ds:0B3FC84h
        fucompp
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x4452fc*/
        goto LABEL_43; /*0x4452fc*/
    }
    if ( (int)abs32(v32) > 1 || (int)abs32(v47) > 1 ) /*0x445319*/
    {
LABEL_43:
      unk_B43134 = v54; /*0x44531f*/
      unk_B43138 = v55; /*0x445325*/
    }
    result = GetTimer(0, 0); /*0x44532e*/
    __asm { fstp    dword ptr ds:0B43078h } /*0x445333*/
    *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[4] = _ET1; /*0x445333*/
    if ( *(_DWORD *)(_ESI + 0x34) && (g_TESSaveLoadGame->flags & 0x800) == 0 ) /*0x445351*/
      goto LABEL_81; /*0x445351*/
    if ( bPreemptivelyUnloadCells ) /*0x445357*/
    {
      if ( sub_43FE30((_DWORD *)_ESI, a6, st6_0, result, 1) ) /*0x445364*/
        sub_43FC20((TES *)_ESI, 0); /*0x445371*/
    }
    MEMORY[0xB33398]->unk18 = 0; /*0x44537b*/
    if ( !*(_DWORD *)(_ESI + 0x74) ) /*0x445382*/
      sub_4431F0((TES *)_ESI, a6, st6_0, result, (TESWorldSpace *)g_TESDataHandler->worldspaceList.item); /*0x445394*/
    v37 = abs32(v32); /*0x4453a0*/
    v59 = 0; /*0x4453a5*/
    if ( v37 > 1 || (int)abs32(v47) > 1 ) /*0x4453b8*/
      v59 = 1; /*0x4453ba*/
    v38 = (int *)MEMORY[0xB35C24]; /*0x4453bf*/
    if ( MEMORY[0xB35C24] ) /*0x4453bf*/
    {
      if ( v59 || !a12 ) /*0x4453d5*/
      {
        sub_88D1D0(v38, v31, 0); /*0x4453d9*/
        sub_88BD60((unsigned int *)MEMORY[0xB35C24], 0); /*0x4453e6*/
        v38 = (int *)MEMORY[0xB35C24]; /*0x4453eb*/
      }
      sub_889E10(v38); /*0x4453f1*/
    }
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(_ESI + 8) + 0x10))(*(_DWORD *)(_ESI + 8), v30, v31); /*0x445400*/
    if ( !MEMORY[0xB35C24] ) /*0x445409*/
    {
LABEL_67:
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(_ESI + 4) + 0x10))(*(_DWORD *)(_ESI + 4), v30, v31); /*0x44544f*/
      if ( !v43 && !sub_442410((_DWORD *)_ESI) ) /*0x445464*/
        LoadingAreaMessage(v31, a7, a6, st6_0, result, st0_0, a9, a8, a10); /*0x44546f*/
      if ( v37 > 1 || (int)abs32(v47) > 1 ) /*0x445485*/
        sub_4430F0((_DWORD *)_ESI, a6, st6_0, result, 0); /*0x44548b*/
      if ( MEMORY[0xB35C24] ) /*0x445490*/
        sub_889E00((_DWORD *)MEMORY[0xB35C24]); /*0x44549a*/
      sub_444340(_ESI, result, a7, a6, st6_0, a8, a10, a9, st0_0); /*0x4454a1*/
      *(_BYTE *)(_ESI + 0x69) = 1; /*0x4454a6*/
      v39 = (int *)MEMORY[0xB35C24]; /*0x4454aa*/
      if ( MEMORY[0xB35C24] ) /*0x4454aa*/
      {
        if ( v59 ) /*0x4454b9*/
          sub_88D1D0(v39, v31, 0); /*0x4454bd*/
        else
          sub_88D1D0(v39, v31, a12); /*0x4454c4*/
      }
      sub_440270((_DWORD **)_ESI); /*0x4454cb*/
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x4454d6*/
        result = sub_665260((TESObjectREFR *)reference, result, reference); /*0x4454e6*/
LABEL_81:
      sub_43FC20((TES *)_ESI, 0); /*0x4454eb*/
      sub_440200(_ESI); /*0x4454f6*/
      if ( !*(_DWORD *)(_ESI + 0x34) ) /*0x4454fb*/
        sub_499E40(); /*0x445501*/
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x44550c*/
        result = WaterSurfaceLoop(*(float *)(_ESI + 0x54), result); /*0x445518*/
      sub_537D40(); /*0x44551d*/
      v40 = reference->vtbl->super.super.super.GetPos(reference); /*0x445530*/
      DistantLOD_UpdateLandLODAtPosition(*(_DWORD *)v40, v40[1], *((_DWORD *)v40 + 2), 0); /*0x445549*/
      sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x445557*/
      return result; /*0x445568*/
    }
    if ( !v43 ) /*0x445410*/
    {
      if ( !v59 ) /*0x445417*/
        goto LABEL_66; /*0x445417*/
      if ( sub_4BDDA0((void *)unk_B35B90) ) /*0x44541f*/
      {
        LoadingAreaMessage(v31, a7, a6, st6_0, result, st0_0, a9, a8, a10); /*0x44542a*/
        v43 = 1; /*0x44542f*/
      }
    }
    if ( v59 ) /*0x445439*/
    {
      sub_88BD60((unsigned int *)MEMORY[0xB35C24], 0); /*0x44543d*/
      goto LABEL_67; /*0x44543d*/
    }
LABEL_66:
    sub_88BD60((unsigned int *)MEMORY[0xB35C24], a12); /*0x44543f*/
    goto LABEL_67; /*0x44544a*/
  }
  if ( byte_B08960 && !sub_45A500(g_TESSaveLoadGame) && !*(_DWORD *)(_ESI + 0x34) ) /*0x4450ee*/
  {
    __asm { fld     [esp+20h+arg_0] } /*0x4450f8*/
    __asm { fmul    qword ptr ds:0A2FAA0h }
    __asm { fld     dword ptr [esi+6Ch] }
    v20 = v15 >> 0xC; /*0x44510b*/
    v46 = v45 >> 0xC; /*0x44510d*/
    __asm /*0x445111*/
    {
      fcomp   st(1)
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x445115*/
    {
      __asm /*0x44511a*/
      {
        fld     dword ptr [esi+70h]
        fcompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x445124*/
        return result; /*0x445124*/
    }
    else
    {
      __asm { fstp    st } /*0x44512c*/
    }
    v23 = *(_DWORD *)(_ESI + 0x28); /*0x445134*/
    v24 = (unsigned int)uGridsToLoad >> 1; /*0x445139*/
    v25 = v20 - v23; /*0x44513b*/
    v62 = v23; /*0x44513d*/
    v58 = v20 - v23; /*0x445141*/
    if ( v20 != v23 ) /*0x445145*/
    {
      v26 = -v24; /*0x445151*/
      v62 = v25 * (v24 + 1) + v23; /*0x445155*/
      if ( -v24 <= v24 ) /*0x445159*/
      {
        do /*0x44517f*/
        {
          sub_4BE090( /*0x445175*/
            (void *)unk_B35B90,
            a6,
            st6_0,
            result,
            *(TESWorldSpace **)(_ESI + 0x74),
            v62,
            v26 + *(_DWORD *)(_ESI + 0x2C));
          ++v26; /*0x44517a*/
        }
        while ( v26 <= v24 ); /*0x44517f*/
        v25 = v58; /*0x445181*/
      }
      *(_DWORD *)(_ESI + 0x28) = v20; /*0x445185*/
    }
    v27 = *(_DWORD *)(_ESI + 0x2C); /*0x445188*/
    v28 = v46 - v27; /*0x44518f*/
    v53 = v46 - v27; /*0x445191*/
    if ( v46 != v27 ) /*0x445195*/
    {
      v29 = -v24; /*0x44519f*/
      v27 += v28 * (v24 + 1); /*0x4451a1*/
      if ( -v24 <= v24 ) /*0x4451a5*/
      {
        do /*0x4451c2*/
        {
          sub_4BE090( /*0x4451b8*/
            (void *)unk_B35B90,
            a6,
            st6_0,
            result,
            *(TESWorldSpace **)(_ESI + 0x74),
            v29 + *(_DWORD *)(_ESI + 0x28),
            v27);
          ++v29; /*0x4451bd*/
        }
        while ( v29 <= v24 ); /*0x4451c2*/
        v28 = v53; /*0x4451c4*/
        v25 = v58; /*0x4451c8*/
      }
      *(_DWORD *)(_ESI + 0x2C) = v46; /*0x4451d0*/
    }
    if ( v25 ) /*0x4451d5*/
    {
      if ( v28 ) /*0x4451d9*/
        sub_4BE090((void *)unk_B35B90, a6, st6_0, result, *(TESWorldSpace **)(_ESI + 0x74), v62, v27); /*0x4451eb*/
    }
  }
  return result; /*0x4451f2*/
}
