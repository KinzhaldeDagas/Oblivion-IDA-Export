double __thiscall Actor_GetHandReachDistance(Actor *this)
{
  return Calc_GetCombatDistance(fHandReachMult);
}
