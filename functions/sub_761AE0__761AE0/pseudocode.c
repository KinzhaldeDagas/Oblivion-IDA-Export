// MoonSugarEffect decode: builds a camera-relative D3D world matrix from NiTransform using column/row layout used for non-skinned world constants; translation subtracts CameraWorldTranslate/flt_B3F930/flt_B3F934.
// DX11 GPU-world matrix contract (2026-09-27): writes the twelve affine elements only. 3x3 source rotation is transposed into the row-vector D3D matrix and scaled; translation subtracts globals B3F92C/B3F930/B3F934 before projection. Existing destination elements3/7/11/15 are preserved. A rigid profile must prove the usual affine values, not assume arbitrary renderer caches have them.
float *__cdecl sub_761AE0(float *a1, float *a2, float *a3, float a4)
{
  *a1 = *a2 * a4; /*0x761af4*/
  a1[1] = a2[3] * a4; /*0x761afb*/
  a1[2] = a2[6] * a4; /*0x761b03*/
  a1[4] = a2[1] * a4; /*0x761b0b*/
  a1[5] = a2[4] * a4; /*0x761b13*/
  a1[6] = a2[7] * a4; /*0x761b1b*/
  a1[8] = a2[2] * a4; /*0x761b23*/
  a1[9] = a2[5] * a4; /*0x761b2b*/
  a1[0xA] = a4 * a2[8]; /*0x761b35*/
  a1[0xC] = *a3 - MEMORY[0xB3F92C]; /*0x761b40*/
  a1[0xD] = a3[1] - unk_B3F930; /*0x761b4c*/
  a1[0xE] = a3[2] - unk_B3F934; /*0x761b58*/
  return a1; /*0x761b5b*/
}
