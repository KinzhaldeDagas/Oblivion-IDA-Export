// Fog decode: BSFogProperty default start/end helper used for active global B333E4 initialization.
void __thiscall sub_7C8270(float *this, float a2)
{
  *(this + 0xB) = (1.0 - a2 * dbl_A905E0) * dbl_A905D8;// Fog decode: writes BSFogProperty +0x2C fogStart default. /*0x7c8284*/
  *(this + 0xC) = flt_A3F4F0;                   // Fog decode: writes BSFogProperty +0x30 fogEnd default. /*0x7c828d*/
}
