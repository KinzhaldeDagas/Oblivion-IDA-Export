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
  SInt32 MinimumSkillForMastery; // eax
  int v12; // ecx
  size_t v14; // [esp+8h] [ebp-128h]
  CHAR Buffer[260]; // [esp+1Ch] [ebp-114h] BYREF
  unsigned int v16; // [esp+12Ch] [ebp-4h]

  sub_88B070(a1); /*0x535129*/
  v1 = (HavokError *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x124, 0x15); /*0x535140*/
  *((_WORD *)v1 + 2) = 0x124; /*0x535142*/
  v16 = 0; /*0x53514e*/
  v2 = HavokError::HavokError(v1); /*0x53515e*/
  v3 = unk_BA7FB0; /*0x535160*/
  v4 = unk_BA7FB0 == 0; /*0x535165*/
  v16 = 0xFFFFFFFF; /*0x535167*/
  if ( !v4 ) /*0x535172*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x535174*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x535185*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x535191*/
    }
  }
  v5 = unk_BA7D98; /*0x535193*/
  unk_BA7FB0 = (int)v2; /*0x535199*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 0x10))(v5, 8, 0x15); /*0x5351aa*/
  *(_WORD *)(v6 + 4) = 8; /*0x5351ac*/
  *(_WORD *)(v6 + 6) = 1; /*0x5351b2*/
  *(_DWORD *)v6 = &HavokStreambufFactory::`vftable'; /*0x5351b8*/
  v7 = unk_BA7FB4; /*0x5351be*/
  if ( unk_BA7FB4 ) /*0x5351be*/
  {
    v8 = (void (__thiscall ***)(_DWORD, int))unk_BA7FB4; /*0x5351cc*/
    if ( *(_WORD *)(v7 + 4) ) /*0x5351c7*/
    {
      if ( !--*(_WORD *)(v7 + 6) ) /*0x5351d8*/
        (**v8)(v8, 1); /*0x5351e4*/
    }
  }
  unk_BA7FB4 = v6; /*0x5351f0*/
  GetCurrentDirectoryA(0x104, Buffer); /*0x5351f6*/
  v9 = strstr(Buffer, "TES4"); /*0x535206*/
  if ( v9 || (v9 = strstr(Buffer, "tes4")) != 0 ) /*0x535226*/
  {
    v10 = v9 - Buffer; /*0x53522e*/
    LODWORD(v14) = v9 - Buffer; /*0x535230*/
    strncpy((char *)v2 + 0x20, Buffer, v14); /*0x535238*/
    *((_BYTE *)v2 + v10 + 0x20) = 0; /*0x535240*/
  }
  flt_B2E8A8 = MEMORY[0xB376F8]; /*0x53524d*/
  unk_BA7A60 = MEMORY[0xB374B0]; /*0x535259*/
  flt_B2E76C = MEMORY[0xB374B8]; /*0x535265*/
  MinimumSkillForMastery = ActorValue_GetMinimumSkillForMastery(kSkillMastery_Expert); /*0x53526b*/
  v12 = iSimTypeHavok; /*0x535270*/
  flt_B2E774 = (double)MinimumSkillForMastery * fConstant_Inv100; /*0x535285*/
  flt_B2E770 = MEMORY[0xB374A8]; /*0x535291*/
  flt_B2E778 = unk_B37470 * hkFactor; /*0x5352a3*/
  return SetFromiSimType(v12); /*0x5352b1*/
}
