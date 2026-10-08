char __thiscall sub_5E3400(Actor *this)
{
  char result; // al
  LowProcess *process; // eax
  TESPackage *v4; // eax
  TESPackageType type; // al
  CombatController *v6; // edi
  int v7; // edi
  char v8; // bl
  LowProcess *v9; // esi
  TESPackage *editorPackage; // esi

  if ( LOBYTE(this->members.unk0D8[0]) ) /*0x5e3403*/
    return 1; /*0x5e340f*/
  process = this->members.super.process; /*0x5e3410*/
  if ( process /*0x5e3427*/
    && (v4 = process->editorPackage) != 0
    && ((type = v4->members.type, type == kPackageType_Combat) || type == kPackageType_Alarm) )
  {
    v6 = this->vtbl->GetCombatController(this); /*0x5e3434*/
    result = (!v6 /*0x5e3461*/
           || (Actor_CanFightInWater(this) || *((_DWORD *)v6 + 0x1C) == 7)
           && (v7 = *((_DWORD *)v6 + 0x1C), v7 != 0xD)
           && !(unsigned __int8)CombatMode_IsRangedWeaponMode(v7))
          && Actor_CanSwim(this);
  }
  else
  {
    v8 = 0; /*0x5e346f*/
    if ( !Actor_IsNPC(this) ) /*0x5e3471*/
      return Actor_CanSwim(this); /*0x5e34a0*/
    v9 = this->members.super.process; /*0x5e347a*/
    if ( v9 ) /*0x5e347f*/
    {
      editorPackage = v9->editorPackage; /*0x5e3481*/
      if ( editorPackage ) /*0x5e3486*/
      {
        if ( (editorPackage->members.packageFlags & 0x40000) != 0 ) /*0x5e3490*/
          return 1; /*0x5e3498*/
      }
    }
    return v8; /*0x5e34a2*/
  }
  return result; /*0x5e340e*/
}
