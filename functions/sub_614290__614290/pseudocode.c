// Returns current-target reachability at +0x174, additionally forcing false when a non-water-capable actor cannot fight a swimming target.
char __thiscall sub_614290(int this)
{
  _DWORD *v2; // eax
  char result; // al

  if ( !CombatController_GetCurrentTarget(this) ) /*0x614293*/
    return *(_BYTE *)(this + 0x174); /*0x614293*/
  v2 = (_DWORD *)CombatController_GetCurrentTarget(this); /*0x61429e*/
  if ( !Actor_IsSwimming(v2) ) /*0x6142a5*/
    return *(_BYTE *)(this + 0x174); /*0x6142a5*/
  if ( Actor_IsSwimming(*(_DWORD **)(this + 0x3C)) ) /*0x6142b1*/
    return *(_BYTE *)(this + 0x174); /*0x6142b1*/
  result = Actor_CanFightInWater(*(void **)(this + 0x3C)); /*0x6142bd*/
  if ( result ) /*0x6142c4*/
    return *(_BYTE *)(this + 0x174); /*0x6142c8*/
  return result; /*0x6142c6*/
}
