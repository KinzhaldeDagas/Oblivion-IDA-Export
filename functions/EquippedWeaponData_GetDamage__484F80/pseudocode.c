// TES4 authoritative call ABI: EntryData in ECX, Actor* owner as first stack argument, float damageOffset as second; returns damage through ST0 and ends with retn 8. This type is required to keep ArrowProjectile constructor stack analysis correct.
float __thiscall EquippedWeaponData_GetDamage(EntryData *this, Actor *owner, float damageOffset)
{
  int v3; // ebp
  double v4; // st7
  TESForm *type; // edi
  char v6; // al
  float v8; // [esp+2Ch] [ebp+Ch]
  double v9; // [esp+30h] [ebp+10h]
  int v10; // [esp+38h] [ebp+18h]
  float v11; // [esp+3Ch] [ebp+1Ch]
  int v12; // [esp+40h] [ebp+20h]
  float v13; // [esp+44h] [ebp+24h]
  float v14; // [esp+48h] [ebp+28h]
  float v15; // [esp+4Ch] [ebp+2Ch]

  v4 = kTerrainLODQuadRayDirectionZ; /*0x484f83*/
  type = this->type; /*0x484f96*/
  v6 = type->member.type; /*0x484f99*/
  if ( v6 == 0x21 ) /*0x484f9e*/
    EquippedWeaponData_GetDamage_::WeaponDamage( /*0x484f9f*/
      (int)this,
      v3,
      owner,
      v4,
      (int)owner,
      SLODWORD(damageOffset),
      v8,
      v9,
      *(float *)&v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  else
    EquippedWeaponData_GetDamage_::CheckIsAmmo( /*0x484f9e*/
      (int)this,
      (int)type,
      (int *)owner,
      v6,
      *(float *)&owner,
      damageOffset,
      v8,
      *(float *)&v9,
      SHIDWORD(v9),
      v10,
      v11);
  return v4;
}
