double __thiscall TESActorBase_GetEquippableItemRating(int *this, unsigned __int8 *a2)
{
  _DWORD *v3; // eax
  unsigned __int16 v4; // ax
  double result; // st7
  char *v6; // eax
  char *v7; // edi
  int v8; // ebx
  int WeaponSkillAV; // eax
  int v10; // eax
  _DWORD *v11; // eax
  unsigned __int16 *v12; // eax
  unsigned __int16 *v13; // edi
  double v14; // st7
  int v15; // ebx
  int v16; // [esp+8h] [ebp-34h]
  int v17; // [esp+Ch] [ebp-30h]
  int v18; // [esp+14h] [ebp-28h]
  float v19; // [esp+18h] [ebp-24h]
  float v20; // [esp+1Ch] [ebp-20h]
  float v21; // [esp+20h] [ebp-1Ch]
  float v22; // [esp+30h] [ebp-Ch]
  float v23; // [esp+30h] [ebp-Ch]
  float v24; // [esp+30h] [ebp-Ch]
  float v25; // [esp+30h] [ebp-Ch]
  float v26; // [esp+30h] [ebp-Ch]
  float v27; // [esp+30h] [ebp-Ch]
  float v28; // [esp+34h] [ebp-8h]
  float v29; // [esp+38h] [ebp-4h]
  int ArmorRating; // [esp+38h] [ebp-4h]
  float v31; // [esp+40h] [ebp+4h]

  v22 = 0.0;
  if ( !a2 )
    return v22;
  switch ( a2[4] )
  {
    case 0x14u:
      v12 = (unsigned __int16 *)OblivionDynamicCast(
                                  a2,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESObjectARMO `RTTI Type Descriptor',
                                  0);
      v13 = v12;
      if ( !v12 || !TESHealthForm_GetHealthForForm(v12) )
        return v22;
      v14 = ((double (__thiscall *)(int *, int, _DWORD))*(_DWORD *)(*this + 0x12C))(this, 7, 1.0);
      v15 = *this;
      v21 = v14;
      v20 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v13));
      v19 = ((double (__thiscall *)(int *))*(_DWORD *)(v15 + 0x12C))(this);
      ArmorRating = (int)TESObjectARMO_GetArmorRating(v13);
      v27 = Calc_ArmorRating((unsigned __int16)ArmorRating, v19, v20, v21);
      result = v27;
      break;
    case 0x16u:
      v11 = OblivionDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectCLOT `RTTI Type Descriptor',
              0);
      if ( !v11 )
        return v22;
      v26 = Calc_ClothingRatingFromValue_(v11[0x14]);
      result = v26;
      break;
    case 0x1Au:
      return flt_A2FE7C;
    case 0x21u:
      v6 = (char *)OblivionDynamicCast(
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectWEAP `RTTI Type Descriptor',
                     0);
      v7 = v6;
      if ( !v6 || !TESHealthForm_GetHealthForForm(v6) )
        return v22;
      v8 = *this;
      WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV(v7);
      v29 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v8 + 0x12C))(this, WeaponSkillAV);
      v28 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*this + 0x12C))(this, 7);
      v24 = (float)(*(int (__thiscall **)(int *, _DWORD))(*this + 0x128))(this, 0);
      v31 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*this + 0x12C))(this, 0xA);
      v18 = (*(unsigned __int16 (__thiscall **)(char *))(*((_DWORD *)v7 + 0x22) + 0x10))(v7 + 0x88);
      v17 = Double_To_SInt32(v24);
      v16 = Double_To_SInt32(v28);
      v10 = Double_To_SInt32(v29);
      v25 = Calc_WeaponDamage(v10, v16, v17, v31, v18, 1.0, 1.0, 0.0);
      result = v25;
      break;
    case 0x22u:
      v3 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESAmmo `RTTI Type Descriptor',
             0);
      if ( !v3 )
        return v22;
      v4 = (*(int (__thiscall **)(_DWORD *))(v3[0x1D] + 0x10))(v3 + 0x1D);
      v23 = Calc_AmmoRatingFromDamage_(v4);
      result = v23;
      break;
    default:
      return v22;
  }
  return result;
}
