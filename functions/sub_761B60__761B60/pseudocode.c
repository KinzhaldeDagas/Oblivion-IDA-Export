// MoonSugarEffect decode: alternate D3D matrix packer with translation in slots 3/7/11, still camera-relative. Used by some skin matrix formats.
float *__cdecl sub_761B60(float *a1, float *a2, float *a3, float a4)
{
  *a1 = *a2 * a4; /*0x761b74*/
  a1[1] = a2[1] * a4; /*0x761b7b*/
  a1[2] = a2[2] * a4; /*0x761b83*/
  a1[4] = a2[3] * a4; /*0x761b8b*/
  a1[5] = a2[4] * a4; /*0x761b93*/
  a1[6] = a2[5] * a4; /*0x761b9b*/
  a1[8] = a2[6] * a4; /*0x761ba3*/
  a1[9] = a2[7] * a4; /*0x761bab*/
  a1[0xA] = a4 * a2[8]; /*0x761bb5*/
  a1[3] = *a3 - MEMORY[0xB3F92C]; /*0x761bc0*/
  a1[7] = a3[1] - unk_B3F930; /*0x761bcc*/
  a1[0xB] = a3[2] - unk_B3F934; /*0x761bd8*/
  return a1; /*0x761bdb*/
}
