// 2026-05-24 SpeedTreeOBSE stock post-load pass: stock shadow projection parser for top-level 18000. Allocates 0x40-byte object at CSpeedTreeRT+0x50 and delegates parse to 0x7A5530. Preserve stock-safe family bytes; no later-family sidecar storage is implied.
void __thiscall CSpeedTreeRT__ParseShadowProjectionInfo(
        OB_CSpeedTreeRT_010201A0 *this,
        OB_CTreeFileAccess_010201A0 *file)
{
  OB_CProjectedShadow_010201A0 *v3; // eax
  OB_CProjectedShadow_010201A0 *v4; // eax

  v3 = (OB_CProjectedShadow_010201A0 *)FormHeapAlloc(0x40u); /*0x787426*/
  if ( v3 ) /*0x78743c*/
    v4 = OB_CProjectedShadow_ctor_010201A0(v3); /*0x787440*/
  else
    v4 = 0; /*0x787447*/
  this->projectedShadow = v4; /*0x787458*/
  OB_CProjectedShadow_Parse_010201A0(v4, file); /*0x78745b*/
}
