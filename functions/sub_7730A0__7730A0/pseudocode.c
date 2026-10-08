// DX10OBSE mesh-texturing decode: D3D texture-stage state lookup. Uses B427E0 state-to-slot table; returns override/current value plus source flag when state is tracked by the stage state group.
// DX11 verified: state11 uses WORD B427E0+22 inverse slot; slot>=8 => absent. Override flag group+5C+slot wins with DWORD +3C+4slot, else base flag+2C+slot with DWORD +C+4slot. Unset leaves caller stage-index default.
char __thiscall sub_7730A0(_DWORD *this, int a2, _DWORD *a3, _BYTE *a4)
{
  unsigned __int16 v4; // ax

  v4 = *(_WORD *)(2 * a2 + 0xB427E0); /*0x7730a4*/
  if ( v4 >= 8u ) /*0x7730b0*/
    return 0; /*0x7730b0*/
  if ( *((_BYTE *)this + v4 + 0x5C) ) /*0x7730b5*/
  {
    *a3 = *(this + v4 + 0xF); /*0x7730c8*/
    *a4 = 0; /*0x7730ca*/
    return 1; /*0x7730cf*/
  }
  if ( !*((_BYTE *)this + v4 + 0x2C) ) /*0x7730d2*/
    return 0; /*0x7730ef*/
  *a3 = *(this + v4 + 3); /*0x7730e5*/
  *a4 = 1; /*0x7730e7*/
  return 1; /*0x7730cf*/
}
