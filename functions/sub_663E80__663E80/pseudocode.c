void __thiscall sub_663E80(_BYTE *this)
{
  float duration; // [esp+0h] [ebp-4h]

  if ( !*(this + 0x7F9) ) /*0x663e80*/
  {
    duration = kTerrainLODQuadRayDirectionZ; /*0x663e90*/
    *(this + 0x7F9) = 1; /*0x663e95*/
    GameUI_QueueMessage(MEMORY[0xB389D8].value, 0, 1u, duration); /*0x663ea4*/
  }
}
