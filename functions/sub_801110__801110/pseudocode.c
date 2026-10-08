// Configure a shader texture stage for pixel-shader use: select the supplied texcoord index, disable fixed-function color/alpha ops and texture transform, set U/V address mode, set MAG/MIN/MIP filters, then apply the native filter preset. Mode-5 casters pass texcoord 0, WRAP, and linear filtering.
_BYTE *__cdecl BSShader_ConfigureTextureStageSampler(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx

  v4 = (_DWORD *)a1[3]; /*0x801119*/
  *a1 = a2; /*0x801122*/
  sub_772FF0(v4, 0xB, a2, 0);                   // D3DTSS_TEXCOORDINDEX: use the supplied coordinate set; all decoded mode-5 caster passes pass texcoord 0. /*0x801124*/
  sub_772FF0((_DWORD *)a1[3], 1, 1, 0);         // D3DTSS_COLOROP = D3DTOP_DISABLE because these passes use a pixel shader. /*0x801132*/
  sub_772FF0((_DWORD *)a1[3], 2, 2, 0);         // D3DTSS_COLORARG1 = D3DTA_TEXTURE. /*0x801140*/
  sub_772FF0((_DWORD *)a1[3], 4, 1, 0);         // D3DTSS_ALPHAOP = D3DTOP_DISABLE because these passes use a pixel shader. /*0x80114e*/
  sub_772FF0((_DWORD *)a1[3], 5, 2, 0);         // D3DTSS_ALPHAARG1 = D3DTA_TEXTURE. /*0x80115c*/
  v5 = (_DWORD *)a1[3]; /*0x801161*/
  *((_BYTE *)a1 + 0x5A) = 0;                    // No texture transform matrix is installed for this stage. /*0x80116a*/
  sub_772FF0(v5, 0x18, 0, 0);                   // D3DTSS_TEXTURETRANSFORMFLAGS = D3DTTFF_DISABLE. /*0x80116e*/
  sub_773100((_DWORD *)a1[3], 1, a3, 0, 0);     // D3DSAMP_ADDRESSU: use supplied address mode; decoded mode-5 caster passes initialize this to D3DTADDRESS_WRAP. /*0x801181*/
  sub_773100((_DWORD *)a1[3], 2, a3, 0, 0);     // D3DSAMP_ADDRESSV: use supplied address mode; decoded mode-5 caster passes initialize this to D3DTADDRESS_WRAP. /*0x801190*/
  sub_773100((_DWORD *)a1[3], 5, a4, 0, 0);     // D3DSAMP_MAGFILTER: use supplied filter; decoded mode-5 caster passes initialize this to D3DTEXF_LINEAR. /*0x8011a3*/
  sub_773100((_DWORD *)a1[3], 6, a4, 0, 0);     // D3DSAMP_MINFILTER: use supplied filter; decoded mode-5 caster passes initialize this to D3DTEXF_LINEAR. /*0x8011b2*/
  sub_773100((_DWORD *)a1[3], 7, a4, 0, 0);     // D3DSAMP_MIPFILTER: use supplied filter; decoded mode-5 caster passes initialize this to D3DTEXF_LINEAR. /*0x8011c1*/
  return (_BYTE *)NiD3DTextureStage_ApplyFilterPreset(a1, 2u);// Apply native filter preset 2 after the explicit sampler fields; for these passes this is the engine trilinear preset. /*0x8011cf*/
}
