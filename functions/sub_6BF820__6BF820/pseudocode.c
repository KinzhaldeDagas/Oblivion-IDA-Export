// Position type 1 registers NiPosKey_InsertType1Linear for GuaranteeTimeRange boundary insertion.
int __cdecl NiPosKey_RegisterEvaluatorType1(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1; /*0x6bf830*/
  unk_B3D118[result] = (int)nullsub_returnFloat0_0arg; /*0x6bf832*/
  unk_B3CFF8[result] = (int)NiPosKey_EvaluateType1Linear; /*0x6bf83c*/
  unk_B3D238[result] = (int)sub_6BF480; /*0x6bf846*/
  unk_B3D650[result] = (int)NiPosKey_EvaluateType0; /*0x6bf850*/
  unk_B3D4A0[result] = (int)sub_6BF3C0; /*0x6bf85a*/
  unk_B3D410[result] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bf864*/
  unk_B3D1A8[result] = (int)NiPosKey_InsertType1Linear; /*0x6bf86e*/
  return result * 4; /*0x6bf878*/
}
