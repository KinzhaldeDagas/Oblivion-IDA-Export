bool __thiscall sub_5E3400(Actor *this)
{
  bool result; // al
  LowProcess *process; // eax
  TESPackage *v4; // eax
  UInt8 type; // al
  CombatController *v6; // edi
  int v7; // edi
  char v8; // al
  char v9; // bl
  LowProcess *v10; // esi
  TESPackage *editorPackage; // esi

  if ( LOBYTE(this->members.unk0D8[0]) )
    return 1;
  process = this->members.super.process;
  if ( process && (v4 = process->editorPackage) != 0 && ((type = v4->members.type, type == 0xC) || type == 0xF) )
  {
    v6 = this->vtbl->GetCombatController(this);
    result = (!v6
           || (Actor_CanFightInWater(this) || *((_DWORD *)v6 + 0x1C) == 7)
           && (v7 = *((_DWORD *)v6 + 0x1C), v7 != 0xD)
           && (sub_612690(v7), !v8))
          && Actor_CanSwim(this);
  }
  else
  {
    v9 = 0;
    if ( !Actor_IsNPC(this) )
      return Actor_CanSwim(this);
    v10 = this->members.super.process;
    if ( v10 )
    {
      editorPackage = v10->editorPackage;
      if ( editorPackage )
      {
        if ( (editorPackage->members.packageFlags & 0x40000) != 0 )
          return 1;
      }
    }
    return v9;
  }
  return result;
}
