void __thiscall sub_5E0AF0(Actor *this)
{
  CombatController *v1; // eax

  v1 = this->vtbl->GetCombatController(this); /*0x5e0af8*/
  if ( v1 ) /*0x5e0afc*/
    CombatController_GetCurrentTarget((int)v1); /*0x5e0b00*/
}
