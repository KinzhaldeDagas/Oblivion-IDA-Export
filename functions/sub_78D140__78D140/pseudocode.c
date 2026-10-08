//
// [2026-10-06 directional billboard] Verified camera position global is 0xB429AC; direction is 0xB2B6D8. SetCamera notifies all registered trees and changes the shared unit quad, so per-instance directional selection should avoid changing this shared state.
void __cdecl CSpeedTreeRT__SetCamera(const float *position3, const float *direction3)
{
  float v3; // edx
  float v4; // edx
  double v5; // st7
  float v6; // edx
  double v7; // st6
  float v8; // edx
  double v9; // st5
  float v10; // edx
  float v11; // edx
  float v12; // eax
  float x; // ecx
  float y; // edx
  float z; // eax
  int v16; // [esp+0h] [ebp-94h] BYREF
  OB_stVec3_010201A0 v17; // [esp+48h] [ebp-4Ch] BYREF
  float v18; // [esp+54h] [ebp-40h]
  float v19; // [esp+58h] [ebp-3Ch]
  float v20; // [esp+5Ch] [ebp-38h]
  float v21; // [esp+60h] [ebp-34h]
  float v22; // [esp+64h] [ebp-30h]
  float v23; // [esp+68h] [ebp-2Ch]
  OB_stVec3_010201A0 cameraDirection; // [esp+6Ch] [ebp-28h] BYREF
  float v25; // [esp+7Ch] [ebp-18h]
  float v26; // [esp+80h] [ebp-14h]
  int *v27; // [esp+84h] [ebp-10h]
  int v28; // [esp+90h] [ebp-4h]
  float position3b; // [esp+9Ch] [ebp+8h]
  float position3c; // [esp+9Ch] [ebp+8h]
  float position3d; // [esp+9Ch] [ebp+8h]
  float position3e; // [esp+9Ch] [ebp+8h]
  float position3a; // [esp+9Ch] [ebp+8h]

  v27 = &v16; /*0x78d168*/
  v28 = 0; /*0x78d170*/
  if ( position3 && direction3 ) /*0x78d182*/
  {
    position3b = *position3; /*0x78d190*/
    v21 = CSpeedTreeRT__s_cameraPosition[0]; /*0x78d193*/
    v3 = CSpeedTreeRT__s_cameraPosition[1]; /*0x78d199*/
    v26 = position3[1]; /*0x78d19f*/
    v22 = v3; /*0x78d1a2*/
    v4 = CSpeedTreeRT__s_cameraPosition[2]; /*0x78d1a8*/
    v25 = position3[2]; /*0x78d1ae*/
    v23 = v4; /*0x78d1b1*/
    v5 = position3b; /*0x78d1b4*/
    v6 = CSpeedTreeRT__s_cameraDirection[0]; /*0x78d1b7*/
    v18 = position3b; /*0x78d1bd*/
    v17.x = v6; /*0x78d1c0*/
    v7 = v26; /*0x78d1c3*/
    v8 = *(float *)&dword_B2B6DC; /*0x78d1c6*/
    v19 = v26; /*0x78d1cc*/
    v17.y = v8; /*0x78d1cf*/
    v9 = v25; /*0x78d1d2*/
    v10 = *(float *)&dword_B2B6E0; /*0x78d1d5*/
    v20 = v25; /*0x78d1db*/
    v17.z = v10; /*0x78d1de*/
    position3c = *direction3; /*0x78d1e3*/
    v25 = direction3[1]; /*0x78d1e9*/
    v26 = direction3[2]; /*0x78d1ef*/
    cameraDirection.x = position3c; /*0x78d1f5*/
    cameraDirection.y = v25; /*0x78d1fb*/
    cameraDirection.z = v26; /*0x78d201*/
    if ( v21 != v5 || v22 != v7 || v23 != v9 || OB_stVec3_NotEqual_010201A0(&v17, &cameraDirection) ) /*0x78d231*/
    {
      v11 = v19; /*0x78d253*/
      v12 = v20; /*0x78d256*/
      CSpeedTreeRT__s_cameraPosition[0] = v18; /*0x78d259*/
      x = cameraDirection.x; /*0x78d25f*/
      CSpeedTreeRT__s_cameraPosition[1] = v11; /*0x78d262*/
      y = cameraDirection.y; /*0x78d268*/
      CSpeedTreeRT__s_cameraPosition[2] = v12; /*0x78d26b*/
      z = cameraDirection.z; /*0x78d270*/
      CSpeedTreeRT__s_cameraDirection[0] = x; /*0x78d275*/
      *(float *)&dword_B2B6DC = y; /*0x78d27b*/
      *(float *)&dword_B2B6E0 = z; /*0x78d281*/
      CSpeedTreeRT__NotifyAllTreesOfEvent(1); /*0x78d286*/
      OB_CSimpleBillboard_ComputeUnitBillboard_010201A0(&cameraDirection.x); /*0x78d292*/
      CSpeedTreeRT__NotifyAllTreesOfEvent(1); /*0x78d29c*/
      position3d = asin(cameraDirection.z); /*0x78d2ac*/
      position3e = position3d * dbl_A8BA48; /*0x78d2b8*/
      position3a = 1.0 /*0x78d2d8*/
                 - (position3e - CSpeedTreeRT__s_horizontalFadeStartAngle)
                 / (CSpeedTreeRT__s_horizontalFadeEndAngle - CSpeedTreeRT__s_horizontalFadeStartAngle);
      if ( position3a < dbl_A2FC68 ) /*0x78d2e9*/
        position3a = 0.0; /*0x78d2ed*/
      if ( position3a > 1.0 ) /*0x78d2fa*/
        position3a = 1.0; /*0x78d2fe*/
      CSpeedTreeRT__s_horizontalFadeValue = position3a * dbl_A8C3F0 + dbl_A8C3E8; /*0x78d310*/
    }
  }
  else
  {
    OB_stString28_AssignBytes_010201A0( /*0x78d334*/
      &OB_g_strError_010201A0,
      "SetCamera() requires non-NULL position and direction values",
      0x3Bu);
  }
}
