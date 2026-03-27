bool __cdecl Actor::CanUSeDoor_(Actor *a1)
{
  return a1 && (!Actor_IsCreature(a1) || flt_B3A4A0 < (double)a1->vtbl->GetActorValue(a1, kActorVal_Intelligence));
}
