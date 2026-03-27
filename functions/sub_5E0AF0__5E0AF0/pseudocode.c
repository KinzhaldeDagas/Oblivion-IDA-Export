int __thiscall sub_5E0AF0(Actor *this)
{
  CombatController *v1; // eax

  v1 = this->vtbl->GetCombatController(this);
  if ( v1 )
    return sub_6135F0((int)v1);
  else
    return 0;
}
