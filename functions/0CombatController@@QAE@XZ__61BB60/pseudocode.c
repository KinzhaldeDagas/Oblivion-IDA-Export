CombatController *__thiscall CombatController::CombatController(
        CombatController *this,
        int a2,
        PlayerCharacter *a3,
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

  TESPackage::TESPackage((TESPackage *)this);
  *(_DWORD *)this = &CombatController::`vftable';
  *((float *)this + 0x35) = 0.0;
  *((float *)this + 0x36) = 0.0;
  v6 = flt_A30634;
  *((float *)this + 0x37) = flt_A30634;
  *((_DWORD *)this + 0x57) = 0;
  *((float *)this + 0x3A) = v6;
  *((_DWORD *)this + 0x58) = 0;
  *((float *)this + 0x38) = 0.0;
  *((float *)this + 0x39) = 0.0;
  *((float *)this + 0x3B) = 0.0;
  *((float *)this + 0x3C) = 0.0;
  *((float *)this + 0x3D) = v6;
  *((float *)this + 0x40) = v6;
  *((float *)this + 0x3E) = 0.0;
  *((float *)this + 0x3F) = 0.0;
  *((float *)this + 0x41) = 0.0;
  *((float *)this + 0x42) = 0.0;
  *((float *)this + 0x43) = v6;
  *((float *)this + 0x4F) = v6;
  *((float *)this + 0x4D) = 0.0;
  *((float *)this + 0x4E) = 0.0;
  *((float *)this + 0x50) = 0.0;
  *((float *)this + 0x51) = 0.0;
  *((float *)this + 0x52) = v6;
  *((float *)this + 0x55) = v6;
  *((float *)this + 0x53) = 0.0;
  *((float *)this + 0x54) = 0.0;
  *((float *)this + 0x59) = 0.0;
  *((float *)this + 0x5A) = 0.0;
  *((float *)this + 0x5B) = v6;
  *((float *)this + 0x6C) = 0.0;
  *((float *)this + 0x6D) = 0.0;
  *((float *)this + 0x6E) = v6;
  ++dword_B3B914;
  *((_DWORD *)this + 0x63) = 0;
  *((_DWORD *)this + 0xF) = a2;
  v7 = (_DWORD *)FormHeapAlloc(8u);
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = 0;
  }
  else
  {
    v7 = 0;
  }
  *((_DWORD *)this + 0x10) = v7;
  TESPackage_SetType_((TESPackage *)this, kPackageType_CombatController);
  *((_DWORD *)this + 7) |= 6u;
  v8 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v8 )
    v9 = (TESPackage *)TESPackage_LocationData_constr(v8);
  else
    v9 = 0;
  TESPackage_LocationData_SetType(v9, 0);
  TESPackage_LocationData_SetReference(v9, (int)a3);
  TESPackage_SetLocation(this, (char *)v9);
  if ( v9 )
  {
    TESPackage_LocationData_destr(v9);
    FormHeapFree((unsigned int)v9);
  }
  v10 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v10 )
    v11 = (unsigned __int8 *)TESPackage_TargetData_constr(v10);
  else
    v11 = 0;
  TESPackage_SetTarget(this, v11);
  TESPackage_TargetData_SetType(*((unsigned __int8 **)this + 0xA), 0);
  TeSPackage_TargetData_SetTargetREFR(*((_DWORD **)this + 0xA), (int)a3);
  if ( v11 )
  {
    TESTexture::ClearComponentReferences(v11);
    FormHeapFree((unsigned int)v11);
  }
  *((float *)this + 0x11) = 0.0;
  *((_BYTE *)this + 0x48) = 0;
  v12 = flt_A30634;
  *((_BYTE *)this + 0x49) = 0;
  *((float *)this + 0x33) = v12;
  *((_BYTE *)this + 0x4A) = 0;
  *((float *)this + 0x15) = v12;
  *((_BYTE *)this + 0x4B) = 0;
  *((_BYTE *)this + 0x4C) = 0;
  *((_BYTE *)this + 0x4D) = 0;
  *((_BYTE *)this + 0x4E) = 0;
  *((_BYTE *)this + 0x4F) = 0;
  *((_DWORD *)this + 0x14) = 0xFF;
  *((_BYTE *)this + 0x58) = 0;
  *((_BYTE *)this + 0x59) = 0;
  *((_BYTE *)this + 0xC4) = 0;
  CombatDistance = Calc_GetCombatDistance(1.0);
  sub_612EA0((_DWORD **)this, CombatDistance);
  *((_DWORD *)this + 0x32) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0xD;
  *((_DWORD *)this + 0x1D) = 3;
  *((_DWORD *)this + 0x1E) = 3;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0;
  *((_DWORD *)this + 0x23) = 0;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x28) = 0;
  *((_DWORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x29) = 0;
  *((_DWORD *)this + 0x60) = 3;
  sub_61B190((void **)this);
  *((_DWORD *)this + 0x2C) = 0;
  *((_DWORD *)this + 0x2D) = 0;
  *((_DWORD *)this + 0x2E) = 0;
  *((_DWORD *)this + 0x2F) = 0;
  *((_DWORD *)this + 0x30) = 0;
  *((_DWORD *)this + 0x34) = 0x100;
  *((float *)this + 0x35) = 0.0;
  *((float *)this + 0x36) = 0.0;
  v13 = flt_A30634;
  *((float *)this + 0x37) = flt_A30634;
  *((float *)this + 0x3D) = v13;
  *((float *)this + 0x3B) = 0.0;
  *((float *)this + 0x3C) = 0.0;
  *((float *)this + 0x3E) = 0.0;
  *((float *)this + 0x3F) = 0.0;
  *((float *)this + 0x40) = v13;
  *((float *)this + 0x3A) = v13;
  *((float *)this + 0x38) = 0.0;
  *((float *)this + 0x39) = 0.0;
  *((float *)this + 0x41) = *((float *)this + 0x11);
  *((float *)this + 0x42) = 1.0;
  *((float *)this + 0x43) = v13;
  *((float *)this + 0x6E) = v13;
  v14 = v13;
  v15 = 0.0;
  v16 = v14;
  *((float *)this + 0x6C) = 0.0;
  *((float *)this + 0x6D) = 0.0;
  *((_BYTE *)this + 0x115) = 1;
  *((_DWORD *)this + 0x46) = 0;
  *((_DWORD *)this + 0x47) = 0;
  *((_BYTE *)this + 0x116) = 0;
  *((_BYTE *)this + 0x130) = 0;
  *((_BYTE *)this + 0x131) = 0;
  *((_DWORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0x4B) = 0;
  *((_BYTE *)this + 0x114) = 0;
  *((float *)this + 0x48) = Vector3_InitValue_;
  *((float *)this + 0x49) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x4A) = dword_B3F9B0;
  *((_BYTE *)this + 0x158) = 0;
  *((_BYTE *)this + 0x159) = 0;
  *((_BYTE *)this + 0x15A) = 0;
  if ( *((_DWORD *)this + 0x58) )
  {
    do
    {
      v17 = *(_DWORD *)(*((_DWORD *)this + 0x58) + 4);
      FormHeapFree(*((_DWORD *)this + 0x58));
      *((_DWORD *)this + 0x58) = v17;
    }
    while ( v17 );
    v16 = flt_A30634;
    v15 = 0.0;
  }
  *((_DWORD *)this + 0x57) = 0;
  *((float *)this + 0x5C) = v15;
  *((float *)this + 0x61) = v16;
  *((_DWORD *)this + 0x5E) = 0;
  *((float *)this + 0x62) = v16;
  *((_BYTE *)this + 0x174) = 0;
  *((_BYTE *)this + 0x17D) = 0;
  v23 = v15;
  *((_BYTE *)this + 0x17E) = 0;
  *((_BYTE *)this + 0x17F) = 0;
  *((_BYTE *)this + 0x17C) = 0;
  *((_BYTE *)this + 0x15B) = 0;
  *((_DWORD *)this + 0x6A) = 0;
  sub_616190((int)this, (int)a3, 1.0, v15, a3, a4, a5, v23, v23);
  *((_DWORD *)this + 6) = 0xC;
  for ( i = 0; i < 2; ++i )
  {
    if ( *(_DWORD *)(4 * i + 0xB15198) == 9 )
      break;
  }
  if ( i < 2 )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0x17C))(
      *(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58),
      i);
  *((_WORD *)this + 0xC9) = 0;
  *((float *)this + 0x66) = 0.0;
  *((_BYTE *)this + 0x194) = 0;
  *((float *)this + 0x67) = 0.0;
  *((_BYTE *)this + 0x195) = 0;
  *((float *)this + 0x68) = 0.0;
  *((_BYTE *)this + 0x196) = 0;
  *((_BYTE *)this + 0x197) = 0;
  *((_BYTE *)this + 0x190) = 0;
  *((_BYTE *)this + 0x191) = 1;
  *((_BYTE *)this + 0x1A4) = 0;
  v19 = (double)(dword_B3B910 % 0xA);
  ++dword_B3B910;
  v24 = v19 * dbl_A2FC80;
  *((float *)this + 0x59) = *((float *)this + 0x11);
  *((float *)this + 0x5A) = v24;
  v21 = flt_A30634;
  *((float *)this + 0x5B) = flt_A30634;
  *((float *)this + 0x50) = *((float *)this + 0x11);
  *((float *)this + 0x51) = v24;
  *((float *)this + 0x52) = v21;
  *((float *)this + 0x4D) = *((float *)this + 0x11);
  *((float *)this + 0x4E) = v24;
  *((float *)this + 0x4F) = v21;
  *((float *)this + 0x53) = *((float *)this + 0x11);
  *((float *)this + 0x54) = v24;
  *((float *)this + 0x55) = v21;
  *((_BYTE *)this + 0x1AC) = 0xFF;
  *((_BYTE *)this + 0x1AD) = 0;
  *((_BYTE *)this + 0x1AE) = 0;
  *((_BYTE *)this + 0x1BC) = 0;
  *((_BYTE *)this + 0x1BD) = 1;
  return this;
}
