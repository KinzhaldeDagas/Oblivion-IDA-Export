int __usercall sub_5350F0@<eax>(int a1@<ebx>)
{
  HavokError *v1; // eax
  HavokError *v2; // edi
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  char *v9; // eax
  int v10; // esi
  int MasterySkill; // eax
  int v12; // ecx
  size_t v14; // [esp+8h] [ebp-128h]
  CHAR Buffer[260]; // [esp+1Ch] [ebp-114h] BYREF
  unsigned int v16; // [esp+12Ch] [ebp-4h]

  sub_88B070(a1);
  v1 = (HavokError *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x124, 0x15);
  *((_WORD *)v1 + 2) = 0x124;
  v16 = 0;
  v2 = HavokError::HavokError(v1);
  v3 = dword_BA7FB0;
  v4 = dword_BA7FB0 == 0;
  v16 = 0xFFFFFFFF;
  if ( !v4 )
  {
    if ( *(_WORD *)(v3 + 4) )
    {
      if ( !--*(_WORD *)(v3 + 6) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  v5 = dword_BA7D98;
  dword_BA7FB0 = (int)v2;
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 0x10))(v5, 8, 0x15);
  *(_WORD *)(v6 + 4) = 8;
  *(_WORD *)(v6 + 6) = 1;
  *(_DWORD *)v6 = &HavokStreambufFactory::`vftable';
  v7 = dword_BA7FB4;
  if ( dword_BA7FB4 )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))dword_BA7FB4;
    if ( *(_WORD *)(v7 + 4) )
    {
      if ( !--*(_WORD *)(v7 + 6) )
        (**v8)(v8, 1);
    }
  }
  dword_BA7FB4 = v6;
  GetCurrentDirectoryA(0x104, Buffer);
  v9 = strstr(Buffer, "TES4");
  if ( v9 || (v9 = strstr(Buffer, "tes4")) != 0 )
  {
    v10 = v9 - Buffer;
    LODWORD(v14) = v9 - Buffer;
    strncpy((char *)v2 + 0x20, Buffer, v14);
    *((_BYTE *)v2 + v10 + 0x20) = 0;
  }
  flt_B2E8A8 = fMaximumWind;
  flt_BA7A60 = fJumpMoveBase;
  flt_B2E76C = fJumpMoveMult;
  MasterySkill = ActorValue_GetMasterySkill(3);
  v12 = iSimTypeHavok;
  flt_B2E774 = (double)MasterySkill * fConstant_Inv100;
  flt_B2E770 = fJumpDoubleMult;
  flt_B2E778 = flt_B37470 * hkFactor;
  return SetFromiSimType(v12);
}
