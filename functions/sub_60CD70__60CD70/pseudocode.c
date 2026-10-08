// ArrowProjectile virtual update wrapper. It ignores the supplied update argument and feeds the current global frame delta to ArrowProjectile_UpdateFlightAndLifecycle.
void __thiscall ArrowProjectile_Update(ArrowProjectile *this, float ignoredDeltaTime)
{
  ArrowProjectile_UpdateFlightAndLifecycle(this, *(float *)&MEMORY[0xB33E90][0xC]); /*0x60cd7a*/
}
