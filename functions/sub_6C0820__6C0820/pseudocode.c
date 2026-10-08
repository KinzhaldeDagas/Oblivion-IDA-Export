// Position type 3 registers NiPosKey_InsertType3Cubic for GuaranteeTimeRange boundary insertion.
int __cdecl NiPosKey_RegisterEvaluatorType3(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1; /*0x6c0830*/
  unk_B3D118[result] = (int)sub_6C0430; /*0x6c0832*/
  unk_B3CFF8[result] = (int)NiPosKey_EvaluateType3Cubic; /*0x6c083c*/
  unk_B3D238[result] = (int)sub_6BFDB0; /*0x6c0846*/
  unk_B3D650[result] = (int)sub_6BFE90; /*0x6c0850*/
  unk_B3D4A0[result] = (int)sub_6BFBB0; /*0x6c085a*/
  unk_B3D410[result] = (int)sub_6C0170; /*0x6c0864*/
  unk_B3D1A8[result] = (int)NiPosKey_InsertType3Cubic; /*0x6c086e*/
  return result * 4; /*0x6c0878*/
}
