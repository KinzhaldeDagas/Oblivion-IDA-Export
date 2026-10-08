// CSpeedTreeRT::SetWindStrength. Accepts nonnegative strength, defaults old strength/time offset from CWindEngine on -1.0 sentinels, updates wind engine, and invalidates CPU-wind branch/frond/leaf caches.
float __thiscall CSpeedTreeRT__SetWindStrength(
        OB_CSpeedTreeRT_010201A0 *this,
        float newStrength,
        float oldStrength,
        float frequencyTimeOffset)
{
  int v4; // edi
  double v6; // st6
  int branchWindMethod; // eax
  OB_CIndexedGeometry_010201A0 *branchGeometry; // eax
  OB_CIndexedGeometry_010201A0 *frondGeometry; // eax
  OB_CWindEngine_010201A0 *windEngine; // eax
  rsize_t oldTimeShift[2]; // [esp+8h] [ebp-64h] BYREF
  float v14; // [esp+58h] [ebp-14h]
  char *v15; // [esp+5Ch] [ebp-10h]
  int v16; // [esp+68h] [ebp-4h]
  float frequencyTimeOffseta; // [esp+7Ch] [ebp+10h]

  v15 = (char *)oldTimeShift + 4; /*0x78bc18*/
  v14 = 0.0; /*0x78bc21*/
  v16 = 0; /*0x78bc24*/
  if ( newStrength < 0.0 ) /*0x78bc33*/
  {
    LODWORD(oldTimeShift[0]) = 0x32; /*0x78bcde*/
    OB_stString28_AssignBytes_010201A0( /*0x78bcec*/
      &OB_g_strError_010201A0,
      v4,
      "SetWindStrength() expects new wind strength >= 0.0",
      oldTimeShift[0]);
  }
  else
  {
    v6 = kTerrainLODQuadRayDirectionZ; /*0x78bc39*/
    if ( v6 == oldStrength ) /*0x78bc47*/
      oldStrength = this->windEngine->windStrength; /*0x78bc4f*/
    if ( v6 == frequencyTimeOffset ) /*0x78bc5a*/
      frequencyTimeOffset = this->windEngine->timeFrequencyShift; /*0x78bc61*/
    frequencyTimeOffseta = OB_CWindEngine_SetWindStrength_010201A0( /*0x78bc83*/
                             this->windEngine,
                             newStrength,
                             oldStrength,
                             frequencyTimeOffset);
    branchWindMethod = this->windEngine->branchWindMethod; /*0x78bc86*/
    v14 = frequencyTimeOffseta; /*0x78bc8f*/
    if ( branchWindMethod == 1 ) /*0x78bc92*/
    {
      branchGeometry = this->branchGeometry; /*0x78bc94*/
      if ( branchGeometry ) /*0x78bc99*/
        branchGeometry->valid = 0; /*0x78bc9b*/
    }
    if ( this->windEngine->frondWindMethod == 1 ) /*0x78bca5*/
    {
      frondGeometry = this->frondGeometry; /*0x78bca7*/
      if ( frondGeometry ) /*0x78bcac*/
        frondGeometry->valid = 0; /*0x78bcae*/
    }
    windEngine = this->windEngine; /*0x78bcb1*/
    if ( windEngine->leafWindMethod == 1 || windEngine->rockingLeaves ) /*0x78bcba*/
      OB_CLeafGeometry_Invalidate_010201A0(this->leafGeometry); /*0x78bcc2*/
  }
  return v14; /*0x78bcca*/
}
