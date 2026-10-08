// Returns true for movement states 5/6/4 (Swimming/Projectile/Flying). Controller uses this to allow vertical desired movement/orientation handling outside ordinary ground/air movement.
BOOL __thiscall sub_8903D0(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = this + 0x78; /*0x8903d1*/
  return hkCharacterContext_GetStateId(this + 0x78) == 5 /*0x8903fd*/
      || hkCharacterContext_GetStateId(v1) == 6
      || hkCharacterContext_GetStateId(v1) == 4;
}
