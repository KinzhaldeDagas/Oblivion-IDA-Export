void __thiscall CSpeedTreeRT__SetLodLevel(OB_CSpeedTreeRT_010201A0 *this, float lodLevel)
{
  OB_STreeInstanceData *instanceData; // eax

  if ( lodLevel < 0.0 || lodLevel > 1.0 ) /*0x78c12a*/
  {
    OB_stString28_AssignBytes_010201A0( /*0x78c14f*/
      &OB_g_strError_010201A0,
      "SetLodLevel() expects a value in the range of 0.0 to 1.0",
      0x38u);
  }
  else
  {
    instanceData = this->instanceData; /*0x78c12c*/
    if ( instanceData ) /*0x78c131*/
      instanceData->lodLevel = lodLevel; /*0x78c133*/
    else
      this->treeEngine->currentLod = lodLevel; /*0x78c13b*/
  }
}
