CombatController *__thiscall CombatController::CombatController(
        CombatController *this,
        int a2,
        Actor *a3,
        int a4,
        float a5)
{
  double v6; // st6
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  TESPackage *v9; // edi
  _DWORD *v10; // eax
  unsigned __int8 *v11; // edi
  double v12; // st7
  double v13; // st6
  double v14; // rt1
  double v15; // st6
  double v16; // st7
  int v17; // edi
  int i; // eax
  double v19; // st7
  double v21; // st6
  float CombatDistance; // [esp+4h] [ebp-28h]
  float v23; // [esp+4h] [ebp-28h]
  float v24; // [esp+30h] [ebp+4h]

  TESPackage::TESPackage((TESPackage *)this); /*0x61bb8b*/
  *(_DWORD *)this = &CombatController::`vftable'; /*0x61bb92*/
  *((float *)this + 0x35) = 0.0; /*0x61bb98*/
  *((float *)this + 0x36) = 0.0; /*0x61bb9e*/
  v6 = kTerrainLODQuadRayDirectionZ; /*0x61bba8*/
  *((float *)this + 0x37) = kTerrainLODQuadRayDirectionZ; /*0x61bbb0*/
  *((_DWORD *)this + 0x57) = 0; /*0x61bbb6*/
  *((float *)this + 0x3A) = v6; /*0x61bbbc*/
  *((_DWORD *)this + 0x58) = 0; /*0x61bbc2*/
  *((float *)this + 0x38) = 0.0; /*0x61bbcc*/
  *((float *)this + 0x39) = 0.0; /*0x61bbd6*/
  *((float *)this + 0x3B) = 0.0; /*0x61bbdc*/
  *((float *)this + 0x3C) = 0.0; /*0x61bbe2*/
  *((float *)this + 0x3D) = v6; /*0x61bbea*/
  *((float *)this + 0x40) = v6; /*0x61bbf0*/
  *((float *)this + 0x3E) = 0.0; /*0x61bbf8*/
  *((float *)this + 0x3F) = 0.0; /*0x61bbfe*/
  *((float *)this + 0x41) = 0.0; /*0x61bc04*/
  *((float *)this + 0x42) = 0.0; /*0x61bc0a*/
  *((float *)this + 0x43) = v6; /*0x61bc12*/
  *((float *)this + 0x4F) = v6; /*0x61bc18*/
  *((float *)this + 0x4D) = 0.0; /*0x61bc20*/
  *((float *)this + 0x4E) = 0.0; /*0x61bc26*/
  *((float *)this + 0x50) = 0.0; /*0x61bc2c*/
  *((float *)this + 0x51) = 0.0; /*0x61bc32*/
  *((float *)this + 0x52) = v6; /*0x61bc3a*/
  *((float *)this + 0x55) = v6; /*0x61bc40*/
  *((float *)this + 0x53) = 0.0; /*0x61bc48*/
  *((float *)this + 0x54) = 0.0; /*0x61bc4e*/
  *((float *)this + 0x59) = 0.0; /*0x61bc54*/
  *((float *)this + 0x5A) = 0.0; /*0x61bc5a*/
  *((float *)this + 0x5B) = v6; /*0x61bc62*/
  *((float *)this + 0x6C) = 0.0; /*0x61bc6a*/
  *((float *)this + 0x6D) = 0.0; /*0x61bc70*/
  *((float *)this + 0x6E) = v6; /*0x61bc76*/
  ++unk_B3B914; /*0x61bc7c*/
  *((_DWORD *)this + 0x63) = 0; /*0x61bc83*/
  *((_DWORD *)this + 0xF) = a2; /*0x61bc89*/
  v7 = (_DWORD *)FormHeapAlloc(8u); /*0x61bc8c*/
  if ( v7 ) /*0x61bc96*/
  {
    *v7 = 0; /*0x61bc98*/
    v7[1] = 0; /*0x61bc9a*/
  }
  else
  {
    v7 = 0; /*0x61bc9f*/
  }
  *((_DWORD *)this + 0x10) = v7; /*0x61bca5*/
  TESPackage_SetType_((TESPackage *)this, kPackageType_CombatController); /*0x61bca8*/
  *((_DWORD *)this + 7) |= 6u; /*0x61bcad*/
  v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x61bcb3*/
  if ( v8 ) /*0x61bcc6*/
    v9 = (TESPackage *)TESPackage_LocationData_constr(v8); /*0x61bccf*/
  else
    v9 = 0; /*0x61bcd3*/
  TESPackage_LocationData_SetType(v9, 0); /*0x61bcdc*/
  TESPackage_LocationData_SetReference(v9, (int)a3); /*0x61bce8*/
  TESPackage_SetLocation(this, (char *)v9); /*0x61bcf0*/
  if ( v9 ) /*0x61bcf7*/
  {
    TESPackage_LocationData_destr(v9); /*0x61bcfb*/
    FormHeapFree((unsigned int)v9); /*0x61bd01*/
  }
  v10 = (_DWORD *)FormHeapAlloc(0xCu); /*0x61bd0b*/
  if ( v10 ) /*0x61bd1e*/
    v11 = (unsigned __int8 *)TESPackage_TargetData_constr(v10); /*0x61bd27*/
  else
    v11 = 0; /*0x61bd2b*/
  TESPackage_SetTarget(this, v11); /*0x61bd34*/
  TESPackage_TargetData_SetType(*((unsigned __int8 **)this + 0xA), 0); /*0x61bd3d*/
  TeSPackage_TargetData_SetTargetREFR(*((_DWORD **)this + 0xA), (int)a3); /*0x61bd46*/
  if ( v11 ) /*0x61bd4d*/
  {
    Shared_NoOpVirtual_60D0A0(v11); /*0x61bd51*/
    FormHeapFree((unsigned int)v11); /*0x61bd57*/
  }
  *((float *)this + 0x11) = 0.0; /*0x61bd62*/
  *((_BYTE *)this + 0x48) = 0; /*0x61bd65*/
  v12 = kTerrainLODQuadRayDirectionZ; /*0x61bd68*/
  *((_BYTE *)this + 0x49) = 0; /*0x61bd6e*/
  *((float *)this + 0x33) = v12; /*0x61bd71*/
  *((_BYTE *)this + 0x4A) = 0; /*0x61bd77*/
  *((float *)this + 0x15) = v12; /*0x61bd7a*/
  *((_BYTE *)this + 0x4B) = 0; /*0x61bd7d*/
  *((_BYTE *)this + 0x4C) = 0; /*0x61bd82*/
  *((_BYTE *)this + 0x4D) = 0; /*0x61bd88*/
  *((_BYTE *)this + 0x4E) = 0; /*0x61bd8b*/
  *((_BYTE *)this + 0x4F) = 0; /*0x61bd8e*/
  *((_DWORD *)this + 0x14) = 0xFF; /*0x61bd91*/
  *((_BYTE *)this + 0x58) = 0; /*0x61bd98*/
  *((_BYTE *)this + 0x59) = 0; /*0x61bd9b*/
  *((_BYTE *)this + 0xC4) = 0; /*0x61bd9e*/
  CombatDistance = Calc_GetCombatDistance(1.0); /*0x61bda9*/
  sub_612EA0((_DWORD **)this, CombatDistance); /*0x61bdae*/
  *((_DWORD *)this + 0x32) = 0; /*0x61bdba*/
  *((_DWORD *)this + 0x1B) = 0; /*0x61bdc0*/
  *((_DWORD *)this + 0x1C) = 0xD; /*0x61bdc3*/
  *((_DWORD *)this + 0x1D) = 3; /*0x61bdca*/
  *((_DWORD *)this + 0x1E) = 3; /*0x61bdcd*/
  *((_DWORD *)this + 0x17) = 0; /*0x61bdd0*/
  *((_DWORD *)this + 0x18) = 0; /*0x61bdd3*/
  *((_DWORD *)this + 0x19) = 0; /*0x61bdd6*/
  *((_DWORD *)this + 0x1A) = 0; /*0x61bdd9*/
  *((_DWORD *)this + 0x1F) = 0; /*0x61bddc*/
  *((_DWORD *)this + 0x20) = 0; /*0x61bddf*/
  *((_DWORD *)this + 0x21) = 0; /*0x61bde5*/
  *((_DWORD *)this + 0x22) = 0; /*0x61bdeb*/
  *((_DWORD *)this + 0x23) = 0; /*0x61bdf1*/
  *((_DWORD *)this + 0x24) = 0; /*0x61bdf7*/
  *((_DWORD *)this + 0x26) = 0; /*0x61bdfd*/
  *((_DWORD *)this + 0x25) = 0; /*0x61be03*/
  *((_DWORD *)this + 0x27) = 0; /*0x61be09*/
  *((_DWORD *)this + 0x28) = 0; /*0x61be0f*/
  *((_DWORD *)this + 0x2A) = 0; /*0x61be15*/
  *((_DWORD *)this + 0x29) = 0; /*0x61be1b*/
  *((_DWORD *)this + 0x60) = 3; /*0x61be21*/
  sub_61B190((void **)this); /*0x61be27*/
  *((_DWORD *)this + 0x2C) = 0; /*0x61be2e*/
  *((_DWORD *)this + 0x2D) = 0; /*0x61be34*/
  *((_DWORD *)this + 0x2E) = 0; /*0x61be3a*/
  *((_DWORD *)this + 0x2F) = 0; /*0x61be40*/
  *((_DWORD *)this + 0x30) = 0; /*0x61be46*/
  *((_DWORD *)this + 0x34) = 0x100; /*0x61be4c*/
  *((float *)this + 0x35) = 0.0; /*0x61be56*/
  *((float *)this + 0x36) = 0.0; /*0x61be5c*/
  v13 = kTerrainLODQuadRayDirectionZ; /*0x61be62*/
  *((float *)this + 0x37) = kTerrainLODQuadRayDirectionZ; /*0x61be68*/
  *((float *)this + 0x3D) = v13; /*0x61be6e*/
  *((float *)this + 0x3B) = 0.0; /*0x61be76*/
  *((float *)this + 0x3C) = 0.0; /*0x61be7c*/
  *((float *)this + 0x3E) = 0.0; /*0x61be82*/
  *((float *)this + 0x3F) = 0.0; /*0x61be88*/
  *((float *)this + 0x40) = v13; /*0x61be90*/
  *((float *)this + 0x3A) = v13; /*0x61be96*/
  *((float *)this + 0x38) = 0.0; /*0x61be9e*/
  *((float *)this + 0x39) = 0.0; /*0x61bea4*/
  *((float *)this + 0x41) = *((float *)this + 0x11); /*0x61bead*/
  *((float *)this + 0x42) = 1.0; /*0x61beb5*/
  *((float *)this + 0x43) = v13; /*0x61bebd*/
  *((float *)this + 0x6E) = v13; /*0x61bec3*/
  v14 = v13; /*0x61bec9*/
  v15 = 0.0; /*0x61bec9*/
  v16 = v14; /*0x61bec9*/
  *((float *)this + 0x6C) = 0.0; /*0x61becb*/
  *((float *)this + 0x6D) = 0.0; /*0x61bed1*/
  *((_BYTE *)this + 0x115) = 1; /*0x61bed7*/
  *((_DWORD *)this + 0x46) = 0; /*0x61bede*/
  *((_DWORD *)this + 0x47) = 0; /*0x61bee4*/
  *((_BYTE *)this + 0x116) = 0; /*0x61beea*/
  *((_BYTE *)this + 0x130) = 0; /*0x61bef0*/
  *((_BYTE *)this + 0x131) = 0; /*0x61bef6*/
  *((_DWORD *)this + 0x2B) = 0; /*0x61befc*/
  *((_DWORD *)this + 0x4B) = 0; /*0x61bf02*/
  *((_BYTE *)this + 0x114) = 0; /*0x61bf08*/
  *((float *)this + 0x48) = g_zeroNiPoint3; /*0x61bf14*/
  *((float *)this + 0x49) = *(&g_zeroNiPoint3 + 1); /*0x61bf20*/
  *((float *)this + 0x4A) = MEMORY[0xB3F9B0][0]; /*0x61bf2b*/
  *((_BYTE *)this + 0x158) = 0; /*0x61bf31*/
  *((_BYTE *)this + 0x159) = 0; /*0x61bf37*/
  *((_BYTE *)this + 0x15A) = 0; /*0x61bf3d*/
  if ( *((_DWORD *)this + 0x58) ) /*0x61bf43*/
  {
    do /*0x61bf69*/
    {
      v17 = *(_DWORD *)(*((_DWORD *)this + 0x58) + 4); /*0x61bf55*/
      FormHeapFree(*((_DWORD *)this + 0x58)); /*0x61bf59*/
      *((_DWORD *)this + 0x58) = v17; /*0x61bf63*/
    }
    while ( v17 ); /*0x61bf69*/
    v16 = kTerrainLODQuadRayDirectionZ; /*0x61bf6b*/
    v15 = 0.0; /*0x61bf71*/
  }
  *((_DWORD *)this + 0x57) = 0; /*0x61bf7b*/
  *((float *)this + 0x5C) = v15; /*0x61bf81*/
  *((float *)this + 0x61) = v16; /*0x61bf8c*/
  *((_DWORD *)this + 0x5E) = 0; /*0x61bf92*/
  *((float *)this + 0x62) = v16; /*0x61bf98*/
  *((_BYTE *)this + 0x174) = 0; /*0x61bf9e*/
  *((_BYTE *)this + 0x17D) = 0; /*0x61bfa4*/
  v23 = v15; /*0x61bfaa*/
  *((_BYTE *)this + 0x17E) = 0; /*0x61bfae*/
  *((_BYTE *)this + 0x17F) = 0; /*0x61bfbc*/
  *((_BYTE *)this + 0x17C) = 0; /*0x61bfc2*/
  *((_BYTE *)this + 0x15B) = 0; /*0x61bfc8*/
  *((_DWORD *)this + 0x6A) = 0; /*0x61bfce*/
  CombatController_TryAddTarget((int)this, (int)a3, 1.0, v15, a3, a4, a5, v23, v23); /*0x61bfd4*/
  *((_DWORD *)this + 6) = 0xC; /*0x61bfd9*/
  for ( i = 0; i < 2; ++i ) /*0x61bfe0*/
  {
    if ( *(_DWORD *)(4 * i + 0xB15198) == 9 ) /*0x61bfee*/
      break; /*0x61bfee*/
  }
  if ( i < 2 ) /*0x61c001*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0x17C))( /*0x61c00c*/
      *(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58),
      i);
  *((_WORD *)this + 0xC9) = 0; /*0x61c010*/
  *((float *)this + 0x66) = 0.0; /*0x61c017*/
  *((_BYTE *)this + 0x194) = 0; /*0x61c01d*/
  *((float *)this + 0x67) = 0.0; /*0x61c023*/
  *((_BYTE *)this + 0x195) = 0; /*0x61c029*/
  *((float *)this + 0x68) = 0.0; /*0x61c02f*/
  *((_BYTE *)this + 0x196) = 0; /*0x61c035*/
  *((_BYTE *)this + 0x197) = 0; /*0x61c03b*/
  *((_BYTE *)this + 0x190) = 0; /*0x61c041*/
  *((_BYTE *)this + 0x191) = 1; /*0x61c047*/
  *((_BYTE *)this + 0x1A4) = 0; /*0x61c04e*/
  v19 = (double)(unk_B3B910 % 0xA); /*0x61c07b*/
  ++unk_B3B910; /*0x61c07f*/
  v24 = v19 * dbl_A2FC80; /*0x61c08d*/
  *((float *)this + 0x59) = *((float *)this + 0x11); /*0x61c094*/
  *((float *)this + 0x5A) = v24; /*0x61c09e*/
  v21 = kTerrainLODQuadRayDirectionZ; /*0x61c0a4*/
  *((float *)this + 0x5B) = kTerrainLODQuadRayDirectionZ; /*0x61c0aa*/
  *((float *)this + 0x50) = *((float *)this + 0x11); /*0x61c0b3*/
  *((float *)this + 0x51) = v24; /*0x61c0bb*/
  *((float *)this + 0x52) = v21; /*0x61c0c3*/
  *((float *)this + 0x4D) = *((float *)this + 0x11); /*0x61c0cc*/
  *((float *)this + 0x4E) = v24; /*0x61c0d4*/
  *((float *)this + 0x4F) = v21; /*0x61c0dc*/
  *((float *)this + 0x53) = *((float *)this + 0x11); /*0x61c0e5*/
  *((float *)this + 0x54) = v24; /*0x61c0ed*/
  *((float *)this + 0x55) = v21; /*0x61c0f3*/
  *((_BYTE *)this + 0x1AC) = 0xFF; /*0x61c0f9*/
  *((_BYTE *)this + 0x1AD) = 0; /*0x61c100*/
  *((_BYTE *)this + 0x1AE) = 0; /*0x61c106*/
  *((_BYTE *)this + 0x1BC) = 0; /*0x61c10c*/
  *((_BYTE *)this + 0x1BD) = 1; /*0x61c112*/
  return this; /*0x61c119*/
}
