char __usercall sub_613880@<al>(int a1@<ecx>, char a2@<bpl>, int a3@<edi>, double a4@<st2>)
{
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  char *Name; // eax
  char **v11; // edi
  bool v15; // zf
  char *v16; // eax
  int BaseCalcAVi; // [esp+14h] [ebp-4h]
  int v20; // [esp+14h] [ebp-4h]

  _ESI = a1; /*0x613883*/
  if ( *(_DWORD *)(a1 + 0x70) == 9 ) /*0x61388d*/
    return 0; /*0x61388d*/
  __asm /*0x613895*/
  {
    fld     dword ptr [esi+44h]
    fsub    dword ptr [esi+104h]
    fld     dword ptr [esi+108h]
    fcompp
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) || *(_BYTE *)(a1 + 0x1AE) ) /*0x6138ad*/
    return 0; /*0x613894*/
  v7 = *(_DWORD **)(a1 + 0x84); /*0x6138b6*/
  if ( v7 /*0x6138d5*/
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C)
                                                                              + 0x1C))(
         *(_DWORD *)(a1 + 0x3C) + 0x5C,
         *v7,
         0,
         0,
         0) )
  {
    goto LABEL_10; /*0x6138d9*/
  }
  v8 = *(_DWORD **)(_ESI + 0x88); /*0x6138db*/
  if ( v8 /*0x6138fa*/
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(_ESI + 0x3C)
                                                                                          + 0x5C)
                                                                              + 0x1C))(
         *(_DWORD *)(_ESI + 0x3C) + 0x5C,
         *v8,
         0,
         0,
         0) )
  {
    *(_DWORD *)(_ESI + 0x84) = *(_DWORD *)(_ESI + 0x88); /*0x613906*/
    *(_DWORD *)(_ESI + 0x88) = 0; /*0x61390c*/
LABEL_10:
    if ( *(_DWORD *)(_ESI + 0x70) != 9 ) /*0x613919*/
    {
      if ( unk_B3B908 ) /*0x61391b*/
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(_ESI + 0x3C)); /*0x61392c*/
        Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around"); /*0x613937*/
      }
      __asm /*0x61393f*/
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr [esi+188h]
      }
      *(float *)(_ESI + 0x188) = _ET1; /*0x613945*/
    }
    *(_DWORD *)(_ESI + 0x70) = 9; /*0x61394b*/
    return 1; /*0x613953*/
  }
  if ( *(_DWORD *)(_ESI + 0x84) ) /*0x613954*/
    return 0; /*0x61395c*/
  v11 = 0; /*0x613967*/
  BaseCalcAVi = Actor_GetBaseCalcAVi(*(int **)(_ESI + 0x3C), 9, 0, _ESI, 8); /*0x613970*/
  if ( BaseCalcAVi <= 0 ) /*0x613974*/
  {
    __asm { fld1 } /*0x61398b*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(_ESI + 0x3C) + 0x288))(*(_DWORD *)(_ESI + 0x3C), 8); /*0x613983*/
    __asm { fidiv   [esp+10h+var_4] } /*0x613985*/
  }
  __asm /*0x61398d*/
  {
    fstp    [esp+10h+var_4]
    fld     [esp+10h+var_4]
    fild    dword ptr ds:0B372D0h
    fdiv    qword ptr ds:0A309F0h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x6139a8*/
  {
    v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x45484552); /*0x6139b6*/
    if ( !v11 ) /*0x6139ba*/
      v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x45484F46); /*0x6139c8*/
  }
  v20 = Actor_GetBaseCalcAVi(*(int **)(_ESI + 0x3C), 9, (int)v11, _ESI, 9); /*0x6139d5*/
  if ( v20 <= 0 ) /*0x6139d9*/
  {
    __asm { fld1 } /*0x6139ef*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(_ESI + 0x3C) + 0x288))(*(_DWORD *)(_ESI + 0x3C), 9); /*0x6139e7*/
    __asm { fidiv   [esp+10h+var_4] } /*0x6139e9*/
  }
  __asm /*0x6139f1*/
  {
    fstp    [esp+10h+var_4]
    fld     [esp+10h+var_4]
    fild    dword ptr ds:0B372D8h
    fdiv    qword ptr ds:0A309F0h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 && !v11 ) /*0x613a10*/
  {
    v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x50534552); /*0x613a1e*/
    if ( !v11 ) /*0x613a22*/
      v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x50534F46); /*0x613a30*/
  }
  Actor_GetFatigueFraction(*(Actor **)(_ESI + 0x3C), 9, (int)v11); /*0x613a35*/
  __asm /*0x613a3a*/
  {
    fstp    [esp+10h+var_4]
    fld     [esp+10h+var_4]
    fild    dword ptr ds:0B372E0h
    fdiv    qword ptr ds:0A309F0h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x613a55*/
  {
LABEL_33:
    if ( v11 ) /*0x613a7d*/
      goto LABEL_34; /*0x613a7d*/
    return 0; /*0x613ae1*/
  }
  if ( !v11 ) /*0x613a59*/
  {
    v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x41464552); /*0x613a67*/
    if ( !v11 ) /*0x613a6b*/
    {
      v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x41464F46); /*0x613a79*/
      goto LABEL_33; /*0x613a79*/
    }
  }
LABEL_34:
  if ( !(*(unsigned __int8 (__thiscall **)(int, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(_ESI + 0x3C) /*0x613a98*/
                                                                                           + 0x5C)
                                                                               + 0x1C))(
          *(_DWORD *)(_ESI + 0x3C) + 0x5C,
          *v11,
          0,
          0,
          0) )
    return 0; /*0x613a98*/
  v15 = *(_DWORD *)(_ESI + 0x70) == 9; /*0x613a9a*/
  *(_DWORD *)(_ESI + 0x84) = v11; /*0x613a9d*/
  if ( !v15 ) /*0x613aa3*/
  {
    if ( unk_B3B908 ) /*0x613aa5*/
    {
      v16 = TESObjectREFR_GetName(*(TESObjectREFR **)(_ESI + 0x3C)); /*0x613ab6*/
      Interface_ConsolePrint("%.20s is going to %s!", v16, "...just kinda stand around"); /*0x613ac1*/
    }
    __asm /*0x613ac9*/
    {
      fld     dword ptr ds:0A30634h
      fstp    dword ptr [esi+188h]
    }
    *(float *)(_ESI + 0x188) = _ET1; /*0x613acf*/
  }
  *(_DWORD *)(_ESI + 0x70) = 9; /*0x613ad6*/
  return 1; /*0x61388f*/
}
