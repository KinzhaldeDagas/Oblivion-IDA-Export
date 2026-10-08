// Position type 5 registers NiPosKey_InsertType5Step for GuaranteeTimeRange boundary insertion.
int __cdecl NiPosKey_RegisterEvaluatorType5(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1; /*0x6c2930*/
  unk_B3D118[result] = (int)nullsub_returnFloat0_0arg; /*0x6c2932*/
  unk_B3CFF8[result] = (int)NiPosKey_EvaluateType5Step; /*0x6c293c*/
  unk_B3D238[result] = (int)sub_6C2740; /*0x6c2946*/
  unk_B3D650[result] = (int)NiPosKey_EvaluateType0; /*0x6c2950*/
  unk_B3D4A0[result] = (int)sub_6BF3C0; /*0x6c295a*/
  unk_B3D410[result] = (int)Shared_NoOpVirtual_60D0A0; /*0x6c2964*/
  unk_B3D1A8[result] = (int)NiPosKey_InsertType5Step; /*0x6c296e*/
  return result * 4; /*0x6c2978*/
}
