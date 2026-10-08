// Oblivion position evaluator for numeric type 0: ignores segment time and both keys and writes the engine's zero position constant.
float *__cdecl NiPosKey_EvaluateType0(int a1, int a2, int a3, float *a4)
{
  *a4 = g_zeroNiPoint3; /*0x6bbb8a*/
  a4[1] = *(&g_zeroNiPoint3 + 1); /*0x6bbb92*/
  a4[2] = MEMORY[0xB3F9B0][0]; /*0x6bbb9b*/
  return a4; /*0x6bbb9e*/
}
