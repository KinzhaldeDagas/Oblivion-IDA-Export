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

  _ESI = a1;
  if ( *(_DWORD *)(a1 + 0x70) == 9 )
    return 0;
  __asm
  {
    fld     dword ptr [esi+44h]
    fsub    dword ptr [esi+104h]
    fld     dword ptr [esi+108h]
    fcompp
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) || *(_BYTE *)(a1 + 0x1AE) )
    return 0;
  v7 = *(_DWORD **)(a1 + 0x84);
  if ( v7
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C)
                                                                              + 0x1C))(
         *(_DWORD *)(a1 + 0x3C) + 0x5C,
         *v7,
         0,
         0,
         0) )
  {
    goto LABEL_10;
  }
  v8 = *(_DWORD **)(_ESI + 0x88);
  if ( v8
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(_ESI + 0x3C)
                                                                                          + 0x5C)
                                                                              + 0x1C))(
         *(_DWORD *)(_ESI + 0x3C) + 0x5C,
         *v8,
         0,
         0,
         0) )
  {
    *(_DWORD *)(_ESI + 0x84) = *(_DWORD *)(_ESI + 0x88);
    *(_DWORD *)(_ESI + 0x88) = 0;
LABEL_10:
    if ( *(_DWORD *)(_ESI + 0x70) != 9 )
    {
      if ( byte_B3B908 )
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(_ESI + 0x3C));
        Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around");
      }
      __asm
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr [esi+188h]
      }
      *(float *)(_ESI + 0x188) = _ET1;
    }
    *(_DWORD *)(_ESI + 0x70) = 9;
    return 1;
  }
  if ( *(_DWORD *)(_ESI + 0x84) )
    return 0;
  v11 = 0;
  BaseCalcAVi = Actor_GetBaseCalcAVi(*(int **)(_ESI + 0x3C), 9, 0, _ESI, 8);
  if ( BaseCalcAVi <= 0 )
  {
    __asm { fld1 }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(_ESI + 0x3C) + 0x288))(*(_DWORD *)(_ESI + 0x3C), 8);
    __asm { fidiv   [esp+10h+var_4] }
  }
  __asm
  {
    fstp    [esp+10h+var_4]
    fld     [esp+10h+var_4]
    fild    dword ptr ds:0B372D0h
    fdiv    qword ptr ds:0A309F0h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 )
  {
    v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x45484552);
    if ( !v11 )
      v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x45484F46);
  }
  v20 = Actor_GetBaseCalcAVi(*(int **)(_ESI + 0x3C), 9, (int)v11, _ESI, 9);
  if ( v20 <= 0 )
  {
    __asm { fld1 }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(_ESI + 0x3C) + 0x288))(*(_DWORD *)(_ESI + 0x3C), 9);
    __asm { fidiv   [esp+10h+var_4] }
  }
  __asm
  {
    fstp    [esp+10h+var_4]
    fld     [esp+10h+var_4]
    fild    dword ptr ds:0B372D8h
    fdiv    qword ptr ds:0A309F0h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 && !v11 )
  {
    v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x50534552);
    if ( !v11 )
      v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x50534F46);
  }
  Actor_GetFatigueFraction(*(Actor **)(_ESI + 0x3C), 9, (int)v11);
  __asm
  {
    fstp    [esp+10h+var_4]
    fld     [esp+10h+var_4]
    fild    dword ptr ds:0B372E0h
    fdiv    qword ptr ds:0A309F0h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 )
  {
LABEL_33:
    if ( v11 )
      goto LABEL_34;
    return 0;
  }
  if ( !v11 )
  {
    v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x41464552);
    if ( !v11 )
    {
      v11 = BaseProcess_UseCounterEffect__((char ****)_ESI, 0x41464F46);
      goto LABEL_33;
    }
  }
LABEL_34:
  if ( !(*(unsigned __int8 (__thiscall **)(int, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(_ESI + 0x3C)
                                                                                           + 0x5C)
                                                                               + 0x1C))(
          *(_DWORD *)(_ESI + 0x3C) + 0x5C,
          *v11,
          0,
          0,
          0) )
    return 0;
  v15 = *(_DWORD *)(_ESI + 0x70) == 9;
  *(_DWORD *)(_ESI + 0x84) = v11;
  if ( !v15 )
  {
    if ( byte_B3B908 )
    {
      v16 = TESObjectREFR_GetName(*(TESObjectREFR **)(_ESI + 0x3C));
      Interface_ConsolePrint("%.20s is going to %s!", v16, "...just kinda stand around");
    }
    __asm
    {
      fld     dword ptr ds:0A30634h
      fstp    dword ptr [esi+188h]
    }
    *(float *)(_ESI + 0x188) = _ET1;
  }
  *(_DWORD *)(_ESI + 0x70) = 9;
  return 1;
}
