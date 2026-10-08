// Position type 0 registers no boundary-insertion callback in the GuaranteeTimeRange dispatch table.
int __cdecl NiPosKey_RegisterEvaluatorType0(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1; /*0x6bc210*/
  unk_B3D118[result] = (int)nullsub_returnFloat0_0arg; /*0x6bc212*/
  unk_B3CFF8[result] = (int)NiPosKey_EvaluateType0; /*0x6bc21c*/
  unk_B3D238[result] = (int)NiPosKey_EvaluateType0; /*0x6bc226*/
  unk_B3D650[result] = (int)NiPosKey_EvaluateType0; /*0x6bc230*/
  unk_B3D4A0[result] = (int)sub_6BBE80; /*0x6bc23a*/
  unk_B3D410[result] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bc244*/
  unk_B3D1A8[result] = 0; /*0x6bc24e*/
  return result * 4; /*0x6bc258*/
}
