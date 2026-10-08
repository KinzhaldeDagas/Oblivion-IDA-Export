bool __thiscall sub_5E8B10(Actor *this)
{
  bool IsGuardClass; // bl
  int i; // esi
  Actor *v4; // eax

  IsGuardClass = 0; /*0x5e8b1e*/
  if ( this->vtbl->IsInCombat(this, 1) ) /*0x5e8b20*/
  {
    if ( this->vtbl->GetCombatController(this) ) /*0x5e8b30*/
    {
      for ( i = *((_DWORD *)this->vtbl->GetCombatController(this) + 0x10); i; i = *(_DWORD *)(i + 4) ) /*0x5e8b47*/
      {
        if ( !*(_DWORD *)i ) /*0x5e8b50*/
          break; /*0x5e8b54*/
        if ( IsGuardClass ) /*0x5e8b58*/
          break; /*0x5e8b58*/
        v4 = **(Actor ***)i; /*0x5e8b5a*/
        if ( v4 ) /*0x5e8b5e*/
          IsGuardClass = Actor_IsGuardClass(v4); /*0x5e8b6b*/
      }
    }
  }
  return IsGuardClass; /*0x5e8b74*/
}
