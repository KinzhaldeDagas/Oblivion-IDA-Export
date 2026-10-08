// Returns TimeGlobals field +5 TESGlobal value (time scale). Observed callers use it for magic cooldown and fast-travel time calculations.
double __thiscall TimeGlobals_GetTimeScale(_DWORD *this)
{
  return *(float *)(*(this + 5) + 0x24); /*0x4029d6*/
}
