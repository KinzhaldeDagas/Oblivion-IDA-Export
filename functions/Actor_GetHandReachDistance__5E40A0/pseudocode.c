// Returns the actor's hand-to-hand reach distance by converting the native hand-reach game setting through Calc_GetCombatDistance.
float __thiscall Actor_GetHandReachDistance(Actor *this)
{
  return Calc_GetCombatDistance(g_GameSettingStringPointers_B36CD8[0x6E]); /*0x5e40b2*/
}
