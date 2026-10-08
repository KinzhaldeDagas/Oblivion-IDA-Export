char __thiscall sub_6195B0(TESObjectREFR **this)
{
  TESObjectREFR *v2; // edi
  TESObjectREFR *CurrentTarget; // eax
  _DWORD *v4; // ebx
  void (__thiscall **v5)(_DWORD *, int); // edi
  int v6; // eax
  float outMaximumDistance; // [esp+8h] [ebp-8h] BYREF
  float outOptimalDistance; // [esp+Ch] [ebp-4h] BYREF

  outOptimalDistance = 0.0; /*0x6195b7*/
  outMaximumDistance = 0.0; /*0x6195bd*/
  CombatController_GetRangedDistanceBounds(this, &outOptimalDistance, &outMaximumDistance); /*0x6195cd*/
  if ( *((float *)this + 0x61) < 0.0 ) /*0x6195df*/
  {
    v2 = *(this + 0xF); /*0x6195e1*/
    CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget((int)this); /*0x6195e8*/
    *((float *)this + 0x61) = TESObjectREFR_GetSurfaceDistance(v2, CurrentTarget, 0); /*0x6195f4*/
  }
  if ( outMaximumDistance >= (double)*((float *)this + 0x61) ) /*0x61960e*/
    return 0; /*0x619634*/
  v4 = *(this + 0xF); /*0x619611*/
  v5 = (void (__thiscall **)(_DWORD *, int))(*v4 + 0x340); /*0x619618*/
  v6 = CombatController_GetCurrentTarget((int)this); /*0x61961e*/
  (*v5)(v4, v6); /*0x619628*/
  return 1; /*0x61962b*/
}
