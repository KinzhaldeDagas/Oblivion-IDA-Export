// Position type 2 registers NiPosKey_InsertType2Cubic for GuaranteeTimeRange boundary insertion.
int __cdecl NiPosKey_RegisterEvaluatorType2(int a1, int a2)
{
  int result; // eax

  result = a2 + 6 * a1; /*0x6bcec0*/
  unk_B3D118[result] = (int)sub_6BC780; /*0x6bcec2*/
  unk_B3CFF8[result] = (int)NiPosKey_EvaluateType2Cubic; /*0x6bcecc*/
  unk_B3D238[result] = (int)sub_6BC480; /*0x6bced6*/
  unk_B3D650[result] = (int)sub_6BC560; /*0x6bcee0*/
  unk_B3D4A0[result] = (int)sub_6BC2C0; /*0x6bceea*/
  unk_B3D410[result] = (int)sub_6BC600; /*0x6bcef4*/
  unk_B3D1A8[result] = (int)NiPosKey_InsertType2Cubic; /*0x6bcefe*/
  return result * 4; /*0x6bcf08*/
}
