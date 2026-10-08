// Verified in OblivionNew 2026-09-26: accepts a changed positive gamma float, stores it at B06C2C and sets byte B34FA4. No direct D3D call here.
void __cdecl Renderer_SetGammaAndMarkDirty(float a1)
{
  if ( a1 != g_RequestedRenderGamma && a1 > 0.0 ) /*0x497b00*/
  {
    g_RequestedRenderGamma = a1; /*0x497b02*/
    MEMORY[0xB33E90][0x1114] = 1; /*0x497b08*/
  }
}
