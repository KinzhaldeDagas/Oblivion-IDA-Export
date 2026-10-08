// Shader global table helper: store four dwords at dword_B46498 + 0x10 * index.
float *__cdecl OB_BSShader_SetSharedFloat4Constant_010201A0(
        unsigned __int16 slot,
        unsigned int x,
        unsigned int y,
        unsigned int z,
        unsigned int w)
{
  float *result; // eax

  result = &OB_ShaderConstantStorage_010201A0[4 * slot + 0x1A1]; /*0x7ecaf0*/
  *(_DWORD *)result = x; /*0x7ecaf5*/
  *((_DWORD *)result + 1) = y; /*0x7ecafb*/
  *((_DWORD *)result + 2) = z; /*0x7ecb02*/
  *((_DWORD *)result + 3) = w; /*0x7ecb05*/
  return result; /*0x7ecb08*/
}
