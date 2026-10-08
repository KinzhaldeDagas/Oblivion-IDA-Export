// Marks CombatController+0x15A as a blocking ally and starts timer: +0x164=current controller time +0x44, +0x168=game setting, +0x16C=-1.
void __thiscall CombatController_MarkAsBlockingAlly(int this)
{
  float v1; // [esp+0h] [ebp-4h]

  if ( !*(_BYTE *)(this + 0x15A) ) /*0x612cf1*/
  {
    v1 = g_GameSettingStringPointers_B36CD8[0x16E];// Blocking-ally duration is fCombatInTheWayTimer (default 1.0 s). /*0x612d00*/
    *(float *)(this + 0x164) = *(float *)(this + 0x44); /*0x612d06*/
    *(float *)(this + 0x168) = v1; /*0x612d0f*/
    *(float *)(this + 0x16C) = kTerrainLODQuadRayDirectionZ; /*0x612d1b*/
    *(_BYTE *)(this + 0x15A) = 1; /*0x612d21*/
  }
}
