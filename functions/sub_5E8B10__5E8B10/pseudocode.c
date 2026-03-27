bool __thiscall sub_5E8B10(Actor *this)
{
  bool v2; // bl
  int i; // esi
  Actor *v4; // eax

  v2 = 0;
  if ( this->vtbl->IsInCombat(this, 1) )
  {
    if ( this->vtbl->GetCombatController(this) )
    {
      for ( i = *((_DWORD *)this->vtbl->GetCombatController(this) + 0x10); i; i = *(_DWORD *)(i + 4) )
      {
        if ( !*(_DWORD *)i )
          break;
        if ( v2 )
          break;
        v4 = **(Actor ***)i;
        if ( v4 )
          v2 = sub_5E6C60(v4);
      }
    }
  }
  return v2;
}
