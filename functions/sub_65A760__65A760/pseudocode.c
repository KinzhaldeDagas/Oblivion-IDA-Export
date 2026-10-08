// [Controller decode 2026-07-09] Applies a target size to the actor current character-controller proxy.
//
// [Controller decode 2026-07-09] Applies a target size to the actor's current character-controller proxy.
void __thiscall Actor_SetCharacterControllerSize(Actor *this, float a2)
{
  bhkCharacterProxy *CharProxy; // eax

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a760*/
  if ( CharProxy ) /*0x65a767*/
    bhkCharacterController_SetTargetSize((int)CharProxy, a2); /*0x65a773*/
}
