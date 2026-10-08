// Pass238: Lighting30 helper is not the alternate explicit fog writer.
// DX11 ordinary profile audit: this helper acts only on selectors156..158 with nonnull property; ordinary12D..146 does not execute these time/emission writes. No broader state behavior inferred.
// Row8 closure update 2026-10-01: direct byte search with known B47018 positive control locates the B46FF8 stores in this function. The unsigned selector-156h <=2 gate confines row8.x writes to156..158; ordinary12D..146 returns without dereferencing property/material or touching globals. Tests execute the pinned original215-byte function with poison data pointers for every ordinary selector. Row8.yzw have no stores in the inspected ordinary pipeline; light loops use nonnegative slots rooted at B47008/B47018. Preserve row8 only under this guarded ordinary profile; special selectors need their own producer.
void __stdcall sub_7FAB60(int a1, int a2, int a3)
{
  float v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  if ( a1 ) /*0x7fab6a*/
  {
    if ( (unsigned int)(a3 - 0x156) <= 2 ) /*0x7fab7e*/
    {
      if ( *(_BYTE *)(a1 + 0xE4) ) /*0x7fab84*/
      {
        v3 = *(float *)(a2 + 0x44); /*0x7fabae*/
        OB_ShaderConstantStorage_010201A0[0x479] = *(float *)(a2 + 0x40) * dbl_A90628; /*0x7fabb6*/
        if ( a3 == 0x158 ) /*0x7fabbc*/
          OB_ShaderConstantStorage_010201A0[0x3F9] = GetTimer(0, 1) / dbl_A2F938 * dbl_A56E20 * v3 * dbl_A3DDD8; /*0x7fabe2*/
      }
      else
      {
        OB_ShaderConstantStorage_010201A0[0x479] = sub_7C8480((float *)a1); /*0x7fabf5*/
        if ( a3 == 0x158 ) /*0x7fac01*/
        {
          v4 = *(_DWORD *)(a1 + 0xEC); /*0x7fac0d*/
          OB_ShaderConstantStorage_010201A0[0x3F9] = GetTimer(0, 1) / dbl_A2F938 * dbl_A56E20 * (double)v4; /*0x7fac29*/
        }
      }
    }
  }
}
