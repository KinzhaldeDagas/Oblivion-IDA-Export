// Oblivion Uniform virtual Mean: returns finite ExtReal { value = 0.5, code = Finite }. Slot identity is established by the Uniform RTTI/vtable.
OB_ExtReal_010201A0 *__stdcall OB_Uniform_Mean_010201A0(OB_ExtReal_010201A0 *result)
{
  result->value = kHeadBodyNormalMatchRadius; /*0x78e9aa*/
  result->code = OB_ExtReal_Finite_010201A0; /*0x78e9ac*/
  return result; /*0x78e9b3*/
}
